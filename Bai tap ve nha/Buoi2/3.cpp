#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Nhap ba so nguyen: ";
    cin >> num1 >> num2 >> num3;
    int max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }

    int min = num1;
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }

    cout << "So lon nhat la: " << max << endl;
    cout << "So nho nhat la: " << min << endl;

    return 0;
}

