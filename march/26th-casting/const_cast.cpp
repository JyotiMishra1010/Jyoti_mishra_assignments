//const_cast -> removes or add and volatile qualifiers from a variable.
//but don't use for remove const from variables 
#include<iostream>

void function(int* ptr) {
	*ptr = 600;
}
void print(char* str) {
	std::cout << str << std::endl;
}
int main() {
	volatile const int x = 100;
	std::cout << "before any changes" << x << std::endl;
	
	int* updateptr = const_cast<int*>(&x);
	function(updateptr);//undefined behaviour try to remove const

	std::cout << "after modification" << x << std::endl;

	//now cons
	const int a = 10;
	std::cout << "before modification" << a << std::endl;

	const char* ptr = "hey !!";
	print(const_cast<char*>(ptr));
	return 0;
}
