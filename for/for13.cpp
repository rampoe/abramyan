#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m = 1;
	cin >> n;
	float s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += (1 + (float)i/10) * m;
		m *= -1;
	}
	cout << s;
	return 0;
}
