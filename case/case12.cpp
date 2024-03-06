#include <iostream>
#include <cmath>

/**
 * The main function of the program.
 *
 * @return 0 when the function finishes successfully
 *
 * @throws None
 */
int main()
{
  int a;
  float b, r;

  std::cin >> a >> b;

  switch (a)
  {
  case 1:
    r = b;
    std::cout << "L = " << 2 * 3.14 * r << std::endl;
    std::cout << "S = " << 3.14 * pow(r, 2) << std::endl;
    break;

  case 2:
    r = b / 2;
    std::cout << "R = " << r << std::endl;
    std::cout << "L = " << 2 * 3.14 * r << std::endl;
    std::cout << "S = " << 3.14 * pow(r, 2) << std::endl;
    break;

  case 3:
    r = b / (2 * 3.14);
    std::cout << "R = " << r << std::endl;
    std::cout << "D = " << 2 * r << std::endl;
    std::cout << "S = " << 3.14 * pow(r, 2) << std::endl;
    break;

  case 4:
    r = sqrt(b / 3.14);
    std::cout << "R = " << r << std::endl;
    std::cout << "D = " << 2 * r << std::endl;
    std::cout << "L = " << 2 * 3.14 * r << std::endl;
    break;

  default:
    std::cout << "error" << std::endl;
    break;
  }

  return 0;
}