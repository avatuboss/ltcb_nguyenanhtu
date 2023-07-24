#include <iostream>
using namespace std;

int main() {
    float a, b, c;

    cout << "Nhap ba so thuc a, b, c: ";
    cin >> a >> b >> c;

    if (a > b) {
        float temp = a;
        a = b;
        b = temp;
    }

    if (b > c) {
        float temp = b;
        b = c;
        c = temp;
    }

    if (a > b) {
        float temp = a;
        a = b;
        b = temp;
    }

    cout << "Thu tu tang dan: " << a << ", " << b << ", " << c << endl;

    return 0;
}

