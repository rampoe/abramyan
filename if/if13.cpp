#include <iostream>

int main()
{
  float n1, n2, n3;
  std::cin >> n1 >> n2 >> n3;
  float mid = n1;
  if ((n2 < n3 && n2 > n1) || (n2 > n3 && n2 < n1))
  {
    mid = n2;
  }
  else if ((n3 < n2 && n3 > n1) || (n3 > n2 && n3 < n1))
  {
    mid = n3;
  }
  std::cout << mid << std::endl;
  return 0;
}