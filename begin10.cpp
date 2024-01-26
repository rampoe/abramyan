#include <bits/stdc++.h>

int main()
{
    double a = 0, b = 0;
    std::cout << "a = ";
    std::cin >> a;
    a = std::pow(a, 2);
    std::cout << "b = ";
    std::cin >> b;
    b = std::pow(b, 2);
    std::cout << "a^2 + b^2 = " << a + b << std::endl <<
              "a^2 - b^2 = " << a - b << std::endl <<
              "a^2 * b^2 = " << a * b << std::endl <<
              "a^2 / b^2 = " << a / b << std::endl;
    return 0;
}
