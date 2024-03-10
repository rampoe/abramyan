#include <iostream>
#include <cmath>

int main()
{
    std::cout << "N = ";
    unsigned long long int n = 0;
    std::cin >> n;
    std::cout << "A = ";
    long double a = 0;
    std::cin >> a;
    std::cout << "B = ";
    long double b = 0;
    std::cin >> b;
    long double h = std::abs(b - a) / n;
    for (int i = 0; i <= n; i++)
    {
        std::cout << "a + " << i << " * h = " << a + i * h << std::endl;
    }
    return 0;
}