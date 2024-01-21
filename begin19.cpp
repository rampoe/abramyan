#include <iostream>
#include <cmath>

int main()
{
	double x1;
	double x2;
	double y1;
	double y2;
	std::cin >> x1 >> x2 >> y1 >> y2;
	double a = std::fabs(x2 - x1);
	double b = std::fabs(y2 - y1);
	std::cout << "P = " << 2 * (a + b) << std::endl;
	std::cout << "S = " << a * b << std::endl;
	return 0;
}
