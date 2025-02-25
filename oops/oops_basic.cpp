#include<iostream>
#include<string>
using namespace std;
class  Teacher {
	//properties
private:
	double salary;
	
public:
	Teacher()
	{
		cout << "this is constructor" << endl;
	}

	
	Teacher(string name, string d, string s, double sal)
	{
		this->name = name;//(object name left name) (rightone is  parameter)
		Dept = d;
		subject = s;
		salary = sal;
	}
	//custom copy constructor
	Teacher(Teacher& t1) 
	{
		cout << "I am copy constructor" << endl;
		this->name = t1.name;
		this->Dept = t1.Dept;
		this->subject = t1.subject;
		this->salary = t1.salary;
	}
	string name;
	string Dept;
	string subject;
	void getInfo()
	{
		cout << "name:" << name << endl;
		cout << "Dept:" << Dept << endl;
		cout << "Subject " << subject << endl;
		cout << "salary" << salary << endl;

	}

	void changeDept(string newDept)//methods
	{
		Dept = newDept;
	}
	//setter -> to access the private elements access
	void setsalary(double s)
	{
		salary = s;
	}
	//getter
	double getsalary()
	{
		return salary;
	}

};
class Account {
private:
	double balance;
	string password;
public:
	string accoundId;
	string username;
	
};

//int main() {
	Teacher t1;//constructor call
	t1.name = "Jyoti";
	t1.subject = "C++";
	t1.Dept = "computer science";
	t1.setsalary(50000);
	//Teacher t2;
	Teacher t2("xyz", "IT", "C", 40000);
	t2.getInfo();
	cout << t1.name << endl;
	cout << t1.getsalary()<<endl;
	//Teacher t3(t2); //default copy constructor 
	Teacher t3(t1);//custom copy constructor
	t3.getInfo();



	return 0;

}