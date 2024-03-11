#include <cstdlib>
#include <iostream>

long double count_double_factorial(unsigned long long int n)
{
    long double result = 1;
    unsigned long long int current_number = n;
    while (true)
    {
        result *= current_number;
        if ((current_number == 1) && (n % 2 == 1) || (current_number == 2) && (n % 2 == 0))
        {
            break;
        }
        current_number -= 2;
    }
    return result;
}

int main()
{
    std::cout << "N = ";
    unsigned long long int n;
    std::cin >> n;
    std::cout << "Output: " << count_double_factorial(n) << std::endl;
    std::system("pause");
    return 0;
}