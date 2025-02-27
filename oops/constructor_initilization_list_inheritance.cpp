//cosntructor initilization list in inheritance , and access the protected member of parent class
#include <iostream>
using namespace std;

class A {
private:
    int age;
protected:
    int height;
public:
    // Parameterized constructor 
    A(int age, int height) : age(age), height(height) {}

    void print() {
        cout << "This is the print function" << endl;
    }
};

//  Call base class constructor explicitly
class B : public A {
public:
    // Constructor for class B
    //if we want data from user so we have to call A's constructor.
    B(int a, int h) : A(a, h) {} //  Calls A's constructor

    void display() {
        cout << "This is child function, Height: " << height << endl;
    }
};

int main() {
    A obj(19, 55); 
    B obj2(20, 60); //  Works now because constructor is defined

    obj2.display();
    return 0;
}
