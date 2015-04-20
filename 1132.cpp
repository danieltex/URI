#include <iostream>

int main() {
    int x, y;
    int soma = 0;
    std::cin >> x >> y;
    if (x > y) std::swap(x, y);
    for (int i = x; i <= y; i++) {
        if (i % 13 != 0) soma += i;
    }
    std::cout << soma << std::endl;
    return 0;
}