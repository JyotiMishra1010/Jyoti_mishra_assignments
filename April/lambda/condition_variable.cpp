#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <chrono>

// Global shared data
std::condition_variable cv;
std::mutex m;
long balance = 0;

// funciton to add money
void addmoney(int money) {
    std::lock_guard<std::mutex> lg(m);
    balance += money;
    std::cout << "Money added to your account: " << balance << std::endl;
    cv.notify_one(); // notify the waiting thread
}

//  to withdraw money
void withdrawmoney(int money) {
    std::unique_lock<std::mutex> ul(m);

    // wait until balance is not zero
    cv.wait(ul, [] {return (balance != 0) ? true : false;});

    if (balance >= money) {
        balance -= money;
        std::cout << "Amount deducted: " << money << std::endl;
    }
    else {
        std::cout << "Amount can't be deducted. Current balance is insufficient. Requested: " << money << std::endl;
    }

    std::cout << "Current balance is: " << balance << std::endl;
}


int main() {
    std::thread t1(addmoney, 1000);
    std::this_thread::sleep_for(std::chrono::seconds(2)); // Delay to simulate time gap
    std::thread t2(withdrawmoney, 300);

    t1.join();
    t2.join();

    return 0;
}
