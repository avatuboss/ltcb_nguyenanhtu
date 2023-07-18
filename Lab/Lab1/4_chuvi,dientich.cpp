#include <iostream>
using namespace std;

const double PI = 3.14159;

int main() {
	cout<< "MSSV:0850070063 , Ho ten: Nguyen Anh Tu, Lop: 08_DH_TTMT"<<endl; 
    double radius;
    cout << "Nhap vao ban kinh cua hinh tron: ";
    cin >> radius;
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;
 //in ra
  
    cout << "Chu vi cua hinh tron la: " << circumference << endl;
    cout << "Dien tich cua hinh tron la: " << area << endl;
    
    return 0;
}

