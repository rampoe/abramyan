#include <iostream>

int main()
{
  int n;
  std::cin >> n;
  int n1 = n / 10;
  int n2 = n % 10;
  switch (n1)
  {
  case 2:
    std::cout << "dvadtsat ";
    break;

  case 3:
    std::cout << "tridtsat ";
    break;

  case 4:
    std::cout << "sorok ";
    break;

  case 5:
    std::cout << "pyatdesyat";
    break;

  case 6:
    std::cout << "shestdesyat ";
    break;

  default:
    std::cout << "error" << std::endl;
    break;
  }
  switch (n2)
  {
  case 0:
    std::cout << "let" << std::endl;
    break;

  case 1:
    std::cout << "odin god" << std::endl;
    break;

  case 2:
    std::cout << "dva goda" << std::endl;
    break;

  case 3:
    std::cout << "tri goda" << std::endl;
    break;

  case 4:
    std::cout << "chetyre goda" << std::endl;
    break;

  case 5:
    std::cout << "pyat let" << std::endl;
    break;

  case 6:
    std::cout << "shest let" << std::endl;
    break;

  case 7:
    std::cout << "sem let" << std::endl;
    break;

  case 8:
    std::cout << "vosem let" << std::endl;
    break;

  case 9:
    std::cout << "devyat let" << std::endl;
    break;

  default:
    std::cout << "error" << std::endl;
    break;
  }
  return 0;
}