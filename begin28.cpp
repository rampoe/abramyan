#include <iostream>

int main() {
	long double a = 0;
	std::cout << "A = "; std::cin >> a;
	long double helper1 = a * a;
	std::cout << "A^2 = " << helper1 << std::endl;
	long double helper2 = helper1 * a;
	std::cout << "A^3 = " << helper2 << std::endl;
	helper1 = helper1 * helper2;
	std::cout << "A^5 = " << helper1 << std::endl;
	helper2 = helper1 * helper1;
	std::cout << "A^10 = " << helper2 << std::endl;
	helper1 = helper1 * helper2;
	std::cout << "A^15 = " << helper1 << std::endl;
	return 0;
}
