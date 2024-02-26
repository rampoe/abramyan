#include <iostream>
using namespace std;
int main()
{
  float a, b;
  if (a > b)
  {
    float c = a;
    a = b;
    b = c;
  }
  cout << a << " " << b;
  return 0;
}