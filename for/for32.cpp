#include <cstdlib>
#include <iostream>

int main()
{
    std::cout << "N = ";
    unsigned long long int n = 0;
    std::cin >> n;
    long double a = 1;
    for (unsigned long long int i = 1; i <= n; i++)
    {
        std::cout << a << " ";
        a = (a + 1) / i;
    }
    std::cout << std::endl;
    std::system("pause");
    return 0;
}