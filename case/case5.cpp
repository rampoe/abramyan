#include <iostream>

int main()
{
  float a, b;
  int n;

  std::cin >> n;
  std::cin >> a >> b;

  switch (n)
  {
  case 1:
    std::cout << a + b << std::endl;
    break;

  case 2:
    std::cout << a - b << std::endl;
    break;

  case 3:
    std::cout << a * b << std::endl;
    break;

  case 4:
    std::cout << a / b << std::endl;
    break;

  default:
    std::cout << "error" << std::endl;
    break;
  }

  return 0;
}