//static variable and static function
#include<iostream>
using namespace std;
class A {
private :
	static int count;
public:
	A()
	{
		count++;
	}
	//static function
	static void countNO()
	{
		cout << "count:" << count << endl;
	}
};
int A::count = 0;
int main()
{
	A obj[3];
	obj->countNO();
	
	
}
