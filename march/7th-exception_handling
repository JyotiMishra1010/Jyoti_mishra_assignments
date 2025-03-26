
//The try block contains code that might generate an exception (runtime error).
//If an exception occurs, the control jumps to the catch block.


#include<iostream>
using namespace std;
int main()
{
	int a = 10, b;
	cout << "enter the number ";
	cin >> b;
	try {
		if (b == 0)
			throw 1;
		    throw " It means Division by zero is not allowed!";
		cout << "result:" << (a / b) << endl;

	}
	catch (const int msg) {
		cout << "error:" << msg<< endl;
	}
	catch (const char* s) {
		cout << s << endl;
	}
	return 0;
}



//Why Doesn't the Second throw Execute?
//When b == 0, the first throw 1; is executed.
//As soon as an exception is thrown, control immediately jumps to the corresponding catch block.
//The rest of the code inside the try block, including the second throw, is skipped.
//This is why "It means Division by zero is not allowed!" never gets thrown.

/*Unlimited try, catch, and throw statements can be used.
 Multiple catch blocks can be used for different data types.
 Nested try - catch blocks are allowed.
 Use throw; to rethrow an exception to an outer block.
 Use catch (...) to catch any exception(generic catch)*/.
