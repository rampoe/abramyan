#include <iostream>
#include <cmath>

int main()
{
	double x1, x2;
	std::cout << "x1 = "; std::cin >> x1;
	std::cout << "x2 = "; std::cin >> x2;
	std::cout << "|x2 - x1| = " << std::fabs(x2 - x1) << std::endl;
	return 0;
}
