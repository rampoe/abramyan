#include <iostream>

int main()
{
  float n1 = 0;
  float n2 = 0;
  float n3 = 0;

  std::cin >> n1 >> n2 >> n3;

  if (n1 < n2 && n2 < n3)
  {
    n1 *= 2;
    n2 *= 2;
    n3 *= 2;
  }
  else
  {
    n1 = -n1;
    n2 = -n2;
    n3 = -n3;
  }

  std::cout << "n1 = " << n1 << std::endl;
  std::cout << "n2 = " << n2 << std::endl;
  std::cout << "n3 = " << n3 << std::endl;

  return 0;
}