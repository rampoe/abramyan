#include <cstdlib>
#include <iostream>

int main()
{
    std::cout << "A = ";
    unsigned long long int a = 0;
    std::cin >> a;
    std::cout << "B = ";
    unsigned long long int b = 0;
    std::cin >> b;
    for (unsigned long long int i = a; i <= b; i++)
    {
        for (unsigned long long int j = 1; j <= i; j++)
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
    std::system("pause");
    return 0;
}