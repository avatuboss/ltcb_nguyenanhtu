#include <iostream>

using namespace std;

int main() {
	cout<< "MSSV:0850070063 , Ho ten: Nguyen Anh Tu, Lop: 08_DH_TTMT"<<endl; 
    int x;
    cout << "Nhap mot so nguyen duong co 3 chu so: ";
    cin >> x;
    int reversedNumber = (x % 10) * 100 + ((x / 10) % 10) * 10 + x / 100;
    cout << "So sau khi dao nguoc: " << reversedNumber << endl;
    
    return 0;
}

