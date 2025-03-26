#include<iostream>
using namespace std;
//explicit key word can not use in function 
class A {
public:
	//implicit conversion 
	A(int x)
	{
		cout << "this default constructor"<<x<<endl;
	}
	// explicit paramterized constructor
	explicit A(int a, int b) {
		cout << "this is explicit key word use case"<<a<<" "<<b<<endl;
	}
	//explicit copy constructor
	explicit A( const A& object)
	{
		cout << "this explicit copy constructor ";

	}
};
int main()
{
	A obj = 10;
	A obj2(19, 20);
	A obj3(obj);
	return 0;
}
