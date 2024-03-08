#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, s;
	cin >> a >> b;
	for (int i = a; i <= b; i++) s += pow(i, 2);
	cout << s;
	return 0;
}
