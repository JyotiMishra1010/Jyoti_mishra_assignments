#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <chrono>
#include<queue>

// Global shared data
std::condition_variable cv_producer, cv_consumer;
const int maxi = 5;
std::mutex m;
bool flag = false;
std::queue<int> q;


void producer() {
    int item = 1;
    while (true)
    {
        std::unique_lock<std::mutex> lock(m);

        cv_producer.wait(lock, [] {return q.size() < maxi;});

        std::cout << "producer proceed" << item << std::endl;
        q.push(item);
        lock.unlock();
        cv_consumer.notify_one();
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

void consumer() {
    std::unique_lock<std::mutex> lock(m);
    cv_consumer.wait(lock, [] {return !q.empty();});
    int item = q.front();
    q.pop();
    std::cout << "consumer consumed:" << item << std::endl;
    lock.unlock();
    cv_producer.notify_one();
    std::this_thread::sleep_for(std::chrono::seconds(5));


    
}


int main() {
    std::thread t1(producer);
    std::this_thread::sleep_for(std::chrono::seconds(2)); // Delay to simulate time gap
    std::thread t2(consumer);

    t1.join();
    t2.join();

    return 0;
}
