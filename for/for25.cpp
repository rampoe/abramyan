#include <iostream>
#include <cmath>

int main()
{
    long double x = 0;
    std::cout << "X = ";
    std::cin >> x;
    unsigned long long int n = 0;
    std::cout << "N = ";
    std::cin >> n;
    long double output_sum = 0;
    for (unsigned long long int i = 1; i <= n; i++)
    {
        output_sum += std::pow(-1, i - 1) * std::pow(x, i) / i;
    }
    std::cout << "Output: " << output_sum << std::endl;
    std::cout << "ln(1 + x) = " << std::log(1 + x) << std::endl;
    return 0;
}