#include <cstdlib>
#include <iostream>

int main()
{
    long double a = 0;
    std::cout << "A = ";
    std::cin >> a;
    unsigned long long int k = 1;
    long double current_sum = 0;
    while (current_sum <= a)
    {
        current_sum += 1.0 / k;
        k++;
    }
    std::cout << "Output: " << std::endl
              << "sum: " << current_sum << std::endl
              << "K = " << k << std::endl;
    std::system("pause");
    return 0;
}