#include <cstdlib>
#include <iostream>

int main()
{
    std::cout << "N = ";
    unsigned long long int n = 0;
    std::cin >> n;
    long double a1 = 1;
    long double a2 = 2;
    std::cout << a1 << " " << a2 << " ";
    for (unsigned long long int i = 3; i <= n; i++)
    {
        long double ak = (a1 + 2 * a2) / 3;
        a1 = a2;
        a2 = ak;
        std::cout << ak << " ";
    }
    std::cout << std::endl;
    std::system("pause");
    return 0;
}