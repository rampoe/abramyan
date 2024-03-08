#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	float p = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		p *= 1 + (float)i / 10;
	}
	cout << p;
	return 0;
}
