#include <iostream>
//stack unwinding function calls untill it find a catch block that can handle the exception 
class A {
public:
	A() { std::cout << "object is created " << std::endl; }
	~A() { std::cout << "destructor called" << std::endl; }
};
void funa()
{
	A testa;
	std::cout << "this is func a" << std::endl;
	throw "error!";
}
void funb()
{
	A testb;
	std::cout << "this is function b" << std::endl;
	funa();

}
int main()
{
	try {
		funb();
	}
	catch (const char* msg) {
		std::cout << "caught an exception" << msg << std::endl;
	}
	return 0;

}
//till function call not finised or perporties not finished of function then destructor will call as stack work on lIFO so function call happen
