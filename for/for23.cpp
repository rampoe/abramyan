#include <iostream>
#include <cmath>

using namespace std;

long double fact(long long int n)
{
    long double p = 1;
    for (int i = 1; i <= n; i++)
    {
        p *= i;
    }
    return p;
}

int main()
{
    long double x;
    cout << "X = "; cin >> x;

    long long int n;
    cout << "N = "; cin >> n;

    long double s = x;

    for (int i = 1; i <= n; i++)
    {
        s += pow(-1, i) * pow(x, 2 * i + 1) / fact(2 * i + 1);
    }

    cout << s << endl;
    cout << "sin(x) = " << sin(x) << endl;

    return 0;
}