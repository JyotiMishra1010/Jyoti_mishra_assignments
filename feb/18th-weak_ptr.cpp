

//weak pointer
//A weak pointer(std::weak_ptr) in C++ is a non - owning smart pointer that helps avoid circular references(memory leaks) 
// when using std::shared_ptr



//What is a Weak Pointer ?
//Does not increase the reference count of an object.
//
//Used with std::shared_ptr to prevent circular references.
//
//Can be converted to std::shared_ptr when needed.
#include <iostream>
#include <memory>

class B;  // Forward declaration

class A {
public:
    std::weak_ptr<B> b_ptr;  // Corrected type
    ~A() {
        std::cout << "A destroyed\n";
    }
};

class B {
public:
    std::weak_ptr<A> a_ptr;  // Corrected type
    ~B() {
        std::cout << "B destroyed\n";
    }
};

int main() {
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();  // Fixed class name

    a->b_ptr = b;  // Assigning weak_ptr
    b->a_ptr = a;  // Assigning weak_ptr

    return 0;  // No memory leak, objects are destroyed properly
}
