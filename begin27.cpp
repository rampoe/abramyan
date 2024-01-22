#include <iostream>

int main() {
	long double a, helper;
	std::cout << "a = "; std::cin >> a;
	helper = a * a;
	std::cout << "a^2 = " << helper << std::endl;
	helper = helper * helper;
	std::cout << "a^4 = " << helper << std::endl;
	helper = helper * helper;
	std::cout << "a^8 = " << helper << std::endl;
	return 0;
}
