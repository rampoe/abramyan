#include <iostream>

int main()
{
  setlocale(LC_ALL, "Russian");

  long long a = 0;
  std::cout << "A = ";
  std::cin >> a;

  if (a % 2 == 0)
  {
    std::cout << true;
  }

  else
  {
    std::cout << false;
  }

  return 0;
}