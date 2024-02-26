#include <iostream>

using namespace std;

int main()
{
  int n1, n2, n3, c = 0;
  cin >> n1 >> n2 >> n3;
  if (n1 > 0)
    c++;
  if (n2 > 0)
    c++;
  if (n3 > 0)
    c++;
  cout << c;
  return 0;
}
