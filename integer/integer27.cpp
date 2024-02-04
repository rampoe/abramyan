#include <iostream>

int main() {
	int k = 0;
	std::cout << "k = ";
	std::cin >> k;
	std::cout << (k + 4) % 7 + 1;
	return 0;
}
