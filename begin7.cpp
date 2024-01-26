#include <bits/stdc++.h>

int main()
{
    int r = 0;
    std::cout << "R = ";
    std::cin >> r;
    std::cout << "L = 2 * pi * R = " << 2 * M_PI * r << std::endl;
    std::cout << "S = pi * R^2 = " << M_PI * std::pow(r, 2) << std::endl;
    return 0;
}
