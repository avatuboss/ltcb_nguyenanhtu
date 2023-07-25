#include <iostream>
using namespace std;

int reverseDigits(int n) {
    int reversedNumber = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        n /= 10;
    }
    return reversedNumber;
}

int main() {
    int n;
    cout << "Nhap mot so nguyen duong n: ";
    cin >> n;

    int reversed = reverseDigits(n);
    cout << "Chu so dao nguoc cua " << n << " la: " << reversed << endl;

    return 0;
}

