#include <iostream>

int main()
{

  int n1 = 0;
  int n2 = 0;
  int n3 = 0;
  int n4 = 0;

  std::cin >> n1 >> n2 >> n3 >> n4;

  if (n1 == n2 && n2 == n3)
  {
    std::cout << 4 << std::endl;
  }
  else if (n2 == n3 && n3 == n4)
  {
    std::cout << 1 << std::endl;
  }
  else if (n1 == n3 && n3 == n4)
  {
    std::cout << 2 << std::endl;
  }
  else
  {
    std::cout << 3 << std::endl;
  }

  return 0;
}