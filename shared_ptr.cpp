
//shared pointer

#include<iostream>
#include<memory>
class myclass {
public:
	myclass() {
		std::cout << "this is constructor" << std::endl;
	}
	~myclass() {
		std::cout << "this is destructor called" << std::endl;
	}


};
int main() {
	std::shared_ptr<myclass>ptr1 = std::make_shared<myclass>();
	std::cout << ptr1.use_count()<<std::endl;//1
	std::shared_ptr<myclass>ptr2 = ptr1;
	std::cout << ptr1.use_count() << std::endl;//2
	std::shared_ptr<myclass>ptr3 = ptr1;
	std::cout << ptr3.use_count() << std::endl;//3
	ptr1.reset();
	std::cout << ptr1.use_count() << std::endl;//0
	return 0;


}
