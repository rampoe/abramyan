#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, sum = 0;
	cin >> n;
	for (int i = 0; i <= n; i++) sum += pow(n + i, 2);
	cout << sum;
	return 0;
}
