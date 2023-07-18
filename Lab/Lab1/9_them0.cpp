#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	cout<< "MSSV:0850070063 , Ho ten: Nguyen Anh Tu, Lop: 08_DH_TTMT"<<endl; 
    int tongGiay;
    cout << "Nhap tong so giay: ";
    cin >> tongGiay;
    int gio = tongGiay / 3600;
    int phut = (tongGiay % 3600) / 60;
    int giay = (tongGiay % 3600) % 60;
    cout << "Thoi gian: " << setw(2) << setfill('0') << gio << ":" << setw(2) << setfill('0') << phut << ":" << setw(2) << setfill('0') << giay << endl;

    return 0;
}A 

