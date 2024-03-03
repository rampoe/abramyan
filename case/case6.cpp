#include <iostream>

int main()
{
  int n;
  std::cin >> n;
  float l;
  std::cin >> l;
  switch (n)
  {
  case 1:
    std::cout << l / 10 << std::endl;
    break;
  case 2:
    std::cout << l * 1000 << std::endl;
    break;
  case 3:
    std::cout << l << std::endl;
    break;
  case 4:
    std::cout << l / 1000 << std::endl;
    break;
  case 5:
    std::cout << l / 100 << std::endl;
    break;
  default:
    std::cout << "error" << std::endl;
    break;
  }
  return 0;
}