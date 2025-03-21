//smart pointer use to avoid automatic memory management and avoid memory leaks and dangling pointers , it require memory header file 
//they replace raw pointers by managing the mrmory automatically using Resource acquisition is initialization principles 


#include <iostream>
#include<memory>
#include<vector>
//unique pointer-> reoresents exclusive ownership of dynamically allocated object
//ownership can be transfered using std::move()


class myclass {
public:
	myclass() { std::cout << "constructor called\n"; }
	~myclass() { std::cout << "desstructor called\n"; }
	void display() { std::cout << "hello this is function display\n"; }

};
std::unique_ptr<int> function() {
	return std::make_unique<int>(99);
}
int main() {
	std::unique_ptr<int>ptr = std::make_unique<int>(10);//can also use new 
	std::unique_ptr<int>ptr2(new int(50));
	//std::unique_ptr<int>ptr3=ptr2(not allowed to copying)

	//move ownership
	if (!ptr2) {
		std::cout << "ptr2 is now nullptr" << std::endl;
	}
	std::cout << "ptr2 value:" << *ptr2 << std::endl;
	std::cout << "ptr1 value:" << *ptr<< std::endl;


	//using unique_ptr with arrays
	std::unique_ptr<int[]>arr = std::make_unique<int[]>(5);
	for (int i = 0;i < 5;i++)
	{
		arr[i] = i * 3;
	}
	for (int i = 0;i < 5;i++)
	{
		std::cout << "array elements are:" << arr[i] << " ";
	}



	//unique_ptr with classes objects
	std::unique_ptr<myclass>obj = std::make_unique<myclass>();
	obj->display();


	//unique_ptr from function by moving ownership
	std::unique_ptr<int>ptrr = function();
	std::cout << "value for function who is return unique pointer" << *ptrr << std::endl;


	//unique ptr in containers std::vector
	std::vector < std::unique_ptr<int>>container;
	container.push_back(std::make_unique<int>(56));
	container.push_back(std::make_unique<int>(45));



	return 0;

   
}
