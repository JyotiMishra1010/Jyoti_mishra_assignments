#include <iostream>
#include <typeinfo>

// Base class with a virtual destructor for RTTI
class Base {
public:
    virtual ~Base() {} //  Ensures correct typeid behavior
};

class Derived : public Base {};

int main() {
    int a = 57;
    double b = static_cast<double>(a);
    std::cout << "b = " << b << std::endl;

    Derived d;
    Base* basePtr = static_cast<Base*>(&d); // Upcasting

    std::cout << "Type of d: " << typeid(d).name() << std::endl;
    std::cout << "Type of *basePtr: " << typeid(*basePtr).name() << std::endl; // Now correctly prints "Derived"

    return 0;
}
