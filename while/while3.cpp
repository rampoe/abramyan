#include <cstdlib>
#include <iostream>

int main()
{
    std::cout << "N = ";
    unsigned long long int n = 0;
    std::cin >> n;
    std::cout << "K = ";
    unsigned long long int k = 0;
    std::cin >> k;
    unsigned long long int div = 0;
    while (n >= k)
    {
        div++;
        n -= k;
    }
    std::cout << "Output: " << std::endl
              << "div: " << div << std::endl
              << "mod: " << n << std::endl;
    std::system("pause");
    return 0;
}