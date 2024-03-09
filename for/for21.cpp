#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    float s = 1 , cs = 1;
    for (int i = 1; i <= n; i++)
    {
        cs *= (float)i;
        s += 1/(float)cs;
    }
    cout << s;
    return 0;
}