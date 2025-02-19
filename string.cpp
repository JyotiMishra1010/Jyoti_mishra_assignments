#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	string  f_name;
	string l_name;
	string  full_name;

	cout << "enter the first name:";
	cin >> f_name;
	cout << "enter the last name:";
	cin >> l_name;
	cout << "length of f_name is : " << f_name.length() << "and length of last name is :" << l_name.length();
	// string concatination

	full_name = (f_name + l_name);
	string your_name;
	getline(cin, your_name);
	if (full_name == your_name)
	{
		cout << "same";
	}
	else {
		cout << "not same";
	}


	return 0;

}
