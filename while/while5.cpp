#include <cstdlib>
#include <iostream>

int main()
{
    std::cout << "N = ";
    unsigned long long int n = 0;
    std::cin >> n;
    unsigned long long int counter = 1;
    unsigned long long int current_number = 2;
    while (current_number <= n)
    {
        if (current_number == n) break;
        counter++;
        current_number *= 2;
    }
    std::cout << "Output: " << counter << std::endl;
    std::system("pause");
    return 0;
}