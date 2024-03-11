#include <cstdlib>
#include <iostream>
#include <cmath>

int main()
{
    unsigned long long int n = 0;
    std::cout << "N = ";
    std::cin >> n;
    unsigned long long int k = 0;
    unsigned long long int current_number = 3;
    while (current_number < n)
    {
        current_number *= 3;
        k++;
    }
    std::cout << "Output: K = " << k << std::endl;
    std::system("pause");
    return 0;
}