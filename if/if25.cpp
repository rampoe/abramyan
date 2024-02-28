#include <iostream>
#include <cmath>

int main()
{
  float x = 0;

  std::cin >> x;

  std::cout << "y = ";
  if (x < -2 || x > 2)
  {
    std::cout << 2 * x << std::endl;
  }
  else
  {
    std::cout << -3 * x << std::endl;
  }

  return 0;
}