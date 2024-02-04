#include <iostream>

int main()
{
  long long a = 0, b = 0;
  std::cout << "Enter A and B: ";
  std::cin >> a >> b;
  
  if (a % 2 != 0 && b % 2 != 0)
  {
    std::cout << true;
  }

  else
  {
    std::cout << false;
  }

  return 0;
}