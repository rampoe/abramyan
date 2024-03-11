#include <cstdlib>
#include <iostream>

int main()
{
    std::cout << "A = ";
    long long int a = 0;
    std::cin >> a;
    std::cout << "B = ";
    long long int b = 0;
    std::cin >> b;
    unsigned long long int counter = 1;
    for (unsigned long long int i = a; i <= b; i++)
    {
        for (unsigned long long int j = 1; j <= counter; j++)
        {
            std::cout << i << " ";
        }
        counter++;
        std::cout << std::endl;
    }
    std::system("pause");
    return 0;
}