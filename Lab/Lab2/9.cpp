#include <iostream>
using namespace std;

int main() {
    const double firstKmPrice = 15000.0;
    const double from2To5KmPrice = 13500.0;
    const double from6AndAboveKmPrice = 11000.0;
    const double discountPercentage = 0.10;
    const int discountThreshold = 120;

    int numKm;
    cout << "Nhap so km da di: ";
    cin >> numKm;

    double totalCost = 0.0;

    if (numKm >= 1 && numKm <= 5) {
        totalCost = numKm * firstKmPrice;
    } else if (numKm >= 6 && numKm <= discountThreshold) {
        totalCost = firstKmPrice + (numKm - 1) * from2To5KmPrice;
    } else if (numKm > discountThreshold) {
        double remainingKm = numKm - discountThreshold;
        totalCost = firstKmPrice + 4 * from2To5KmPrice + remainingKm * from6AndAboveKmPrice;

        //Giam 10% 
        double discountAmount = totalCost * discountPercentage;
        totalCost -= discountAmount;
    }

    cout << "Tong so tien phai tra: " << totalCost << " VND" << endl;

    return 0;
}

