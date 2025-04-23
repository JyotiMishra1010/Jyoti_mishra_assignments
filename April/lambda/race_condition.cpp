#include<iostream>
#include<thread>
#include<mutex>
int count = 0;
void increment() {
	for (int i = 0;i < 500;i++) {
		count++;
	}
}
int main() {
	std::thread t1(increment);
	std::thread t2(increment);
	t1.join();
	t2.join();
	std::cout << "this value of count" << count << std::endl;
	return 0;
	
}
//it can give the wrong result bcz it's race condition where multiple threads work on change of same common data that is race condition
