#include <iostream>
using namespace std;

// Khai bao cac ham 
int demChuSo(int n);
int tinhTong(int n);
int tinhTongChuSoChan(int n);
int tinhTongChuSoLe(int n);
int timSND(int n);

int main() {
    int choice, n;
    do {
        cout << "------- MENU -------\n";
        cout << "1. Dem so luong chu so cua mot so nguyen\n";
        cout << "2. Tinh tong cac chu so cua mot so nguyen\n";
        cout << "3. Tinh tong cac chu so chan cua mot so nguyen\n";
        cout << "4. Tinh tong cac chu so le cua mot so nguyen\n";
        cout << "5. Tim so nghich dao cua mot so nguyen\n";
        cout << "0. Thoat\n";
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Nhap vao mot so nguyen: ";
            cin >> n;
            cout << "So luong chu so cua so " << n << " la: " << demChuSo(n) << endl;
            break;

        case 2:
            cout << "Nhap vao mot so nguyen: ";
            cin >> n;
            cout << "Tong cac chu so cua so " << n << " la: " << tinhTong(n) << endl;
            break;

        case 3:
            cout << "Nhap vao mot so nguyen: ";
            cin >> n;
            cout << "Tong cac chu so chan cua so " << n << " la: " << tinhTongChuSoChan(n) << endl;
            break;

        case 4:
            cout << "Nhap vao mot so nguyen: ";
            cin >> n;
            cout << "Tong cac chu so le cua so " << n << " la: " << tinhTongChuSoLe(n) << endl;
            break;

        case 5:
            cout << "Nhap vao mot so nguyen: ";
            cin >> n;
            cout << "Cac chu so nghich dao cua so " << n << " la: " << timSND(n) << endl;
            break;

        case 0:
            cout << "Thoat chuong trinh.\n";
            break;

        default:
            cout << "Lua chon khong hop le. Vui long nhap lai.\n";
        }
    } while (choice != 0);

    return 0;
}

// Dinh nghia cac ham 

int demChuSo(int n) {
    int count = 0;
    
    if (n == 0) {
        return 1;
    }

    while (n != 0) {
        n /= 10;
        count++;
    }

    return count;
}

int tinhTong(int n) {
    int sum = 0;

    while (n != 0) {
        int d = n % 10; 
        sum += d; 
        n /= 10;
    }
    return sum;
}

int tinhTongChuSoChan(int n) {
    int sum = 0;
    while (n != 0) {
        int d = n % 10; 
        if (d % 2 == 0) {
            sum += d; 
        }
        n /= 10; 
    }
    return sum;
}

int tinhTongChuSoLe(int n) {
    int sum = 0;
    while (n != 0) {
        int d = n % 10; 
        if (d % 2 != 0) {
            sum += d; 
        }
        n /= 10; 
    }
    return sum;
}

int timSND(int n) {
    int songhichdao = 0;

    while (n != 0) {
        int digit = n % 10; 
        songhichdao = songhichdao * 10 + digit; 
        n /= 10; 
    }

    return songhichdao;
}

