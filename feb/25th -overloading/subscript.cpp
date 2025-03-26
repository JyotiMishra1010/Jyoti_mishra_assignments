//there are some operators which can't be overload [],->,=
#include<iostream>
using namespace std;
class myclass {
	int arr[2];
public:
	myclass(int x = 0,int y=0)
	{
		arr[0] = x;
		arr[1] = y;
	}
	void print()
	{
		cout << "x" << arr[0] << "y" << arr[1] << endl;
	}
	int& operator [](int pos) {
		if (pos == 0)
			return arr[0];
		else if (pos == 1)
			return arr[1];
		else
			cout << "this out of bound" << endl;
		exit(0);
	}
	
};
int main()
{ 
	myclass obj(5,5);
	obj.print();//print 5,5
	obj[0] = 7;//it will show error bcz [] subscript operator can't be overload so ,
	obj[1] = 8;
	obj.print();//print 7,8
	myclass obj2;
	obj2.print();//print 0,0

	return 0;
}
