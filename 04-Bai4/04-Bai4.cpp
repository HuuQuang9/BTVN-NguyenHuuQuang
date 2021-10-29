

#include <iostream>

using namespace std;

int main()
{
    int giobd, phutbd, giokt, phutkt, a, b;
    float giothue, tien = 0;
    cout << "tat ca dinh dang 24h va 60p" << endl;
    cout << "gio bat dau thue: ";
    cin >> giobd ;
    cout << "phut";
    cin >> phutbd;
    cout << "gio ngung thue: ";
    cin >> giokt;
    cout << "phut";
    cin >> phutkt;
    if (giokt > 16) {
        if (giobd < 17) {
            a = 17 - giobd;
            b = 0 - phutbd;
            if (b < 0) {
                b += 60;
                --a;
            }
            giothue = a + b / 60;
            if (giothue > 3) {
                tien = 3 * 30000;
                giothue -= 3;
                tien += giothue * 70 * 30000 / 100;
            }
            else {
                tien = giothue * 30000;
            }
            tien = tien * 90 / 100;
            a = giokt - 17;
            b =phutbd - 0;
            if (b < 0) {
                b += 60;
                --a;
            }
            giothue = a + b / 60;
            tien += giothue * 70 * 30000 / 100;


        }
        else {
            a = giokt - giobd;
            if (a < 0) { a += 24; }
            b = phutkt - phutbd;
            if (b < 0) {
                b += 60;
                --a;
            }
            giothue = a + b / 60;
            if (giothue > 3) {
                tien = 3 * 30000;
                giothue -= 3;
                tien += giothue * 70 * 30000 / 100;
            }
            else {
                tien = giothue * 30000;
            }



        }

    }
    else {
        a = giokt - giobd;
        if (a < 0) { a += 24; }
        b = phutkt - phutbd;
        if (b < 0) {
            b += 60;
            --a;
        }
        giothue = a + b / 60;
        if (giothue > 3) {
            tien = 3 * 30000;
            giothue -= 3;
            tien += giothue * 70 * 30000 / 100;
        }
        else {
            tien = giothue * 30000;
        }
        tien = tien * 90 / 100;

    }





    






    cout << "so tien khach phai tra: " << tien;

    return 0;
}

