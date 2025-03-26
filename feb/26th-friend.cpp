//A friend function in C++ is a function that is not a part of the class but still has permission to access private and protected members of the class.
#include<iostream>
using namespace std;
class baseclass {
private :
	int age;
	string name;
public:
	baseclass(int a) :age(a){}
	void fun()
	{
		cout << "this is public part of the class" << endl;
	}
	friend void fun2(baseclass b1);

};
void fun2(baseclass b1) {
	cout << "this is child class function\n the value of age from private of class base: " << b1.age << endl;
}
int main()
{
	baseclass obj(9);
	
	fun2(obj);
	return 0;

}
