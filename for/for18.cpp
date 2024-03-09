#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, s = 0;
    int n;
    cin >> a >> n;
    for (int i = 0; i <= n; i++)
    {
        s += pow(a, i) * pow(-1, i);
    }
    cout << s << endl;
    return 0;
}