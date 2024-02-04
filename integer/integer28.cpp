#include <iostream>

int main() {
	int k = 0;
	int n = 0;
	std::cout << "k = ";
	std::cin >> k;
	std::cout << "n = ";
	std::cin >> n;
	std::cout << (k + (n - 2)) % 7 + 1 << std::endl;
	return 0;
}

