
//through library
#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <iostream>
#include <crtdbg.h>

int main() {
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
//memory leak
    int* n = new int(10);
    float* x = new float(20);
    double* y = new double(30);
    char* c = new char('A');

    int* arr = new int[5];
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    _CrtDumpMemoryLeaks();

    std::cout << "Memory leak check completed" << std::endl;
    return 0;
}
