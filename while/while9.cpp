#include <cstdlib>
#include <iostream>
#include <cmath>

int main()
{
    unsigned long long int n = 0;
    std::cout << "N = ";
    std::cin >> n;
    unsigned long long int k = 0;
    while (std::pow(3, k) <= n)
    {
        k++;
    }
    std::cout << "Output: K = " << k << std::endl;
    std::system("pause");
    return 0;
}