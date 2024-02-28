#include <iostream>

int main()
{
  int a;
  int b;
  int c;

  std::cin >> a >> b >> c;

  if (a == b && c != a)
  {
    std::cout << 3 << std::endl;
  }
  else if (b == c && a != b)
  {
    std::cout << 1 << std::endl;
  }
  else if (a == c && c != b)
  {
    std::cout << 2 << std::endl;
  }

  return 0;
}