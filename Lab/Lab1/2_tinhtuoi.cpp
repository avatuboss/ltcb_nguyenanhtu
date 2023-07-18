#include <iostream>
#include <ctime>

using namespace std;

int main() {
	cout<< "MSSV:0850070063 , Ho ten: Nguyen Anh Tu, Lop: 08_DH_TTMT"<<endl; 
    int namSinh;
    cout << "Nhap nam sinh cua ban: ";
    cin >> namSinh;
    time_t t = time(NULL);
    tm* timePtr = localtime(&t);
    int namHienTai = timePtr->tm_year + 1900;
    int tuoi = namHienTai - namSinh;
    cout << "Tuoi hien tai cua ban la: " << tuoi << " tuoi" << endl;

    return 0;
}
