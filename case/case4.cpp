#include <iostream>

int main()
{
  int n;
  std::cin >> n;
  switch (n)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    std::cout << 31 << std::endl;
    break;

  case 2:
    std::cout << 28 << std::endl;
    break;

  case 4:
  case 6:
  case 9:
  case 11:
    std::cout << 30 << std::endl;
    break;

  default:
    std::cout << "error" << std::endl;
    break;
  }

  return 0;
}