#include <iostream>

int main()
{
  long long a = 0, b = 0, c = 0;
  std::cout << "Enter A, B and C: ";
  std::cin >> a >> b >> c;
  
  if (a < b && b < c)
  {
    std::cout << true;
  }

  else
  {
    std::cout << false;
  }

  return 0;
}