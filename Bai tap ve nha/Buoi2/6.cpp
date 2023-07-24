#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Nhap he so a, b, c cua phuong trinh ax^2 + bx + c = 0: ";
    cin >> a >> b >> c;

    double denta = b * b - 4 * a * c;
    
    if (denta > 0) {
        double x1 = (-b + sqrt(denta)) / (2 * a);
        double x2 = (-b - sqrt(denta)) / (2 * a);
        cout << "Phuong trinh co hai nghiem phan biet:\n";
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    } else if (denta == 0) {
        double x = -b / (2 * a);
        cout << "Phuong trinh co nghiem kep:\n";
        cout << "x = " << x << "\n";
    } else {
        cout << "Phuong trinh vo nghiem.\n";
    }

    return 0;
}

