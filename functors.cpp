//functor (function object)


#include<iostream>
class myclass {
	int value;
public:
	myclass()
	{
		value = 1;
	}
	myclass(int val):value(val){}//constructor to store value
	int operator()(int a, int b)
	{
		return a * b;
	}
};



int main() {
	myclass obj;
	std::cout << "result::" << obj(10, 20) << std::endl;
	myclass obj2;
	std::cout << obj2(10,7)<<std::endl;
	return 0;
}
