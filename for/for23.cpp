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
    long double x = 0;
    std::cout << "X = ";
    std::cin >> x;

    unsigned long long int n = 0;
    std::cout << "N = ";
    std::cin >> n;

    long double output_sum = 0;
    for (unsigned long long int i = 0; i <= n; i++)
    {
        output_sum += std::pow(-1, i) * std::pow(x, 2 * i + 1) / factorial(2 * i + 1);
    }

    std::cout << "Output: " << output_sum << std::endl;
    std::cout << "sin(x) = " << std::sin(x) << std::endl;

    return 0;
}