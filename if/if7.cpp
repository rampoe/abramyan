#include <iostream>

using namespace std;

int main()
{
  int n1, n2;
  cin >> n1 >> n2;
  if (n1 > n2)
    cout << 2;
  else if (n1 == n2)
    cout << 0;
  else
    cout << 1;
  return 0;
}