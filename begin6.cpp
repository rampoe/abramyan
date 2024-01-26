#include <bits/stdc++.h>

int main() {
    int a = 0, b = 0, c = 0;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;
    std::cout << "V = a*b*c = " << a * b * c << std::endl;
    std::cout << "S = 2*(a*b + b*c + a*c) = " << 2 * (a * b + b * c + a * c) << std::endl;
    return 0;
}
