#include <iostream>
using namespace std;

bool isPrime(int number) {
    if (number <= 1)
        return false;
    int i = 2;
    while (i * i <= number) {
        if (number % i == 0)
            return false;
        i++;
    }
    return true;
}

int main() {
    int N;

    do {
        cout << "Nhap vao mot so nguyen N (N > 100): ";
        cin >> N;
    } while (N <= 100);

    cout << "Cac so nguyen to nho hon " << N << " la: ";
    int i = 2;
    while (i < N) {
        if (isPrime(i)) {
            cout << i << " ";
        }
        i++;
    }

    cout << endl;

    return 0;
}

