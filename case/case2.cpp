#include <iostream>

int main()
{
  int k = 0;

  std::cin >> k;

  switch (k)
  {
  case 1:
    std::cout << "ploho" << std::endl;
    break;
  case 2:
    std::cout << "neudovletvoritelno" << std::endl;
    break;
  case 3:
    std::cout << "udovletvoritelno" << std::endl;
    break;
  case 4:
    std::cout << "horosho" << std::endl;
    break;
  case 5:
    std::cout << "otlichno" << std::endl;
    break;
  default:
    std::cout << "oshibka" << std::endl;
  }

  return 0;
}