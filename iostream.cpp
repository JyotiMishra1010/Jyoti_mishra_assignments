//iostream
//cin		Standard input(keyboard)
//cout	Standard output(console)
//cerr	Standard error output(unbuffered)
//clog	Log output(buffered)

#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    cout << "This is normal output." << endl;
    cerr << "Error: Something went wrong!" << endl;
    cout << "This is normal output." << endl;
    clog << "Logging: Program started." << endl;
    clog << "Logging: This is a buffered log message." << endl;
    // setw -> give the left space if word doest'nt exist
    // require the library -> iomanip
    cout << setw(10) << setfill('*') << "jyoti" << endl;
    cout << setw(10) << "Mishra" << endl;
    //setprecision
    double pi = 3.1415926535;
    cout << fixed << setprecision(2) << pi << endl;


    return 0;
}
