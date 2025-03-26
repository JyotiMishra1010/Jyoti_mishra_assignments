#include <iostream>
#include <map>
#include <cstdlib>

std::map<void*, std::pair<const char*, int>> memoryMap;

void* operator new(size_t size, const char* file, int line) {
    void* ptr = malloc(size);
    if (!ptr) throw std::bad_alloc();
    memoryMap[ptr] = { file, line };
    return ptr;
}

void* operator new(size_t size) {  // Needed to avoid errors in STL allocations
    return malloc(size);
}

void operator delete(void* ptr) noexcept {
    if (memoryMap.find(ptr) != memoryMap.end()) {
        memoryMap.erase(ptr);
    }
    free(ptr);
}

#define new new(__FILE__, __LINE__)  // Ensures `new` calls the custom version

void detectLeaks() {
    for (const auto& [ptr, info] : memoryMap) {
        std::cerr << "Leak at " << ptr << " (File: " << info.first << ", Line: " << info.second << ")\n";
    }
}

int main() {
    int* a = new int;  // Intentional leak
    detectLeaks();  // Should print leak information

    return 0;
}
