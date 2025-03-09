#include <iostream>
#include <string>
#include <type_traits> // Required for type checking
using namespace std;

// Function template
template <typename T>
T function(T a, T b) {
    return a + b;
}

int main() {
  //string
   cout<< function(string("jyoti"), string("mishra"))<<endl;

    //  integers
    cout << function(5, 6) << endl;

    return 0;
}
