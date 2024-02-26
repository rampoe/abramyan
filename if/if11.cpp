#include <iostream>

int main()
{
  int a = 0;
  int b = 0;

  std::cin >> a >> b;

  if (a != b)
  {
    int max = 0;
    if (a > b)
      int max = a;
    else
      max = b;
    a = max;
    b = max;
  }

  else
  {
    a = 0;
    b = 0;
  }

  std::cout << "a = " << a << std::endl;
  std::cout << "b = " << b << std::endl;

  return 0;
}