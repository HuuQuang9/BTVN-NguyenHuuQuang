
#include <iostream>

using namespace std;

int main()
{
    int a;
    do {
        cout << "nhap so co 2 chu so: ";
        cin >> a;
        if (a < 10 || a > 99) {
            cout << "ban da nhap sai vui long thu lai" << endl;
        }
        else {
            switch (a / 10) {
            case 1 :
                cout << "muoi"; break;
            case 2 :
                cout << "hai muoi"; break;
            case 3 :
                cout << "ba muoi"; break;
            case 4 :
                cout << "bon muoi"; break;
            case 5 :
                cout << "nam muoi"; break;
            case 6:
                cout << "sau muoi"; break;
            case 7:
                cout << "bay muoi"; break;
            case 8:
                cout << "tam muoi"; break;
            case 9:
                cout << "chin muoi"; break;
            }

            switch (a % 10) {
            case 1:
                cout << " mot"; break;
            case 2:
                cout << " hai"; break;
            case 3:
                cout << " ba"; break;
            case 4:
                cout << " bon"; break;
            case 5:
                cout << " nam"; break;
            case 6:
                cout << " sau"; break;
            case 7:
                cout << " bay"; break;
            case 8:
                cout << " tam"; break;
            case 9:
                cout << " chin"; break;
            }

        }
    } while (a < 10 || a > 99);
       



}

