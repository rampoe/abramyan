#include <iostream>
using namespace std;
int main()
{
    float a, s = 0, p = 1;
    int n;
    cin >> a >> n;
    for (int i = 0; i <= n; i++)
    {
        s += p;
        p *= a;
    }
    cout << s;
    return 0;
}