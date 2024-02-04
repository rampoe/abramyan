#include <iostream>
#include <cmath>

int main() {
	long long a = 0, b = 0, c = 0;
	std::cout << "Enter A, B and C: ";
	std::cin >> a >> b >> c;
	long long n = (a / c) * (b / c);
	std::cout
		<< "The amount of squares in the rectangle is: "
		<< n
		<< std::endl;
	std::cout
		<< "The free area is: "
		<< (a - a / c) * (b - b / c)
		<< std::endl; 
	return 0;
}
