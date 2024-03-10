#include <cstdlib>
#include <iostream>

int main()
{
    std::cout << "N = ";
    unsigned long long int n = 0;
    std::cin >> n;
    unsigned long long int f1 = 1;
    unsigned long long int f2 = 1;
    std::cout << 1 << " " << 1 << " ";
    for (unsigned long long int i = 3; i <= n; i++)
    {
        unsigned long long int temp = f2;
        f2 = f1 + f2;
        f1 = temp;
        std::cout << f2 << " ";
    }
    std::cout << std::endl;
    std::system("pause");
    return 0;
}