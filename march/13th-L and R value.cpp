#include<iostream>
using namespace std;
int main(){
  //lvalue
int x=10;//x is l value ->it have its memory address ,which can access & operator 
int *p=&x;
  //r value
int n=5+18;//5+18 is r value , it don't have memory address, can't be define in left side 
int &a=x;
int &&b = 20;

  cout<<"x value"<< x<<endl;
   cout<<"x address"<< p<<endl;
   cout<<"n=5+18="<< n<<endl;
   cout<<"x address (&a)"<< a<<endl;
  cout<<"b value "<< a<<endl;
  
  return 0

  

}
