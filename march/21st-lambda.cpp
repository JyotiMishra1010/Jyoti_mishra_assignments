#include <iostream>
#include <vector>
#include <algorithm>

template <typename Func>
void apply(Func f, int val) { std::cout << "Result: " << f(val) << std::endl; }

int main() {
    int x = 10, y = 20;

    auto hello = [] { std::cout << "Hello, from c++!\n"; };
    auto add = [](int a, int b) { return a + b; };
    auto Val = [x] { std::cout << "Captured: " << x << std::endl; };
    auto Ref = [&y] { y += 5; std::cout << "Modified y: " << y << std::endl; };
    auto outerLambda = [](int factor) { return [factor](int num) { return num * factor +num; }; };
    auto square = [](auto n) { return n * n; };

    hello();
    std::cout << "Sum: " << add(5, 3) << std::endl;
    Val();
    Ref();
    std::cout << "Multiplied: " << outerLambda(3)(4) << std::endl;
    apply(square, 5);
}
