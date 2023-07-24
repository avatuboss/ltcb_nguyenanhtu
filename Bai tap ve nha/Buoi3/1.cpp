#include <iostream>
using namespace std;
int main() {
    int n;
    double sum = 0.0;

    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / (2 * i);
    }

    cout << "Tong S = " << sum << endl;

    return 0;
}

