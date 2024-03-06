#include <iostream>
using namespace std;

int main()
{
  int n, m;
  cout << "dostoinstvo: ";
  cin >> n;
  cout << "mast: ";
  cin >> m;

  switch (n)
  {
  case 6:
    cout << "shesterka ";
    break;
  case 7:
    cout << "semerka ";
    break;
  case 8:
    cout << "vosmerka ";
    break;
  case 9:
    cout << "devyatka ";
    break;
  case 10:
    cout << "desyatka ";
    break;
  case 11:
    cout << "valet ";
    break;
  case 12:
    cout << "dama ";
    break;
  case 13:
    cout << "karol ";
    break;
  case 14:
    cout << "tuz ";
    break;
  }

  switch (m)
  {
  case 1:
    cout << "pik\n";
    break;
  case 2:
    cout << "tref\n";
    break;
  case 3:
    cout << "buben\n";
    break;
  case 4:
    cout << "chervey\n";
    break;
  }

  return 0;
}