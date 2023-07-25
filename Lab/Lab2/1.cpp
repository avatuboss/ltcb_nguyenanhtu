#include <iostream>
using namespace std;

int main() {
    int num;

    do {
        cout << "Nhap mot so trong pham vi tu 10 den 99: ";
        cin >> num;

        if (num >= 10 && num <= 99) {
            int tensDigit = num / 10;
            int unitsDigit = num % 10;
            if (num == (tensDigit * unitsDigit * 2)) {
                cout << "So " << num << " thoa man dieu kien: " << tensDigit << " * " << unitsDigit << " = 2 * (" << tensDigit << " + " << unitsDigit << ")" << endl;
            } else {
                cout << "So " << num << " khong thoa man dieu kien." << endl;
            }
        } else {
            cout << "So nhap vao khong hop le. Vui long nhap lai!" << endl;
        }
    } while (num < 10 || num > 99);

    return 0;
}

