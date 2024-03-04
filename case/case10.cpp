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
  case 'С':
    // nested switch case based on the value of n when c is 'С'
    switch (n)
    {
    case 0:
      std::cout << 'С' << std::endl;
      break;

    case 1:
      std::cout << 'З' << std::endl;
      break;

    case -1:
      std::cout << 'В' << std::endl;
      break;

    default:
      std::cout << "error" << std::endl;
      break;
    }
    break;

  case 'З':
    // nested switch case based on the value of n when c is 'З'
    switch (n)
    {
    case 0:
      std::cout << 'З' << std::endl;
      break;

    case 1:
      std::cout << 'Ю' << std::endl;
      break;

    case -1:
      std::cout << 'С' << std::endl;
      break;

    default:
      std::cout << "error" << std::endl;
      break;
    }
    break;

  case 'В':
    // nested switch case based on the value of n when c is 'В'
    switch (n)
    {
    case 0:
      std::cout << 'В' << std::endl;
      break;

    case 1:
      std::cout << 'С' << std::endl;
      break;

    case -1:
      std::cout << 'Ю' << std::endl;
      break;

    default:
      std::cout << "error" << std::endl;
    }
    break;

  default:
    std::cout << "error" << std::endl;
    break;
  }
  return 0;
}
