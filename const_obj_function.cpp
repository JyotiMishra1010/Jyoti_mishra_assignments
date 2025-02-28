//constant object ,non-const object ,constant variable constant funciton
#include<iostream>
using namespace std;
class A {
public:
	const int count = 0;
	//constant function
	 void countNO() const
	{cout << "count:" << count << endl;
	}
};
int main()
{A obj[3];
obj[0].countNO();
obj[1].countNO();
obj[1].countNO();
const A  object;
object.countNO();

return 0;
}
