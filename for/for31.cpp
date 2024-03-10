#include <cstdlib>
#include <iostream>

int main()
{
    std::cout << "N = ";
    unsigned long long int n = 0;
    std::cin >> n;
    long double a = 2;
    for (unsigned long long int i = 0; i < n; i++)
    {
        std::cout << a << ", ";
        a = 2 + 1 / a;
    }
    std::cout << std::endl;
    std::system("pause");
    return 0;
}