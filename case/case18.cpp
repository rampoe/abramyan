#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    switch (n / 100)
    {
    case 1:
        cout << "sto ";
        break;
    case 2:
        cout << "dvesti ";
        break;
    case 3:
        cout << "trista ";
        break;
    case 4:
        cout << "chetyresta ";
        break;
    case 5:
        cout << "pyatsot ";
        break;
    case 6:
        cout << "shestsot ";
        break;
    case 7:
        cout << "semsot ";
        break;
    case 8:
        cout << "vosemsot ";
        break;
    case 9:
        cout << "devyatsot ";
        break;
    default:
        cout << "error ";
        break;
    }

    switch (n % 100)
    {
    case 10:
        cout << "desyat";
        break;
    case 11:
        cout << "odinnadtsat";
        break;
    case 12:
        cout << "dvenadtsat";
        break;
    case 13:
        cout << "trinadtsat";
        break;
    case 14:
        cout << "chetyrnadtsat";
        break;
    case 15:
        cout << "pyatnadtsat";
        break;
    case 16:
        cout << "shestnadtsat";
        break;
    case 17:
        cout << "semnadtsat";
        break;
    case 18:
        cout << "vosemnadtsat";
        break;
    case 19:
        cout << "devyatnadtsat";
        break;
    default:
        switch (n % 100 / 10)
        {
        case 2:
            cout << "dvadtsat ";
            break;
        case 3:
            cout << "tridtsat ";
            break;
        case 4:
            cout << "sorok ";
            break;
        case 5:
            cout << "pyatdesyat ";
            break;
        case 6:
            cout << "shestdesyat ";
            break;
        case 7:
            cout << "semdesyat ";
            break;
        case 8:
            cout << "vosemdesyat ";
            break;
        case 9:
            cout << "devyanosta ";
            break;
        default:
            cout << "error ";
            break;
        }

        switch (n % 10)
        {
        case 1:
            cout << "odin";
            break;
        case 2:
            cout << "dva";
            break;
        case 3:
            cout << "tri";
            break;
        case 4:
            cout << "chetyre";
            break;
        case 5:
            cout << "pyat";
            break;
        case 6:
            cout << "shest";
            break;
        case 7:
            cout << "sem";
            break;
        case 8:
            cout << "vosem";
            break;
        case 9:
            cout << "devyat";
            break;
        default:
            cout << "error ";
            break;
        }
        break;
    }

    return 0;
}