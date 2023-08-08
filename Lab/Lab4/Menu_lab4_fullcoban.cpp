#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <algorithm>
using namespace std;


bool isPrime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}


void averagePositiveAndNegative(int arr[], int n) {
    int sumPositive = 0;
    int countPositive = 0;
    int sumNegative = 0;
    int countNegative = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            sumPositive += arr[i];
            countPositive++;
        }
        else if (arr[i] < 0) {
            sumNegative += arr[i];
            countNegative++;
        }
    }

    if (countPositive > 0)
        cout << "Trung binh cong cac so duong: " << static_cast<double>(sumPositive) / countPositive << endl;
    else
        cout << "Khong co so duong trong mang." << endl;

    if (countNegative > 0)
        cout << "Trung binh cong cac so am: " << static_cast<double>(sumNegative) / countNegative << endl;
    else
        cout << "Khong co so am trong mang." << endl;
}


void sortEvenNumbers(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] % 2 == 0 && arr[j] % 2 == 0 && arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


void checkAndRemoveElement(int arr[], int& n, int x) {
    int countX = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            countX++;
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            i--;
            n--;
        }
    }
    if (countX > 0)
        cout << "So lan x xuat hien trong mang: " << countX << endl;
    else
        cout << "Khong co " << x << " trong mang." << endl;
}


void insertElement(int arr[], int& n, int x) {
    int i = n - 1;
    while (i >= 0 && arr[i] > x) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = x;
    n++;
}

void removeDuplicates(int arr[], int& n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                j--;
                n--;
            }
        }
    }
}


void deleteNElementsFromPosition(int arr[], int& n, int p, int numToDelete) {
    for (int i = p; i < n - numToDelete; i++) {
        arr[i] = arr[i + numToDelete];
    }
    n -= numToDelete;
}

void insertArrayAtPosition(int arrA[], int& nA, int arrB[], int nB, int p) {
    for (int i = 0; i < nB; i++) {
        insertElement(arrA, nA, arrB[i]);
        p++;
    }
}


void printMostFrequentElement(double arr[], int n) {
    int maxCount = 0;
    double mostFrequent = arr[0];
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }
    cout << "Phan tu xuat hien nhieu nhat: " << mostFrequent << " (x" << maxCount << " lan)" << endl;
}



void checkAndInsertElement(double arr[], int& n, double x) {
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            index = i;
            break;
        }
    }

    if (index != -1)
        cout << x << " xuat hien tai vi tri " << index << " trong mang." << endl;
    else {
        int i = n - 1;
        while (i >= 0 && arr[i] > x) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = x;
        n++;
        cout << "Chen " << x << " vao mang sao cho mang van tang." << endl;
    }
}

//Cau truc nv 
struct NHANVIEN {
    int MaNV;
    string HoTen;
    string DiaChi;
    bool CBQL;
};


void inputEmployee(NHANVIEN& employee) {
    cout << "Nhap MaNV: ";
    cin >> employee.MaNV;
    cin.ignore();
    cout << "Nhap Ho va Ten: ";
    getline(cin, employee.HoTen);
    cout << "Nhap Dia Chi: ";
    getline(cin, employee.DiaChi);
    cout << "Nhap CBQL (1: Co, 0: Khong): ";
    cin >> employee.CBQL;
}


void printCBQLEmployees(NHANVIEN employees[], int n) {
    cout << "Danh sach cac nhan vien la can bo quan ly:" << endl;
    for (int i = 0; i < n; i++) {
        if (employees[i].CBQL)
            cout << employees[i].HoTen << endl;
    }
}


void removeNonCBQL(NHANVIEN employees[], int& n) {
    for (int i = 0; i < n; i++) {
        if (!employees[i].CBQL) {
            for (int j = i; j < n - 1; j++) {
                employees[j] = employees[j + 1];
            }
            i--;
            n--;
        }
    }
}


void insertEmployeeAtPosition(NHANVIEN employees[], int& n, NHANVIEN newEmployee, int k) {
    for (int i = n; i > k; i--) {
        employees[i] = employees[i - 1];
    }
    employees[k] = newEmployee;
    n++;
}

