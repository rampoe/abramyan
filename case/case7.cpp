#include <iostream>

int main()
{
  int n;
  float m;

  std::cin >> n >> m;

  switch (n)
  {
  case 1:
    std::cout << m << std::endl;
    break;

  case 2:
    std::cout << m / 1000000 << std::endl;
    break;

  case 3:
    std::cout << m / 1000 << std::endl;
    break;

  case 4:
    std::cout << m * 1000 << std::endl;
    break;

  case 5:
    std::cout << m * 100 << std::endl;
    break;

  default:
    std::cout << "error" << std::endl;
    break;
  }

  return 0;
}