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
    while (a > b)
    {
        a -= b;
    }
    std::cout << "Output: " << a << std::endl;
    std::system("pause");
    return 0;
}