#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Nhap N: ";
    cin >> N;
    int hangChuc = N / 10;
    int hangDonVi = N % 10;
    int tongChuSo = hangChuc + hangDonVi;
    cout << "Tong cac chu so cua " << N << " la: " << tongChuSo << endl;

    return 0;
}

