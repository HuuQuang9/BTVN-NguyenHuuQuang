

#include <iostream>

using namespace std;


int main()
{
    int a, b;
    std::cout << "nhap so thu nhat: ";
    cin >> a;
    cout << "nhap so thu hai: ";
    cin >> b;
    if (a == b) {
        cout << "max = min = " << a << endl;
    }
    else {
        if (a > b) {
            cout << "max: " << a << endl;
            cout << "min: " << b << endl;
        }
        else {
            cout << "max: " << b << endl;
            cout << "min: " << a << endl;
        }
    }
}

