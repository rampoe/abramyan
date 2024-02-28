#include <iostream>

int main()
{
  float a;
  float b;
  float c;

  std::cin >> a >> b >> c;

  if (a > b && b > c || a < b && b < c)
  {
    a *= 2;
    b *= 2;
    c *= 2;
  }
  else
  {
    a = -a;
    b = -b;
    c = -c;
  }

  std::cout << "a = " << a << std::endl;
  std::cout << "b = " << b << std::endl;
  std::cout << "c = " << c << std::endl;

  return 0;
}