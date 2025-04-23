#include<iostream>
#include<thread>
#include<mutex>
int count = 0;
std::mutex mtx;
void increment() {
	for (int i = 0;i < 500;i++) {
		std::lock_guard<std::mutex>lock(mtx);
		count++;
	}
	//or we can also write
	/*for (int i = 0;i < 500;i++) {
		mtx.lock();
		++count;
		mtx.unlock();
	}
}*/
int main() {
	std::thread t1(increment);
	std::thread t2(increment);
	t1.join();
	t2.join();
	std::cout << "this value of count" << count << std::endl;
	return 0;
	
}
