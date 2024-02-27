#include <iostream>

int main()
{
  int n1 = 0;
  int n2 = 0;
  int n3 = 0;
  int result = 0;

  std::cin >> n1 >> n2 >> n3;

  if (n1 > n2 && n1 > n3)
  {
    if (n2 > n3)
    {
      result = n1 + n2;
    }
    else
    {
      result = n1 + n3;
    }
  }
  else if (n2 > n3)
  {
    if (n1 > n3)
    {
      result = n1 + n2;
    }
    else
    {
      result = n3 + n2;
    }
  }
  else
  {
    if (n1 > n2)
    {
      result = n1 + n3;
    }
    else
    {
      result = n2 + n3;
    }
  }

  std::cout << result << std::endl;

  return 0;
}