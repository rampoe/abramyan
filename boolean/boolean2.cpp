#include <iostream>

int main()
{
  long long a = 0;
  std::cout << "A = ";
  std::cin >> a;

  if (a % 2 == 0)
  {
    std::cout << false;
  }

  else
  {
    std::cout << true;
  }

  return 0;
}