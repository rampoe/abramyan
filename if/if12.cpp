#include <iostream>

int min = 0;
int n1 = 0;
int n2 = 0;
int n3 = 0;

int main()
{
  std::cin >> n1 >> n2 >> n3;
  if (n1 <= n2 && n1 <= n3)
  {
    min = n1;
  }
  else if (n2 < n3 && n2 < n1)
  {
    min = n2;
  }
  else
  {
    min = n3;
  }
  std::cout << min;
  return 0;
}