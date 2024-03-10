#include <iostream>
#include <cmath>

unsigned long long int factorial(unsigned long long int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    unsigned long long int result = 1;
    for (unsigned long long int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    long double x;
    std::cout << "X = ";
    std::cin >> x;
    unsigned long long int n;
    std::cout << "N = ";
    std::cin >> n;
    long double output_sum = 0;
    for (unsigned long long int i = 0; i <= n; i++)
    {
        output_sum += std::pow(-1, i) * std::pow(x, 2 * i) / factorial(2 * i);
    }
    std::cout << "Output: " << output_sum << std::endl;
    std::cout << "cos(x) = " << std::cos(x) << std::endl;
    return 0;
}