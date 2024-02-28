#include <iostream>

int main()
{

  int x;
  int y;

  std::cin >> x >> y;

  if (x == 0 && y == 0)
    std::cout << 0;
  else if (x == 0)
    std::cout << 1;
  else if (y == 0)
    std::cout << 2;
  else
    std::cout << 3;

  return 0;
}