#include <iostream>
#include <cmath>

int main()
{
  float x = 0;

  std::cin >> x;

  std::cout << "y = ";
  if (x <= 0)
  {
    std::cout << -x << std::endl;
  }
  else if (x > 0 && x < 2)
  {
    std::cout << std::pow(x, 2) << std::endl;
  }
  else
  {
    std::cout << 4 << std::endl;
  }

  return 0;
}