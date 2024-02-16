#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;

	if (a % 2 == b % 2)
	{
		std::cout << true;
	}
	else
	{
		std::cout << false;
	}

	return 0;
}
