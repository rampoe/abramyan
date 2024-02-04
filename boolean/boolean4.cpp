#include <iostream>

int main()
{
  setlocale(LC_ALL, "Russian");

  long long a = 0, b = 0;
  std::cout << "Enter A and B: ";
  std::cin >> a >> b;

  if (a > 2 && b <= 3)
  {
    std::cout << true;
  }

  else
  {
    std::cout << false;
  }

  return 0;
}