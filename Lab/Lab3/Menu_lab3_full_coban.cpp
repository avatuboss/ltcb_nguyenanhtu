#include <iostream>
using namespace std;


int Min(int a, int b) {
    return (a < b) ? a : b;
}

int GCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int LCM(int a, int b) {
    return (a * b) / GCD(a, b);
}

int Factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        int result = 1;
        for (int i = 2; i <= n; i++) {
            result *= i;
        }
        return result;
    }
}

int CalculateX(int n) {
    int x0 = 1, x1 = 2, x;
    if (n == 0 || n == 1) {
        return x0;
    } else if (n == 2) {
        return x1;
    } else {
        for (int i = 3; i <= n; i++) {
            x = x0 + x1;
            x0 = x1;
            x1 = x;
        }
        return x;
    }
}


int Combination(int n, int k) {
    int numerator = Factorial(n);
    int denominator = Factorial(k) * Factorial(n - k);
    return numerator / denominator;
}

void RectangleInfo(int length, int width) {
    int perimeter = 2 * (length + width);
    int area = length * width;

    cout << "Chu vi hinh chu nhat: " << perimeter << endl;
    cout << "Dien tich hinh chu nhat: " << area << endl;
}

void DrawRectangle(int length, int width) {
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < width; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}


bool IsPerfectNumber(int num) {
    int sum = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (num / i != i) {
                sum += num / i;
            }
        }
    }
    return sum == num;
}

void PrintPerfectNumbers(int N) {
    cout << "Cac so hoan thien nho hon " << N << " la: ";
    for (int i = 1; i < N; i++) {
        if (IsPerfectNumber(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}


void CalculateMoney(int amount) {
    int denominations[] = {50000, 20000, 10000, 5000, 2000, 1000};
    int numDenominations = sizeof(denominations) / sizeof(denominations[0]);

    int minNumOfBills[numDenominations];
    int remainingAmount = amount;

    cout << "So tien " << amount << " co the duoc thanh toan bang cac to tien sau: " << endl;

    for (int i = 0; i < numDenominations; i++) {
        minNumOfBills[i] = remainingAmount / denominations[i];
        remainingAmount %= denominations[i];
        cout << denominations[i] << " VND: " << minNumOfBills[i] << " to" << endl;
    }
}

int ReverseDigits(int num) {
    int reversedNum = 0;
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return reversedNum;
}

int main() {
    int choice;
    do {
        cout << "\nMENU BAI TAP:Nguyen Anh Tu\n";
        cout << "1. Tim so nho nhat trong 2 so va 3 so\n";
        cout << "2. Tinh UCLN va BCNN\n";
        cout << "3. Tinh giai thua\n";
        cout << "4. Tinh so X\n";
        cout << "5. Tinh to hop C(n, k)\n";
        cout << "6. Tinh chu vi va dien tich hinh chu nhat\n";
        cout << "7. In ra cac so hoan thien nho hon N\n";
        cout << "8. Phan tich so tien thanh cac to tien nho nhat\n";
        cout << "9. Dao nguoc cac chu so trong mot so nguyen\n";
        cout << "0. Thoat\n";
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;

        switch (choice) {
            case 1:
                int a, b, c;
                cout << "Nhap 3 so a, b, c: ";
                cin >> a >> b >> c;
                cout << "So nho nhat trong 2 so la: " << Min(a, b) << endl;
                cout << "So nho nhat trong 3 so la: " << Min(Min(a, b), c) << endl;
                break;
            case 2:
                int num1, num2;
                cout << "Nhap 2 so nguyen duong: ";
                cin >> num1 >> num2;
                cout << "Uoc so chung lon nhat (UCLN) cua " << num1 << " va " << num2 << " la: " << GCD(num1, num2) << endl;
                cout << "Boi so chung nho nhat (BCNN) cua " << num1 << " va " << num2 << " la: " << LCM(num1, num2) << endl;
                break;
			case 3:
				int n;
				cout << "Nhap so nguyen duong n: ";
				cin >> n;
				cout << n << "! = " << Factorial(n) << endl;
				break;
				case 4:
				int x;
				cout << "Nhap so thu tu X: ";
				cin >> x;
				cout << "So thu tu X la: " << CalculateX(x) << endl;
				break;
				case 5:
				int nComb, kComb;
				cout << "Nhap hai so nguyen duong n, k (n >= k): ";
				cin >> nComb >> kComb;
				if (nComb < kComb) {
				cout << "Hai so nhap vao khong hop le. Vui long nhap lai!" << endl;
				} else {
				cout << "C(" << nComb << ", " << kComb << ") = " << Combination(nComb, kComb) << endl;
				}
				break;
				case 6:
				int length, width;
				cout << "Nhap do dai va do rong cua hinh chu nhat: ";
				cin >> length >> width;
				RectangleInfo(length, width);
				cout << "Hinh chu nhat duoc ve:" << endl;
				DrawRectangle(length, width);
				break;
				case 7:
				int N;
				cout << "Nhap so N: ";
				cin >> N;
				PrintPerfectNumbers(N);
				break;
				case 8:
				int amount;
				cout << "Nhap so tien can tinh: ";
				cin >> amount;
				CalculateMoney(amount);
				break;
				case 9:
				int numToReverse;
				cout << "Nhap so nguyen duong can dao nguoc cac chu so: ";
				cin >> numToReverse;
				numToReverse = ReverseDigits(numToReverse);
				cout << "So sau khi dao nguoc cac chu so: " << numToReverse << endl;
				break;
				case 0:
				cout << "Ket thuc chuong trinh.\n";
				break;
				default:
				cout << "Lua chon khong hop le. Vui long nhap lai!\n";
				break;
				}
				} while (choice != 0);
		return 0;
}
