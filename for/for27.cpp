#include <iostream>
#include <cmath>

int main()
{
    long double x = 0;
    std::cout << "X = ";
    std::cin >> x;
    unsigned long long int n = 0;
    std::cout << "N  = ";
    std::cin >> n;
    long double output_sum = x;
    for (unsigned long long int i = 1; i <= n; i++)
    {
        unsigned long long int up = 1;
        for (unsigned long long int j = 1; j <= 2 * i - 1; j += 2)
        {
            up *= j;
        }
        up *= std::pow(x, 2 * i + 1);
        unsigned long long int down = 1;
        for (unsigned long long int j = 2; j <= 2* i; j += 2)
        {
            down *= j;
        }
        down *= 2 * i + 1;
        output_sum += (long double)up / down;
    }
    std::cout << "Output: " << output_sum << std::endl;
    std::cout << "arcsin(x) = " << std::asin(x) << std::endl;
    return 0;
}