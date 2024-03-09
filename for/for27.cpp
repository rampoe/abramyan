#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long double x;
    long long int n;
    
    cout << "X = "; cin >> x;
    cout << "N = "; cin >> n;

    long double s = x;

    for (int i = 1; i <= n; i++)
    {
        long double u = 1;
        long double d = 1;

        for (int j = 2; j <= 2 * n; j += 2)
        {
            d *= j;
        }
        d *= 2 * n + 1;

        for (int j = 1; j <= 2 * n - 1; j += 2)
        {
            u *= j;
        }
        u *= 2 * n + 1;

        s += u / d;
    }

    cout << s << endl;
    cout << asin(x) << endl;

    return 0;
}