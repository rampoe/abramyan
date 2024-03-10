#include <iostream>
#include <cmath>

int main()
{
    long double x = 0;
    std::cout << "X = ";
    std::cin >> x;

    long long int n = 0;
    std::cout << "N = ";
    std::cin >> n;

    long double u = 1;
    long double d = 1;

    long double s = 1 + x / 2;
    for (long long int i = 2; i <= n; i++)
    {
        long long int sign = std::pow(-1, i - 1);

        for (long long int j = 1; j <= 2 * i - 3; j += 2)
        {
            u *= j;
        }
        u *= std::pow(x, i);

        for (long long int j = 1; j <= 2 * i; j += 2)
        {
            d *= j;
        }

        s += sign * u / d;
    }

    std::cout << "Answer: " << s << std::endl;
    std::cout << "sqrt(1 + x) = " << std::sqrt(1 + x) << std::endl;

    return 0;
}