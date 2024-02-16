#include <iostream>

int main()
{
  int a, b;
  std::cin >> a >> b;
  if ((a % 2 == 0) && (b % 2 != 0) || (b % 2 == 0) && (a % 2 != 0))
    std::cout << true;
  else
    std::cout << false;
  return 0;
}