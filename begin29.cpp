#include <iostream>
#include <cmath>

int main() {
	long double angle_value_in_degrees = 0;
	std::cout << "Enter the value of angle in degrees: ";
	std::cin >> angle_value_in_degrees;
	std::cout << angle_value_in_degrees * (M_PI/180);
	return 0;
}
