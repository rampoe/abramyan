#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x, s;
    int n;
    cin >> x >> n;
    for (int i = 1; i <= n; i++)
    {
        s += pow(-1, i - 1) * pow(x, i) / (float)i;
    }
    cout << s << endl;
    return 0;
}