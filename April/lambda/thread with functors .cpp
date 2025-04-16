#include<iostream>
#include<thread>
//thread with functors(that is class or struct that overloads operator so it can be used like a funciton)
class myclass {
public:
	void operator()()const
	{
		std::cout << "hello form fucntion" << std::endl;
	} 
	//functors with argumenets
	void operator()(int a, int b) const {
		std::cout << "addition " << a + b << std::endl;
	}

};
int main() {
	myclass m;
	std::thread t(m);
	std::thread t2(m, 5, 5);
	t.join();
	t2.join();
	return 0;
}
