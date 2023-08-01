#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void printPrimes(const vector<int>& arr) {
    cout << "Cac so nguyen to trong mang: ";
    bool hasPrimes = false;
    for (int i = 0; i < arr.size(); i++) {
        int num = arr[i]; {
            cout << num << " ";
            hasPrimes = true;
        }
    }
    if (!hasPrimes) {
        cout << "Khong co so nguyen to trong mang.";
    }
    cout << endl;
}


bool isSymmetric(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            return false;
        }
    }
    return true;
}


void printUniqueValues(const vector<int>& arr) {
    cout << "Cac gia tri xuat hien dung 1 lan trong mang: ";
    vector<int> count(10001, 0); 
    for (int i = 0; i < arr.size(); i++) {
        int num = arr[i];
    }
    bool hasUniqueValues = false;
    for (int i = 0; i < arr.size(); i++) {
        int num = arr[i]; {
            cout << num << " ";
            hasUniqueValues = true;
        }
    }
    if (!hasUniqueValues) {
        cout << "Khong co gia tri xuat hien dung 1 lan trong mang.";
    }
    cout << endl;
}


int findMaxNegativeIndex(const vector<int>& arr) {
    int maxNegative = -1;
    int maxNegativeIndex = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < 0 && arr[i] > maxNegative) {
            maxNegative = arr[i];
            maxNegativeIndex = i;
        }
    }
    return maxNegativeIndex;
}

int deleteElement(vector<int>& arr, int k) {
    int n = arr.size();
    if (k < 0 || k >= n) {
        return 0;
    }

    arr.erase(arr.begin() + k);
    return 1;
}

int main() {
    int choice;
    vector<int> arr;

    while (true) {
        cout << "Menu:\n";
        cout << "1. Nhap day tang dan va xuat cac so nguyen to\n";
        cout << "2. Kiem tra mang co doi xung hay khong\n";
        cout << "3. Liet ke gia tri xuat hien dung 1 lan\n";
        cout << "4. Tim vi tri phan tu co gia tri am lon nhat\n";
        cout << "5. Xoa phan tu tai vi tri k\n";
        cout << "6. Thoat\n";
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;

        switch (choice) {
            case 1:
                int num;
                cout << "Nhap day tang dan (nhap so am de ket thuc): ";
                while (cin >> num) {
                    if (num < 0) break;
                    if (arr.empty() || num > arr.back()) {
                        arr.push_back(num);
                    } else {
                        cout << "Day khong tang dan. Vui long nhap lai.\n";
                    }
                }
                printPrimes(arr);
                break;

            case 2:
                if (arr.empty()) {
                    cout << "Mang rong. Vui long nhap day tang dan truoc.\n";
                } else {
                    if (isSymmetric(arr)) {
                        cout << "Mang doi xung.\n";
                    } else {
                        cout << "Mang khong doi xung.\n";
                    }
                }
                break;

            case 3:
                if (arr.empty()) {
                    cout << "Mang rong. Vui long nhap day tang dan truoc.\n";
                } else {
                    printUniqueValues(arr);
                }
                break;

            case 4:
                if (arr.empty()) {
                    cout << "Mang rong. Vui long nhap day tang dan truoc.\n";
                } else {
                    int maxNegativeIndex = findMaxNegativeIndex(arr);
                    if (maxNegativeIndex == -1) {
                        cout << "Khong co phan tu am trong mang.\n";
                    } else {
                        cout << "Vi tri phan tu am lon nhat: " << maxNegativeIndex << endl;
                    }
                }
                break;

            case 5:
                if (arr.empty()) {
                    cout << "Mang rong. Vui long nhap day tang dan truoc.\n";
                } else {
                    int k;
                    cout << "Nhap vi tri k muon xoa: ";
                    cin >> k;
                    int result = deleteElement(arr, k);
                    if (result == 1) {
                        cout << "Xoa phan tu tai vi tri " << k << " thanh cong.\n";
                    } else {
                        cout << "Vi tri k khong hop le. Khong xoa phan tu nao.\n";
                    }
                }
                break;

            case 6:
                cout << "Thoat chuong trinh.\n";
                return 0;

            default:
                cout << "Lua chon khong hop le. Vui long nhap lai.\n";
                break;
        }

        cout << endl;
    }

    return 0;
}

