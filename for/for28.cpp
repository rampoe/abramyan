#include <iostream>
#include <cmath>

int main()
{
    std::cout << "X = ";
    long double x = 0;
    std::cin >> x;
    std::cout << "N = ";
    unsigned long long int n = 0;
    std::cin >> n;
    long double output_sum = 1 + x / 2;
    for (unsigned long long int i = 2; i <= n; i++)
    {
        long long int sign = std::pow(-1, n - 1);
        long double up = 1;
        for (unsigned long long int j = 1; j <= 2 * i - 3; j += 2)
        {
            up *= j;
        }
        up *= std::pow(x, i);
        long double down = 1;
        for (unsigned long long int j = 2; j <= 2 * i; j += 2)
        {
            down *= j;
        }
        output_sum += sign * up / down;
    }
    std::cout << "Output: " << output_sum << std::endl;
    std::cout << "sqrt(1 + x) = " << std::sqrt(1 + x) << std::endl;
    return 0;
}