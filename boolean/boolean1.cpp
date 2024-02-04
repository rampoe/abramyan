#include <iostream>

int main()
{
  long long a = 0;
  std::cout << "A = ";
  std::cin >> a;
  
  if (a > 0)
  {
    std::cout << true;
  }
  
  else
  {
    std::cout << false;
  }

  return 0;
}