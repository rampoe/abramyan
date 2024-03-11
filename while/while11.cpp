#include <cstdlib>
#include <iostream>
#include <cmath>

int main()
{
    unsigned long long int n = 0;
    std::cout << "N = ";
    std::cin >> n;
    unsigned long long int k = 1;
    unsigned long long int current_sum = 0;
    while (current_sum < n)
    {
        current_sum += k;
        k++;
    }
    std::cout << "Output: " << std::endl
              << "sum: " << current_sum << std::endl
              << "k: " << k << std::endl;
    std::system("pause");
    return 0;
}