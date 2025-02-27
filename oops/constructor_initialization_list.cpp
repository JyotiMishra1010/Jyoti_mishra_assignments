//Constructor Initialization List in C++
//A constructor initialization list is a way to initialize class members directly before the constructor body executes.
#include<iostream>
#include<string>
using namespace std;
class person {
public:
	string name;
	int age;
	//constructor with initialization list
	person(string a, int b) :name(a), age(b) {
		cout << "this is  constructor " << endl;
	}
};
int main()
{
	person obj("jyoti",20);
	return 0;


}
