#include <cstdlib>
#include <iostream>
#include <cmath>

int main()
{
    std::cout << "N = ";
    unsigned long long int n = 0;
    std::cin >> n;
    long double output_sum = 0;
    unsigned long long int counter = 1;
    for (unsigned long long int i = n; i >= 1; i--)
    {
        output_sum += std::pow(counter, i);
        counter++;
    }
    std::cout << "Output: " << output_sum << std::endl;
    std::system("pause");
    return 0;
}