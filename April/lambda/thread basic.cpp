#include<iostream>
#include<thread>
//basic of thread
/*we write join for waits for the thread to finish
't' is thread object which is for creates and start a new thread*/



void display() {
	std::cout << "this is display function" << std::endl;

}
void function(int n) {
	std::cout << "this is function with arguments " << n << std::endl;
}
void fun2(int& val) {
	val += 1;
	std::cout << "this is with reference function" << val << std::endl;
}
int main() {
	int val = 20;
	std::thread t(display);
	std::thread t2(function, 50);//call by value
	std::thread t3(fun2, std::ref(val));//call by reference

	t.join();
	t2.join();
	t3.join();


	return 0;
}
