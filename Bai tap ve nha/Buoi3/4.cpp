#include <iostream>

using namespace std;

int main() {
    int number;
    int sum = 0;
    cout << "Nhap vao mot so nguyen duong: ";
    cin >> number;
    if (number <= 0) {
        cout << "So nhap vao khong phai la so nguyen duong." << endl;
        return 1;
    }

    int temp = number;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    cout << "Tong cac chu so cua " << number << " la: " << sum << endl;

    return 0;
}

