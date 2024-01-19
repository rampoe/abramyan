#include <bits/stdc++.h>

int main()
{
	double s = 0;
	std::cout << "S = ";
	std::cin >> s;
	double d = std::sqrt(4 * s / M_PI);
	std::cout << "D = " << d << std::endl;
	std::cout << "L = " << M_PI * d << std::endl;
	return 0;
}
