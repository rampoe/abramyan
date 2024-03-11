#include <cstdlib>
#include <iostream>

int main()
{
    std::cout << "A = ";
    long double a = 0;
    std::cin >> a;
    std::cout << "B = ";
    long double b = 0;
    std::cin >> b;
    unsigned long long int counter = 0;
    while (a >= b)
    {
        counter++;
        a -= b;
    }
    std::cout << "Output: " << counter << std::endl;
    std::system("pause");
    return 0;
}