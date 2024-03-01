#include <iostream>

int main()
{
  int n = 0;

  std::cin >> n;

  switch (n)
  {
  case 1:
  case 2:
  case 12:
    std::cout << "winter" << std::endl;
    break;

  case 3:
  case 4:
  case 5:
    std::cout << "spring" << std::endl;
    break;

  case 6:
  case 7:
  case 8:
    std::cout << "summer" << std::endl;
    break;

  case 9:
  case 10:
  case 11:
    std::cout << "autumn" << std::endl;
    break;

  default:
    std::cout << "error" << std::endl;
    break;
  }

  return 0;
}