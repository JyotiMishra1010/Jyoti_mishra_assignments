//subtraction overloading prefix and postfix
#include<iostream>
using namespace std;
class myclass {
private:
	int value;
public:
	myclass(int val = 0):value(val) {}
	 
	myclass& operator--() {
		--value;
		return *this;
	}
	myclass operator--(int) {
		myclass temp = *this;
		--value;
		return temp;
	}
	void display()
	{
		cout << "value:" << value << endl;
	}
};
int main()
{
	myclass obj(10);
	cout << "original";
	obj.display();
	(--obj).display();//prefix
	(obj--).display();//postfix
	obj.display();
	return 0;


}
