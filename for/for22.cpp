#include <iostream>
#include <cmath>
using namespace std;
float fact(int n)
{
    float p = 1;
    for (int i = 1; i <= n; i++)
    {
        p *= i;
    }
    return p;
}
int main()
{
    float x, s;
    int n;
    cin >> x >> n;
    for (int i = 0; i <= n; i++)
    {
        s += pow(x, i)/fact(i);
    }
    cout << s << endl;
    return 0;
}