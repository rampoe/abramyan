#include <cstdlib>
#include <iostream>

int main()
{
    std::system("chcp 1251");
    unsigned long long int current_amount_of_money = 1000;
    long double p = 0;
    std::cout << "P = ";
    std::cin >> p;
    unsigned long long int k = 0;
    while (current_amount_of_money <= 1100)
    {
        k++;
        current_amount_of_money += current_amount_of_money / 100 * p;
    }
    std::cout << "Output: " << std::endl
              << "Current amount of money: " << current_amount_of_money << std::endl
              << "Months passed:  " << k << std::endl;
    std::system("pause");
    return 0;
}