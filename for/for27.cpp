#include <iostream>
#include <cmath>

double factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

double calculate_series_value(double X, int N) {
    double result = 0;

    for (int k = 0; k <= N; ++k) {
        double term = factorial(2 * k - 1) * std::pow(X, 2 * k + 1) /
                      (factorial(2 * k) * (2 * k + 1));
        result += term;
    }

    return result;
}

int main() {
    double X;
    int N;
    std::cin >> X >> N;

    double result = calculate_series_value(X, N);
    std::cout << "Результат: " << result << std::endl;

    return 0;
}