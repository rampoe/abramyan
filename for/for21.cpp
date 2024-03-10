#include <iostream>
#include <cmath>

unsigned long long int factorial(unsigned long long int n)
{
    if (n == 0 || n == 1) return 1;
    unsigned long long int result = 1;
    for (unsigned long long int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    unsigned long long int n = 0;
    std::cout << "N = ";
    std::cin >> n;
    long double s = 0;
    for (unsigned long long int i = 0; i <= n; i++)
    {
        s += 1.0 / factorial(i);
    }
    std::cout << "Output: " << s << std::endl;
    std::cout << "e = exp(1) = " << std::exp(1) << std::endl;
    return 0;
}