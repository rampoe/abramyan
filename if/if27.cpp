#include <iostream>
#include <cmath>

int main()
{
  double x = 0;
  std::cin >> x;
  double y = floor(x);
  if (x < 0)
    std::cout << 0 << std::endl;
  else if (y % 2 == 0)
    std::cout << 1 << std::endl;
  else
    std::cout << -1 << std::endl;
  return 0;
}