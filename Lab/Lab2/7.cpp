#include <iostream>
using namespace std;

int main() {
    const double rateA = 250000; 
    const double rateB = 200000; 
    const double rateC = 150000; 

    const int discountDays = 12; 

    const double discountA = 0.10; 
    const double discountB = 0.08; 

    int numDays;
    char roomType;

    cout << "Nhap so ngay thue: ";
    cin >> numDays;
    cout << "Nhap loai phong (A/B/C): ";
    cin >> roomType;

    double totalCost;
    if (numDays <= discountDays) {
        switch (roomType) {
            case 'A':
                totalCost = numDays * rateA;
                break;
            case 'B':
                totalCost = numDays * rateB;
                break;
            case 'C':
                totalCost = numDays * rateC;
                break;
            default:
                cout << "Loai phong khong hop le!";
                return 1;
        }
    } else {
        switch (roomType) {
            case 'A':
                totalCost = numDays * rateA;
                totalCost -= totalCost * discountA;
                break;
            case 'B':
            case 'C':
                totalCost = numDays * rateB; 
                totalCost -= totalCost * discountB;
                break;
            default:
                cout << "Loai phong khong hop le!";
                return 1;
        }
    }

    cout << "Tien thue phong la: " << totalCost << " dong" << endl;

    return 0;
}

