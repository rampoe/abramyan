#include <iostream>
#include <cmath>

/**
 * This C++ function takes input values for n and m, and based on the value of n, it calculates the values of a, r1, r2, and s using different mathematical formulas. It then prints the values of a, r1, r2, and s to the console.
 *
 * @param None
 *
 * @return 0 indicating successful execution
 *
 * @throws Noned
 */
int main()
{
  int n;
  float m, a, r1, r2, s;
  std::cin >> n >> m;

  switch (n)
  {
  case 1:
    a = m;
    r1 = a * std::sqrt(3) / 6;
    r2 = r1 * 2;
    s = std::pow(a, 2) * std::sqrt(3) / 4;
    break;

  case 2:
    r1 = m;
    r2 = r1 * 2;
    a = 6 * r1 / std::sqrt(3);
    s = std::pow(a, 2) * std::sqrt(3) / 4;
    break;

  case 3:
    r2 = m;
    r1 = r2 / 2;
    a = 6 * r1 / std::sqrt(3);
    s = std::pow(a, 2) * std::sqrt(3) / 4;
    break;

  case 4:
    s = m;
    a = std::sqrt(4 * s / std::sqrt(3));
    r1 = a * std::sqrt(3) / 6;
    r2 = r1 * 2;
    break;

  default:
    std::cout << "error" << std::endl;
    break;
  }

  std::cout << a << " " << r1 << " " << r2 << " " << s << std::endl;

  return 0;
}