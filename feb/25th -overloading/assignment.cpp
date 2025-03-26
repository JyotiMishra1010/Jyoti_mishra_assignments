#include<iostream>
#include<cstring>
using namespace std;
class myclass {
private:
	char* str;
public:
	myclass(const char* s="")
	{
		str = new char[strlen(s) + 1];
		strcpy(str, s);
	}
	//copy constructor 
	myclass(const myclass& obj)
	{
		str = new char[strlen(obj.str) + 1];
		strcpy(str, obj.str);
	}

	//overloaded assignment operator
	myclass& operator=(const myclass& obj) {
		if (this != &obj) {
			delete[] str;
			str = new char[strlen(obj.str) + 1];
			strcpy(str, obj.str);
		}
		return *this;

	}
	void display()const {
		cout << str << endl;
	}
	~myclass()
	{
		delete[] str;
	}
};
int main()
{
	myclass obj("jyoti");
	myclass obj2("mishra");
	obj2 = obj;
	obj.display();
	obj2.display();
	return 0;



}
