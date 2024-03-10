#include <cstdlib>
#include <iostream>
#include <cmath>

int main()
{
    std::cout << "N = ";
    unsigned long long int n = 0;
    std::cin >> n;
    std::cout << "K = ";
    unsigned long long int k = 0;
    std::cin >> k;
    unsigned long long int output_sum = 0;
    for (unsigned long long int i = 1; i <= n; i++)
    {
        output_sum += std::pow(i, k);
    }
    std::cout << "Output: " << output_sum << std::endl;
    std::system("pause");
    return 0;
}