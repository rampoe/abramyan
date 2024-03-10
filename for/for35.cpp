#include <cstdlib>
#include <iostream>

int main()
{
    std::cout << "N = ";
    unsigned long long int n = 0;
    std::cin >> n;
    long long int a1 = 1;
    long long int a2 = 2;
    long long int a3 = 3;
    std::cout << a1 << " " << a2 << " " << a3 << " ";
    for (unsigned long long int i = 4; i <= n; i++)
    {
        long long int ak = a3 + a2 - 2 * a1;
        a1 = a2;
        a2 = a3;
        a3 = ak;
        std::cout << ak << " ";
    }
    std::cout << std::endl;
    std::system("pause");
    return 0;
}