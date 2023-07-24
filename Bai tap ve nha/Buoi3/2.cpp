#include <iostream>
using namespace std; 

double factorial(int n) {
    double result = 1.0;
    int i = 1;
    while (i <= n) {
        result *= i;
        i++;
    }
    return result;
}

int main() {
    int n;
    double sum = 0.0;

    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        sum += 1.0 / factorial(i);
        i++;
    }
    cout << "Tong S = " << sum << endl;

    return 0;
}

