//reinterpret_cast
#include<iostream>
void function() {
	std::cout << "hi from EPAM!!"<<std::endl;
}

int main() {
	//convert int* to char*
	int num = 85;
	char* var= reinterpret_cast<char*>(&num);
	std::cout << "num is " << num << std::endl;
	std::cout << "char is " << var << std::endl;

	//ex2
	void (*ptr)() = function;
	void* voidptr = reinterpret_cast<void*>(ptr);//convert function ptr to void* 

	//convert void* to function ptr
	void (*funptr)() = reinterpret_cast<void(*)()>(voidptr);
	


	return 0;
}
