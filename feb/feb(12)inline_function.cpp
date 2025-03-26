
#include<iostream>
using namespace std;
//inline fuction with multiple parameters

inline int add(int a, int b)
{
	return a + b;
}
//basic use of inline fuction 
inline int cube(int a)
{
	return a * a * a;
}

// inline fuction inside a class
class Math {
	public:
		inline int square(int n) {
			return n * n;
		}
};

int main()
{
	int n,a,b;
	cout << "enter the no. for cube ";
	cin >> n;
	cout << "cube of that no.is:  " << cube(n);//fuction is expanded in line when it is called.
	cout<<endl<<"enter two no. for perform operation addition: ";
  cin>>a>>b;
  cout<<endl<<"addition is :  "<<add(a,b);
  Math obj;
  cout<<endl<<"square of entered no.  "<<obj.square(n)<<endl;
 
 return 0;
}
