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
    for (unsigned long long int i = 0; i <= n; i++)
    {
        output_sum += std::pow(-1, i) * std::pow(x, 2 * i +  1) / (2 * i + 1);
    }
    std::cout << "Output: " << output_sum << std::endl;
    std::cout << "arctg(x) = " << std::atan(x) << std::endl;
    return 0;
}