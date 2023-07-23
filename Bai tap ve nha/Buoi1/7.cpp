#include <iostream>
using namespace std;

int findMax(int a, int b, int c) {
    int max = a;

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    return max;
}

int main() {
    int num1, num2, num3;
    cout << "Nhap ba so: ";
    cin >> num1 >> num2 >> num3;

    int maxNumber = findMax(num1, num2, num3);
    cout << " So lon nhat trong ba so la: " << maxNumber << endl;

    return 0;
}

