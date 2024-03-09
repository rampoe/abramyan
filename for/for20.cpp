#include <iostream>
using namespace std;
int main(){
    int n;
    float cs = 1, s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cs *= i;
        s += cs;
    }
    cout << s;
    return 0;
}