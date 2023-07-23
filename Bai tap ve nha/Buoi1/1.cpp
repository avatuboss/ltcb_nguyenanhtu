#include <iostream>
#include <string>
using namespace std;

int main() {
    string hoTen, maSoSinhVien, lop, soDienThoai, gioiTinh;
    cout << "Nhap thong tin sinh vien:" << endl;

    cout << "Ho ten: ";
    getline(cin, hoTen);

    cout << "Ma so sinh vien: ";
    getline(cin, maSoSinhVien);

    cout << "Lop: ";
    getline(cin, lop);

    cout << "So dien thoai: ";
    getline(cin, soDienThoai);

    cout << "Gioi tinh: ";
    getline(cin, gioiTinh);
    cout << endl << "Thong tin sinh vien:" << endl;
    cout << "Ho ten: " << hoTen << endl;
    cout << "Ma so sinh vien: " << maSoSinhVien << endl;
    cout << "Lop: " << lop << endl;
    cout << "So dien thoai: " << soDienThoai << endl;
    cout << "Gioi tinh: " << gioiTinh << endl;

    return 0;
}

