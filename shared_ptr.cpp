
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
	void show() {
		std::cout << "this function is in class" << std::endl;
	}


};
int main() {
	std::shared_ptr<myclass>ptr1 = std::make_shared<myclass>();
	//through get
	myclass* rawptr = ptr1.get();
	rawptr->show();


	std::cout << ptr1.use_count()<<std::endl;
	std::shared_ptr<myclass>ptr2 = ptr1;
	std::cout << ptr1.use_count() << std::endl;
	std::shared_ptr<myclass>ptr3 = ptr1;
	std::cout << ptr3.use_count() << std::endl;
	ptr1.reset();
	std::cout << ptr1.use_count() << std::endl;


	

	return 0;


}
