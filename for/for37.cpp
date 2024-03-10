#include <cstdlib>
#include <iostream>
#include <cmath>

int main()
{
    std::cout << "N = ";
    unsigned long long int n = 0;
    std::cin >> n;
    long double output_sum = 0;
    for (unsigned long long int i = 1; i <= n; i++)
    {
        output_sum += std::pow(i, i);
    }
    std::cout << "Output: " << output_sum << std::endl;
    std::system("pause");
    return 0;
}