#include <iostream>

int main()
{
  unsigned long long n = 0;
  std::cout << "Enter the year: ";
  std::cin >> n;
  std::cout << n / 100 + 1 << "th century" << std::endl;
  return 0;
}