int main() {
    int choice;
    do {
        cout << "====== MENU ======" << endl;
        cout << "1. Bai tap 1" << endl;
        cout << "2. Bai tap 2" << endl;
        cout << "3. Bai tap 3" << endl;
        cout << "4. Bai tap 4" << endl;
        cout << "5. Bai tap 5" << endl;
        cout << "6. Bai tap 6" << endl;
        cout << "7. Bai tap 7" << endl;
        cout << "8. Bai tap 8" << endl;
        cout << "9. Bai tap 9" << endl;
        cout << "10. Bai tap 10" << endl;
        cout << "0. Thoat" << endl;
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;

        int n;
        int A[100];
        int B[100];
        double realArr[100];
        int p, x, numToDelete, k;
        NHANVIEN employees[100];
        NHANVIEN newEmployee;

        switch (choice) {
        case 1:
            cout << "Nhap so phan tu cua mang: ";
            cin >> n;
            cout << "Nhap cac phan tu cua mang: ";
            for (int i = 0; i < n; i++) {
                cin >> A[i];
            }

            averagePositiveAndNegative(A, n);

            cout << "Cac so nguyen to trong mang: ";
            for (int i = 0; i < n; i++) {
                if (isPrime(A[i]))
                    cout << A[i] << " ";
            }
            cout << endl;

            sortEvenNumbers(A, n);
            cout << "Cac so chan trong mang sau khi sap xep: ";
            for (int i = 0; i < n; i++) {
                if (A[i] % 2 == 0)
                    cout << A[i] << " ";
            }
            cout << endl;
            break;

        case 2:
            cout << "Nhap so phan tu cua mang: ";
            cin >> n;
            cout << "Nhap cac phan tu cua mang: ";
            for (int i = 0; i < n; i++) {
                cin >> A[i];
            }
            cout << "Nhap so can kiem tra va xoa: ";
            cin >> x;
            checkAndRemoveElement(A, n, x);
            cout << "Mang sau khi xoa " << x << ": ";
            for (int i = 0; i < n; i++) {
                cout << A[i] << " ";
            }
            cout << endl;
            break;

        case 3:
            cout << "Nhap so phan tu cua mang: ";
            cin >> n;
            cout << "Nhap cac phan tu cua mang: ";
            for (int i = 0; i < n; i++) {
                cin >> A[i];
            }
            cout << "Nhap so can chen: ";
            cin >> x;
            insertElement(A, n, x);
            cout << "Mang sau khi chen " << x << ": ";
            for (int i = 0; i < n; i++) {
                cout << A[i] << " ";
            }
            cout << endl;
            break;

        case 4:
            cout << "Nhap so phan tu cua mang: ";
            cin >> n;
            for (int i = 0; i < n; i++) {
                A[i] = rand() % 100 + 1;
            }
            cout << "Mang sau khi sap xep va loai bo cac phan tu trung nhau: ";
            sort(A, A + n);
            removeDuplicates(A, n);
            for (int i = 0; i < n; i++) {
                cout << A[i] << " ";
            }
            cout << endl;
            break;

        case 5:
            cout << "Nhap so phan tu cua mang: ";
            cin >> n;
            cout << "Nhap cac phan tu cua mang: ";
            for (int i = 0; i < n; i++) {
                cin >> A[i];
            }
            cout << "Nhap vi tri bat dau xoa: ";
            cin >> p;
            cout << "Nhap so luong phan tu can xoa: ";
            cin >> numToDelete;
            deleteNElementsFromPosition(A, n, p, numToDelete);
            cout << "Mang sau khi xoa: ";
            for (int i = 0; i < n; i++) {
                cout << A[i] << " ";
            }
            cout << endl;
            break;

        case 6:
            cout << "Nhap so phan tu cua mang A: ";
            cin >> n;
            cout << "Nhap cac phan tu cua mang A: ";
            for (int i = 0; i < n; i++) {
                cin >> A[i];
            }
            cout << "Nhap so phan tu cua mang B: ";
            cin >> p;
            cout << "Nhap cac phan tu cua mang B: ";
            for (int i = 0; i < p; i++) {
                cin >> B[i];
            }
            cout << "Nhap vi tri can chen B vao A: ";
            cin >> k;
            insertArrayAtPosition(A, n, B, p, k);
            cout << "Mang A sau khi chen B: ";
            for (int i = 0; i < n; i++) {
                cout << A[i] << " ";
            }
            cout << endl;
            break;

        case 7:
            cout << "Nhap so phan tu cua mang thuc: ";
            cin >> n;
            cout << "Nhap cac phan tu cua mang thuc: ";
            for (int i = 0; i < n; i++) {
                cin >> realArr[i];
            }
            sort(realArr, realArr + n);
            printMostFrequentElement(realArr, n);

            cout << "Nhap so can kiem tra va chen: ";
            cin >> x;
            checkAndInsertElement(realArr, n, x);
            cout << "Mang sau khi chen " << x << ": ";
            for (int i = 0; i < n; i++) {
                cout << realArr[i] << " ";
            }
            cout << endl;
            break;

        case 8:
            cout << "Nhap so luong nhan vien: ";
            cin >> n;
            for (int i = 0; i < n; i++) {
                inputEmployee(employees[i]);
            }
            printCBQLEmployees(employees, n);
            break;

        case 9:
            cout << "Nhap so luong nhan vien: ";
            cin >> n;
            for (int i = 0; i < n; i++) {
                inputEmployee(employees[i]);
            }
            removeNonCBQL(employees, n);
            cout << "Danh sach nhan vien sau khi xoa cac nhan vien khong la can bo quan ly:" << endl;
            for (int i = 0; i < n; i++) {
                cout << employees[i].HoTen << endl;
            }
            break;

        case 10:
            cout << "Nhap so luong nhan vien hien tai: ";
            cin >> n;
            cout << "Nhap thong tin cua " << n << " nhan vien:" << endl;
            for (int i = 0; i < n; i++) {
                inputEmployee(employees[i]);
            }
            cout << "Nhap thong tin nhan vien can chen:" << endl;
            inputEmployee(newEmployee);
            cout << "Nhap vi tri can chen: ";
            cin >> k;
            insertEmployeeAtPosition(employees, n, newEmployee, k);
            cout << "Danh sach nhan vien sau khi chen:" << endl;
            for (int i = 0; i < n; i++) {
                cout << employees[i].HoTen << endl;
            }
            break;

        case 0:
            cout << "Thoat chuong trinh." << endl;
            break;

        default:
            cout << "Lua chon khong hop le. Vui long nhap lai." << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}

