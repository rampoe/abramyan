#include <iostream>

using namespace std;

int main()
{
  int p = 0, n = 0;
  int a, b, c;
  cin >> a >> b >> c;
  if (a > 0)
    p++;
  else if (a < 0)
    n++;
  if (c > 0)
    p++;
  else if (c < 0)
    n++;
  if (b > 0)
    p++;
  else if (b < 0)
    n++;
  cout << p << " " << n;
  return 0;
}