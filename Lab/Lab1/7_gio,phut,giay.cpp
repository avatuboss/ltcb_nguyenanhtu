#include <iostream>

using namespace std;

int main() {
	cout<< "MSSV:0850070063 , Ho ten: Nguyen Anh Tu, Lop: 08_DH_TTMT"<<endl; 
    int gio, phut, giay;
    cout << "Nhap gio: ";
    cin >> gio;

    cout << "Nhap phut: ";
    cin >> phut;

    cout << "Nhap giay: ";
    cin >> giay;
    int tongGiay = gio * 3600 + phut * 60 + giay;
    cout << "Tong so giay: " << tongGiay << "s" << endl;

    return 0;
}

