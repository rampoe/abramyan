#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, o; cin >> n;
	o = (n + 56) % 60;
	cout << "god";
	if (o >= 0 && o < 12) cout << " zelyon";
	else if (o >= 12 && o < 24) cout << " krasn";
	else if (o >= 24 && o < 36) cout << " zhelt";
	else if (o >= 36 && o < 48) cout << " bel";
	else cout << " chern";
	switch((n + 8) % 12)
	{
	case 0:  cout << "oy krysy"; break;
	case 1:  cout << "oy korovy"; break;
	case 2:  cout << "ogo tigra"; break;
	case 3:  cout << "ogo zaytsa"; break;
	case 4:  cout << "ogo drakona"; break;
	case 5:  cout << "oy zmei"; break;
	case 6:  cout << "oy loshadi"; break;
	case 7:  cout << "oy ovtsy"; break;
	case 8:  cout << "oy obezyany"; break;
	case 9:  cout << "oy kuritsy"; break;
	case 10: cout << "oy sobaki"; break;
	case 11: cout << "oy svinyi"; break;
	}
}
