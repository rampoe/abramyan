#include <iostream>

int main()
{
  int a = 0;
  int b = 0;
  std::cin >> a >> b;

  if (a != b)
  {
    int sum = a + b;
    a = sum;
    b = sum;
  }
  else
  {
    a = 0;
    b = 0;
  }

  std::cout << "a = " << a << "; b = " << b << std::endl;

  return 0;
}