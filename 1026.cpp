#include <iostream>
int main() {
    unsigned a, b;
    while(std::cin >> a >> b)
        std::cout << (a & ~b | ~a & b) << std::endl;
    return 0;
}