#include <iostream>

int main()
{
  int n;
  int max = INT_MIN;
  int min = INT_MAX;

  while (std::cin >> n && n != 0)
  {
    if (n > max)
    {
      max = n;
    }

    if (n < min)
    {
      min = n;
    }
  }

  std::cout << "max = " << max << ", min = " << min << "\n";

  return 0;
}