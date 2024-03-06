#include <iostream>

int main()
{
  char c;
  int n1;
  int n2;

  std::cin >> c >> n1 >> n2;

  switch (c)
  {
  case 'S':
    switch (n1 + n2)
    {
    case 0:
    case 4:
      std::cout << 'S' << std::endl;
      break;

    case -1:
    case 3:
      std::cout << 'V' << std::endl;
      break;

    case 1:
      std::cout << 'Z' << std::endl;
      break;

    case 2:
    case -2:
      std::cout << 'Y' << std::endl;

    default:
      std::cout << "error" << std::endl;
      break;
    }
    break;

  case 'V':
    switch (n1 + n2)
    {
    case 0:
    case 4:
      std::cout << 'V' << std::endl;
      break;

    case -1:
    case 3:
      std::cout << 'Y' << std::endl;
      break;

    case -2:
    case 2:
      std::cout << 'Z' << std::endl;

    case 1:
      std::cout << 'S' << std::endl;
      break;

    default:
      std::cout << "error" << std::endl;
      break;
    }
    break;

  case 'Z':
    switch (n1 + n2)
    {
    case 1:
      std::cout << 'Y' << std::endl;
      break;

    case -1:
    case 3:
      std::cout << 'S' << std::endl;
      break;

    case 2:
    case -2:
      std::cout << 'V' << std::endl;
      break;

    case 0:
    case 4:
      std::cout << 'Z' << std::endl;
      break;

    default:
      std::cout << "error" << std::endl;
      break;
    }
    break;

  case 'Y':
    switch (n1 + n2)
    {
    case 0:
    case 4:
      std::cout << 'Y' << std::endl;
      break;

    case -1:
    case 3:
      std::cout << 'Z' << std::endl;
      break;

    case 1:
      std::cout << 'V' << std::endl;
      break;

    case 2:
    case -2:
      std::cout << 'S' << std::endl;
      break;

    default:
      std::cout << "error" << std::endl;
      break;
    }
    break;

  default:
    std::cout << "error" << std::endl;
    break;
  }
  return 0;
}