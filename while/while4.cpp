#include <cstdlib>
#include <iostream>

int main()
{
    std::cout << "N = ";
    unsigned long long int n = 0;
    std::cin >> n;
    bool flag = false;
    unsigned long long int current_number = 3;
    while (current_number <= n)
    {
        if (current_number == n)
        {
            flag = true;
        }
        current_number *= 3;
    }
    std::cout << "Output: " << flag << std::endl;
    std::system("pause");
    return 0;
}