#include <iostream>

using namespace std;

int main() {
	cout<< "MSSV:0850070063 , Ho ten: Nguyen Anh Tu, Lop: 08_DH_TTMT"<<endl; 
    int tongGiay;
//Nhap so giay 
    cout << "Nhap tong so giay: ";
    cin >> tongGiay;

    // Chuyen doi 
    int gio = tongGiay / 3600;
    int phut = (tongGiay % 3600) / 60;
    int giay = (tongGiay % 3600) % 60;

    // In ra ket qua 
    cout << "Thoi gian: " << gio << " gio " << phut << " phut " << giay << " giay" << endl;

    return 0;
}

