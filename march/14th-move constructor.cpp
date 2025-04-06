#include<iostream>
class myclass {
private:
	int* data;
public:
	//constructor
	myclass(  int value):data(new int (value)) {
		std::cout << "constructor called"<<std::endl;
	}
	//copy constructor 
	myclass(const myclass& obj) {
		data = new int(*obj.data);
		std::cout << "copy constructor " << std::endl;

	}
	//move constructor
	myclass(myclass&& obj) {
		data = obj.data;
		obj.data = nullptr;
	std::cout << "this is move constructor" << std::endl;
	}
	~myclass() {
		delete data;
	}

	void display() {
		std::cout << "Data" << data << std::endl;
	}
};
int main() {
	myclass a(10);
	myclass b = a; //copy consturctor
	myclass c = std::move(a);//move constructor

	b.display();
	c.display();
	return 0;
}
