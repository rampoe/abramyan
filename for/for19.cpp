#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    float p = 1;
    for (int i = 1; i <= n; i++)
    {
        p *= i;
    }
    cout << p;
    return 0;
}