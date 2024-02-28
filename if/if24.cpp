#include <iostream>
#include <cmath>

int main()
{
  float x = 0;

  std::cin >> x;

  std::cout << "y = ";
  if (x > 0)
  {
    std::cout << 2 * std::sin(x) << std::endl;
  }
  else
  {
    std::cout << 6 - x;
  }

  return 0;
}