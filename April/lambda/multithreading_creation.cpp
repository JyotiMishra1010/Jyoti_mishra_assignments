#include<iostream>
#include<thread>
//using function pointer thread t1
void print() {
	std::cout << "this is function thread" << std::endl;
}
//using static function thread t2
static int display(int a) {
	std::cout << "this is display function,value of a is " << std::endl;
	return a;
}
//using functors thread t3
class functors {
public:
	void operator()() {
		std::cout << "this from functor\n";
	}
};
//through member function thread t4
class myclass {
	public:
		void mclass() {
			std::cout << "this is member function of another class which name is myclass" << std::endl;
		}
};
int main() {
	std::thread t1(print);
	
	std::thread t2( display, 10);
	functors obj;
	std::thread t3(obj);
	myclass obj2;
	std::thread t4(&myclass::mclass, &obj2);
	t1.join();
	t2.join();
	t3.join();
	t4.join();
	//using lambda expression
	std::thread t5([]() {
		std::cout << "this is lambda function" << std::endl;
		});
	t5.join();
	return 0;
}
