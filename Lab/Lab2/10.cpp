#include <iostream>
using namespace std;

int main() {
    string name;
    double mathScore, physicsScore, chemistryScore;

    cout << "Nhap ho va ten hoc sinh: ";
    getline(cin, name);

    cout << "Nhap diem Toan: ";
    cin >> mathScore;
    cout << "Nhap diem Ly: ";
    cin >> physicsScore;
    cout << "Nhap diem Hoa: ";
    cin >> chemistryScore;

  //DTB 3 mon 
    double averageScore = (mathScore + physicsScore + chemistryScore) / 3.0;

    cout << "Diem trung binh 3 mon cua hoc sinh " << name << " la: " << averageScore << endl;

    // Xep loai hoc sinh
    if (averageScore >= 9.0) {
        cout << "Xep loai: Xuat sac" << endl;
    } else if (averageScore >= 8.0) {
        cout << "Xep loai: Gioi" << endl;
    } else if (averageScore >= 6.5) {
        cout << "Xep loai: Kha" << endl;
    } else if (averageScore >= 5.0) {
        cout << "Xep loai: Trung binh" << endl;
    } else if (averageScore >= 3.0) {
        cout << "Xep loai: Yeu" << endl;
    } else {
        cout << "Xep loai: Kem" << endl;
    }

    return 0;
}

