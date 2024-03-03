#include <iostream>

int main()
{
  int d, m;

  std::cin >> d >> m;

  if (d == 1)
  {
    m -= 1;

    switch (m)
    {
    case 0:
      d = 31;
      m = 12;
      break;

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      d = 31;
      break;

    case 4:
    case 6:
    case 9:
    case 11:
      d = 30;
      break;
    }
  }
  else
  {
    d -= 1;
  }

  std::cout << d << " " << m << std::endl;

  return 0;
}