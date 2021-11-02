

#include <iostream>

using namespace std;

int giaithua(int x) {
    int i = 1, l = 1; 
    while (i <= x) {
        l = l * i;
        i++;

    }
    return l;
}

int main()
{
   
   /* cout << "nhap n: ";
    cin >> n;
    cout << "nhap m: ";
    cin >> m;
    t = giaithua(n) + giaithua(m);*/
    int m, n, t, mang[1000];
    t = 0;
    cout << "nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> mang[i];
    }
    for (int i = 0; i < n; i++) {
        t += giaithua(mang[i]);
    }
    cout << "tong = " << t << endl;
    // xong phan tinh tong giai thua  cua mang 
    //den phan sap xep
    int tg;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (mang[j] < mang[i]) {
                tg = mang[i];
                mang[i] = mang[j];
                mang[j] = tg;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << mang[i]<<" ";
    }
    return 0;
}



