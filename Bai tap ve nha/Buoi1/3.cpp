#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Nhap vao so nguyen a: ";
    cin >> a;
    cout << "Nhap vao so nguyen b: ";
    cin >> b;

    int phanNguyen = a / b;
    int phanDu = a % b;

    cout << "Ket qua chia lay phan nguyen: " << phanNguyen << endl;
    cout << "Ket qua chia lay phan du: " << phanDu << endl;

    return 0;
}

