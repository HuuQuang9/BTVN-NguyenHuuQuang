

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
    int m, n, t;
    cout << "nhap n: ";
    cin >> n;
    cout << "nhap m: ";
    cin >> m;
    t = giaithua(n) + giaithua(m);
    cout << "(n! + m!) = " << t;
    return 0;
}



