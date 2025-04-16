#include<iostream>
#include<thread>
//thread with lambda 
int main() {
	int value = 50;
	//lambda capturing by value
	std::thread t([value] {
		std::cout << "this is from inside of lambda  " << value << std::endl;
		});
	//lambda capturing by reference

	std::thread t2([&value] {
		value += 30;
		std::cout << "this is from inside of lambda (with reference )  " << value << std::endl;
		});
	t.join();
	t2.join();
	return 0;
}
