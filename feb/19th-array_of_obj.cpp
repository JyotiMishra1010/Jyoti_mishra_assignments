// print no.of objects count...
#include<iostream>
using namespace std;
class A {
public:
	A()
	{
		static int count=0;
		count++;
		cout << count<<endl;

	}
};

int main()
{
	A obj[12];
	return 0;

}
