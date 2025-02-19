#include<iostream>
using namespace std;
class newclass{
int a;
float b;
string s;
public:
newclass()
{
cout<<"this is constructor "<<endl;}
~newclass()
{
cout<<"this is destructor"<<endl;}

};
int main()
{ newclass obj[3];//array of objects 
return 0;
}
//it will print 3 time "this is constructor" and 3 times "this is destructor" 
