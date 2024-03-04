#include <iostream>

/**
 * The main function takes user input and performs a series of switch case statements to determine the output based on the input values.
 *
 * @param none
 *
 * @return 0 to indicate successful execution
 *
 * @throws none
 */
int main()
{
  char c;
  int n;

  // taking input from the user
  std::cin >> c >> n;

  // switch case based on the value of c
  switch (c)
  {
  case 'S':
    // nested switch case based on the value of n when c is 'S'
    switch (n)
    {
    case 0:
      std::cout << 'S' << std::endl;
      break;

    case 1:
      std::cout << 'Z' << std::endl;
      break;

    case -1:
      std::cout << 'V' << std::endl;
      break;

    default:
      std::cout << "error" << std::endl;
      break;
    }
    break;

  case 'Z':
    // nested switch case based on the value of n when c is 'Z'
    switch (n)
    {
    case 0:
      std::cout << 'Z' << std::endl;
      break;

    case 1:
      std::cout << 'Y' << std::endl;
      break;

    case -1:
      std::cout << 'S' << std::endl;
      break;

    default:
      std::cout << "error" << std::endl;
      break;
    }
    break;

  case 'V':
    // nested switch case based on the value of n when c is 'V'
    switch (n)
    {
    case 0:
      std::cout << 'V' << std::endl;
      break;

    case 1:
      std::cout << 'S' << std::endl;
      break;

    case -1:
      std::cout << 'Y' << std::endl;
      break;

    default:
      std::cout << "error" << std::endl;
    }
    break;

  case 'Y':
    switch (n)
    {
    case 0:
      std::cout << 'Y' << std::endl;
      break;

    case 1:
      std::cout << 'V' << std::endl;
      break;

    case -1:
      std::cout << 'Z' << std::endl;
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
