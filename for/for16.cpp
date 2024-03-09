#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a;
    int n;
    cin >> a >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << pow(a, i) << endl;
    }
    return 0;
}