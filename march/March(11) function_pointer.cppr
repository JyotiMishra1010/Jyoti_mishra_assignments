#include<iostream>
//function pointer declaration with normal assigning other function address
int mul(int a, int b)
{
	return a * b;
}
int add(int a, int b)
{
	return a + b;
}


void operation(int x, int y, int(*pointer)(int, int)) {
	std::cout <<" result " << pointer(x, y) << std::endl;
}


class myclass {
public:
	int div(int a, int b) { return a / b; }
	int rem(int a, int b) { return a % b; }
};


int(*do_operation(char op))(int, int){
{
	return(op == '*') ? mul : add;}
}
int main()
{
	int (*ptr)(int, int);

	//or we can do this also to assigning address int(*ptr)(int,int)=&mul;
	ptr = mul;
	std::cout << ptr(10, 51)<<std::endl;
	//funciton pointer in array to store the the multiple fucntion addresses.
	int(*ptr2[])(int, int) = { add,mul };
	int choice=1;
	//std::cin >> choice;
	std::cout << ptr2[choice](10, 54) << std::endl;
	//function pointers as arguments
	operation(50, 50, mul);


	//function pointers as return values
	auto fun = do_operation('*');
	std::cout << "result:" << fun(1000, 2) << std::endl;

	//funciton pointers and classes (member function)
	myclass obj;
	int (myclass:: * func_ptr)(int, int) = &myclass::div;//pointer to member function

	std::cout << "result:" << (obj.*func_ptr)(50, 10) << std::endl;
	return 0;

}
