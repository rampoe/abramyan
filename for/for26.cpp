#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x, s = 0;
    int n;
    cin >> x >> n;
    for (int i = 1; i <= n; i++) {
        s += pow(-1, i) * pow(x, 2 * i + 1) / (2 * i + 1);
    }
    cout << s << endl;
    return 0;
}