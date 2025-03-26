#include<iostream>
#include<string>
using namespace std;
//Deep copy
class Student {
public:
	string name;
	double* cgpaptr; //store in heap
	Student(string name, double cgpa)
	{
		this->name = name;
		cgpaptr = new double;
		*cgpaptr = cgpa;
	}
	Student(Student& obj)
	{
		this->name = obj.name;
		cgpaptr = new double;
		*cgpaptr = *obj.cgpaptr;
	}
	void getInfo()
	{
		cout << "name:" << name << endl;
		cout << "cgpa:" << *cgpaptr << endl;
	}
	//destructor
	~Student() {
		cout << "Hi, this destructor" << endl;
		delete cgpaptr;
	}


};
int main()
{
	Student s1("rahul", 8.9);

	Student s2(s1);
	s1.getInfo();
	*s2.cgpaptr = 9.2;
	s1.getInfo();
	s2.name = "jyoti";
	s2.getInfo();
	return 0;

}
