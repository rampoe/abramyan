#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  if (n > 0)
    n++;
  else if (n == 0)
    n = 10;
  else
    n = n - 2;
  cout << n;
  return 0;
}