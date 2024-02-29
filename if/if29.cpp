#include <iostream>

int main()
{
  setlocale(LC_ALL, "RUS");

  int n = 0;

  std::cin >> n;

  if (n == 0)
    std::cout << "zero number" << std::endl;
  else if (n < 0)
    std::cout << "negative";
  else
    std::cout << "positive";

  if (n % 2 == 0)
    std::cout << " even";
  else
    std::cout << " odd";

  std::cout << " number" << std::endl;

  return 0;
}