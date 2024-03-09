#include <iostream>
using namespace std;
int main()
{
    float a, p = 1;
    int n;
    cin >> a >> n;
    for (int i = 0; i < n; i++)
    {
        p *= a;
        cout << p << endl;
    }
    return 0;
}