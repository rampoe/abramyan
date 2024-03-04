#include <iostream>

int main()
{
  int d, m;

  std::cin >> d >> m;

  switch (m)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    if (d == 31)
    {
      d = 1;
      m = m + 1;
    }
    else
    {
      d = d + 1;
    }
    break;

  case 4:
  case 6:
  case 9:
  case 11:
    if (d == 30)
    {
      d = 1;
      m = m + 1;
    }
    else
    {
      d = d + 1;
    }
    break;

  case 2:
    if (d == 28)
    {
      d = 1;
      m = m + 1;
    }
    else
    {
      d = d + 1;
    }
    break;

  default:
    std::cout << "error" << std::endl;
    break;
  }

  return 0;
}