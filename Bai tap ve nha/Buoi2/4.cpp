#include <iostream>
using namespace std;

struct ThoiGian {
    int gio;
    int phut;
    int giay;
};

ThoiGian congHaiGio(const ThoiGian& gio1, const ThoiGian& gio2) {
    ThoiGian ketQua;
    ketQua.giay = gio1.giay + gio2.giay;
    ketQua.phut = gio1.phut + gio2.phut;
    ketQua.gio = gio1.gio + gio2.gio;
    ketQua.phut += ketQua.giay / 60;
    ketQua.giay %= 60;
    ketQua.gio += ketQua.phut / 60;
    ketQua.phut %= 60;

    return ketQua;
}
ThoiGian truHaiGio(const ThoiGian& gio1, const ThoiGian& gio2) {
    ThoiGian ketQua;
    ketQua.giay = gio1.giay - gio2.giay;
    ketQua.phut = gio1.phut - gio2.phut;
    ketQua.gio = gio1.gio - gio2.gio;
    while (ketQua.giay < 0) {
        ketQua.giay += 60;
        ketQua.phut -= 1;
    }

    while (ketQua.phut < 0) {
        ketQua.phut += 60;
        ketQua.gio -= 1;
    }

    return ketQua;
}

int main() {
    ThoiGian gio1, gio2;

    cout << "Nhap gio thu nhat (gio phut giay): ";
    cin >> gio1.gio >> gio1.phut >> gio1.giay;

    cout << "Nhap gio thu hai (gio phut giay): ";
    cin >> gio2.gio >> gio2.phut >> gio2.giay;

    ThoiGian ketQuaCong = congHaiGio(gio1, gio2);
    ThoiGian ketQuaTru = truHaiGio(gio1, gio2);

    cout << "Ket qua cong hai gio: " << ketQuaCong.gio << " gio " << ketQuaCong.phut << " phut " << ketQuaCong.giay << " giay" << endl;
    cout << "Ket qua tru hai gio: " << ketQuaTru.gio << " gio " << ketQuaTru.phut << " phut " << ketQuaTru.giay << " giay" << endl;

    return 0;
}

