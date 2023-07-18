#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout<< "MSSV:0850070063 , Ho ten: Nguyen Anh Tu, Lop: 08_DH_TTMT"<<endl; 
    float banKinh, dienTich, theTich;

    cout << "Nhap vao ban kinh cua hinh cau: ";
    cin >> banKinh;

    dienTich = 4 * M_PI * pow(banKinh, 2); //Cong thuc tinh hinh cau 
    theTich = (4.0 / 3.0) * M_PI * pow(banKinh, 3); // Công thuc tinh the tich 

    cout << "Dien tich cua hinh cau la: " << dienTich << endl;
    cout << "The tich cua hinh cau la: " << theTich << endl;

    return 0;
}

