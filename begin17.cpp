#include <iostream>
#include <cmath>

int main()
{
	double a, b, c;
	std::cin >> a >> b >> c;
	double ac = std::fabs(c - a);
	double bc = std::fabs(c - b);
	std::cout << "AC=" << ac << std::endl;
	std::cout << "BC=" << bc << std::endl;
	std::cout << "AC+BC=" << ac + bc << std::endl;
	return 0;
}
