#include <iostream>
using namespace std;

int main() {
	cout<< "MSSV:0850070063 , Ho ten: Nguyen Anh Tu, Lop: 08_DH_TTMT"<<endl; 
    int a, b;
    
    cout << "Nhap vao so thu nhat: ";
    cin >> a;
    cout << "Nhap vao so thu hai: ";
    cin >> b;
    
    int min, max;
    
    // min 
    if (a < b) {
        min = a;
    } else {
        min = b;
    }
    
    // max 
    if (a > b) {
        max = a;
    } else {
        max = b;
    }
    
    cout << "Gia tri nho nhat la: " << min << endl;
    cout << "Gia tri lon nhat la: " << max << endl;
    
    return 0;
}

