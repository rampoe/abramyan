#include <iostream>

int main()
{
  int n;

  std::cin >> n;

  switch (n)
  {
  case 1:
    std::cout << "Monday" << std::endl;
    break;

  case 2:
    std::cout << "Tuesday" << std::endl;
    break;

  case 3:
    std::cout << "Wednesday" << std::endl;
    break;

  case 4:
    std::cout << "Thursday" << std::endl;
    break;

  case 5:
    std::cout << "Friday" << std::endl;
    break;

  case 6:
    std::cout << "Saturday" << std::endl;
    break;

  case 7:
    std::cout << "Sunday" << std::endl;
    break;

  default:
    std::cout << "N must be an integer from 1 to 7.";
    break;
  }

  return 0;
}