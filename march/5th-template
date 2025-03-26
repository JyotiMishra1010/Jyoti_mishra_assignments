#include <iostream>
#include <string>
//class template
template <typename T>
class myclass {
    T value; // Store actual value
public:
    myclass(T v) : value(v) {} // Correct constructor

    void print() {
        std::cout << "This is value: " << value << std::endl;
    }
};

int main() {
    myclass<char> obj('j');
    obj.print();

    myclass<std::string> obj2("jyoti");
    obj2.print();

    myclass<int> obj3(4);
    obj3.print();

    return 0;
}
