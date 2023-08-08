#include <iostream>

using namespace std;

// Kiem tra so nguyen to 
bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Nhap mang tu ban phim 
void inputArray(int arr[], int n) {
    cout << "Nhap " << n << " so nguyen: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
}

// Ham in ra man hinh 
void printArray(int arr[], int n) {
    cout << "Mang so nguyen: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Kiem tra mang co thu tu tang dan hay khong 
bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

// Swap hoan doi gia tri 
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Sap xep theo thu tu tang dan 
void sortPrimes(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        if (isPrime(arr[i])) {
            for (int j = i + 1; j < n; ++j) {
                if (isPrime(arr[j])) {
                    if (arr[i] > arr[j]) {
                        swap(arr[i], arr[j]);
                    }
                }
            }
        }
    }
}

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int arr[100];

    inputArray(arr, n);
    printArray(arr, n);

    if (isSorted(arr, n)) {
        cout << "Mang duoc sap xep theo thu tu tang dan." << endl;
    } else {
        cout << "Mang khong duoc sap xep theo thu tu tang dan." << endl;
    }

    sortPrimes(arr, n);
    cout << "Mang sau khi duoc sap xep theo thu tu tang dan: ";
    printArray(arr, n);

    return 0;
}

