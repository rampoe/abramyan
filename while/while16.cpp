#include <iostream>

using namespace std;

int main() {
    const double target_distance = 200.0;
    int day = 1;
    double distance_covered = 10.0;
    double p;
    cout << "P = ";
    cin >> p;
    while (distance_covered < target_distance) {
        double increase = distance_covered * (p / 100.0);
        distance_covered += increase;
        day++;
    }
    cout << "K = " << day << endl;
    cout << "S = " << distance_covered << endl;
    return 0;
}