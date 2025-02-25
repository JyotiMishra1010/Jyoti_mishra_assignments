//inheritance
//compile time polymorphism
//run time polymorphism
#include<iostream>
using namespace std;
class myclass {
public:
	string name;
	int age;
	void show() {
		cout << "this is base class funtion";
	}
	virtual void print() {
		cout << "this is virtual function" << endl;
	}
};
class derived : public myclass {
public:
	int roll_no;
	void getinfo()
	{
		cout << "name:" << name << endl;
		cout << "age:" << age << endl;
		cout << "roll_no" << roll_no << endl;
	}
	void show() {
		cout << "this is child class funtion"<<endl;
	}
	 void print ()override {
		cout << "this is child class override  function" << endl;
	}
};
int main()
{
	derived obj;
	obj.name = "abc";
	obj.age = 15;
	obj.roll_no = 11;
	obj.getinfo();
	obj.show();
	obj.print();


	//if we create a derived class and then create object for derived class ,
	// so first base class constructor will call then derived call constructor will call.
	return 0;

}