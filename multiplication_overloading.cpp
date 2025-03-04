//multiplication overloading
#include<iostream>
using namespace std;
class myclass {
private:
	int value;
public:
	myclass(int val = 0):value(val) {}
	 
	myclass operator*(const myclass& obj) {
		
		return myclass(value * obj.value);
	}
	myclass operator*(int num) {
		
		return myclass(value * num);
	}
	void display()
	{
		cout << "value:" << value << endl;
	}
};
int main()
{
	myclass obj(10);
	myclass obj2(5);
	obj.display();
	obj2.display();
	myclass result1 = obj * obj2;
	cout << "After obj1 * obj2:" << endl;
	result1.display();

	// Multiplication by an integer
	myclass result2 = obj * 2;
	cout << "After obj1 * 2:" << endl;
	result2.display();

	return 0;


}
