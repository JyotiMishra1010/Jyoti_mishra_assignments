#include<iostream>
#include<string>
using namespace std;
//shallow copy
class Student { 
public:
	string name;
	float* cgpaptr; //store in heap
	Student(string name, float cgpa)
	{
		this->name = name;
		cgpaptr = new float;
		*cgpaptr = cgpa;
	}
	Student(Student &obj)
	{
		this->name = obj.name;
		this->cgpaptr = obj.cgpaptr;
	}
	void getInfo()
	{
		cout << "name:" << name << endl;
		cout << "cgpa:" << *cgpaptr << endl;
	}


};
int main()
{
	Student s1("rahul", 8.9);

	Student s2(s1);
	s1.getInfo();
	*s2.cgpaptr = 9.2;
	s1.getInfo();
	return 0;

}