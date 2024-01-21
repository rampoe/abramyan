#include <iostream>
#include <cmath>

int main()
{
	double x1, y1, x2, y2;
	std::cin >> x1 >> y1 >> x2 >> y2;
	std::cout << std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
	return 0;
}
