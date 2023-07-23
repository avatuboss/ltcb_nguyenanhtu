#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int sum = n * (n + 1) / 2;
    cout << "Gia tri cua bieu thuc S = " << sum << endl;

    return 0;
}

