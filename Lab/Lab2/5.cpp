#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}

int sumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        sum += lastDigit;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    cout << "Nhap mot so nguyen duong n: ";
    cin >> n;

    int count = countDigits(n);
    int sum = sumDigits(n);

    cout << "So chu so cua " << n << " la: " << count << endl;
    cout << "Tong cac chu so cua " << n << " la: " << sum << endl;

    return 0;
}

