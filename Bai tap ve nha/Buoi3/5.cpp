#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;

    do {
        cout << "Nhap vao hai so nguyen duong a va b: ";
        cin >> a >> b;
    } while (a <= 0 || b <= 0);

    int gcdResult = gcd(a, b);

    cout << "Uoc so chung lon nhat cua " << a << " va " << b << " la: " << gcdResult << endl;

    return 0;
}

