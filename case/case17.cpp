#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n / 10 == 1) cout << n << " uchebnyh zadaniya";
    else
    {
        cout << n << " ";
        switch (n % 10)
        {
        case 1:
            cout << "uchebnoye zadaniye";
            break;
        
        case 2:
        case 3:
        case 4:
            cout << "uchebnyh zadaniya";
            break;

        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 0:
            cout << "uchebnyh zadaniy";
            break;
        
        default:
            cout << "error";
            break;
        }
    }

    return 0;
}