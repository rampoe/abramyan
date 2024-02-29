#include <iostream>

int main()
{
  unsigned int n = 0;
  std::cin >> n;

  if (n % 2 == 0)
  {
    std::cout << "even ";
  }
  else
  {
    std::cout << "odd ";
  }

  if (n / 100 != 0)
  {
    std::cout << "3-digit ";
  }
  else if (n / 10 != 0)
  {
    std::cout << "2-digit ";
  }
  else
  {
    std::cout << "1-digit ";
  }

  std::cout << "number";

  return 0;
}