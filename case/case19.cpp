#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, o; cin >> n;
	o = n % 60;
	cout << "god";
	if (o >= 0 && o < 12) cout << " chernoy";
	else if (o >= 12 && o < 24) cout << " zelyonoy";
	else if (o >= 24 && o < 36) cout << " krasnoy";
	else if (o >= 36 && o < 48) cout << " zheltoy";
	else cout << " beloy";
	switch(n % 12)
	{
	case 0:  cout << " kurisy";   break;
	case 1:  cout << " sobaki";   break;
	case 2:  cout << " svinyi";   break;
	case 3:  cout << " krysy";    break;
	case 4:  cout << " korovy";   break;
	case 5:  cout << " tigra";    break;
	case 6:  cout << " zaytsa";   break;
	case 7:  cout << " drakona";  break;
	case 8:  cout << " zmei";     break;
	case 9:  cout << " loshadi";  break;
	case 10: cout << " ovtsy";    break;
	case 11: cout << " obezyany"; break;
	}
}
