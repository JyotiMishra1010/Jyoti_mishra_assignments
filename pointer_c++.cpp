//basic pointers 

#include <iostream>
using namespace std;

int main() {
    int num = 10;    
    int *ptr = &num;  

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Pointer (ptr) holds address: " << ptr << endl;
    cout << "Value at address stored in ptr: " << *ptr << endl;

//dynamic memory allocation
 int *pptr = new int(20);  
 cout << "Value at dynamically allocated memory: " << *pptr << endl;
    delete pptr;  
    pptr = nullptr;  
    return 0;
}


