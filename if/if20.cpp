#include <iostream>
#include <cmath>

int main()
{

  float a = 0;
  float b = 0;
  float c = 0;

  std::cin >> a >> b >> c;

  if (b - a < c - a)
  {
    std::cout << "B; " << std::abs(b - a);
  }
  else
  {
    std::cout << "C; " << std::abs(c - a);
  }

  return 0;
}