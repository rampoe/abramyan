#include <iostream>

int main()
{
  int n;
  float m;

  std::cin >> n >> m;

  switch (n)
  {
  case 1:
    float a = m;
    std::cout << a << " "
              << a * sqrt(2) << " "
              << a * sqrt(2) << " "
              << pow(a, 2) / 2 << std::endl;
    break;

  case 2:
    float c = m;
    std::cout << c / sqrt(2) << " "
              << c << " "
              << c / 2 << " "
              << pow(c, 2) / 4 << std::endl;
    break;

  case 3:
    float h = m;
    std::cout << 2 * h / sqrt(2) << " "
              << 2 * h << " "
              << h << " "
              << pow(h, 2) << std::endl;
    break;

  case 4:
    float s = m;
    std::cout << sqrt(2 * s) << " "
              << 2 * sqrt(s) << " "
              << sqrt(s) << " "
              << s << std::endl;
    break;

  default:
    std::cout << "error" << std::endl;
    break;
  }

  return 0;
}