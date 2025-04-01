#include <iostream>
#include <typeinfo>

// Base class with a virtual destructor for RTTI
class Base {
public:
    virtual ~Base() {} //  Ensures correct typeid behavior
};

class Derived : public Base {};


class myclass {
public:
    virtual ~myclass(){}
    virtual std::string gettype() { return "base"; }
};
class yclass :public myclass{
public:
    std::string gettype() { return "derived"; }
};

int main() {
    

    Derived d;
    Base* ptr =&d; // Upcasting

    if (dynamic_cast<Derived*>(ptr)) {
        std::cout << "basePtr  points to a derived object.\n";
   }
    else {
        std::cout << "baseptr does not point to a derived object";
    }


    //for other example using class myclass and yclass
    yclass y;
    myclass* obj2 = &y;

    std::cout << "type:" << obj2->gettype() << std::endl;
    return 0;



}
