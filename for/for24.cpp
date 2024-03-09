#include <iostream>
#include <cmath>

using namespace std;

double cos_approx(double x, int n) {
  double result = 1.0;
  double term = 1.0;
  int sign = 1;

  for (int i = 1; i <= n; i++) {
    term *= x * x;
    sign *= -1;
    double factorial = 1.0;
    for (int j = 1; j <= 2 * i; j++) {
      factorial *= j;
    }
    result += sign * term / factorial;
  }

  return result;
}

int main() {
  double x;
  int n;

  cout << "Введите x: ";
  cin >> x;

  cout << "Введите N: ";
  cin >> n;

  double cos_approx_value = cos_approx(x, n);
  cout << "cos(" << x << ") ≈ " << cos_approx_value << endl;

  return 0;
}
