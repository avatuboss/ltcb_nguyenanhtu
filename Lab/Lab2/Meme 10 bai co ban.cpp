#include <iostream>
using namespace std;

void displayMenu() {
    cout << "===== MENU BAI TAP =====" << endl;
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
    cout << "11. Thoat" << endl;
    cout << "==========================" << endl;
    cout << "Nhap lua chon cua ban (1-11): ";
}

void exercise1() {
    int num;

    do {
        cout << "Nhap mot so trong pham vi tu 10 den 99: ";
        cin >> num;

        if (num >= 10 && num <= 99) {
            int tensDigit = num / 10;
            int unitsDigit = num % 10;
            if (num == (tensDigit * unitsDigit * 2)) {
                cout << "So " << num << " thoa man dieu kien: " << tensDigit << " * " << unitsDigit << " = 2 * (" << tensDigit << " + " << unitsDigit << ")" << endl;
            } else {
                cout << "So " << num << " khong thoa man dieu kien." << endl;
            }
        } else {
            cout << "So nhap vao khong hop le. Vui long nhap lai!" << endl;
        }
    } while (num < 10 || num > 99);
    cout << "Day la noi dung bai tap 1" << endl;
}

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

void exercise2() {
    int n;
    cout << "Nhap mot so nguyen duong n: ";
    cin >> n;

    cout << "Cac so nguyen to nho hon " << n << " la: ";
    for (int i = 2; i < n; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "Day la noi dung bai tap 2" << endl;
}

void printASCII(int start, int end) {
    cout << "Bang ma ASCII tu " << start << " den " << end << ":" << endl;
    for (int i = start; i <= end; ++i) {
        cout << static_cast<char>(i) << "\t" << i << "\t";
        if ((i - start + 1) % 2 == 0) {
            cout << endl;
        }
    }
}

void exercise3() {
    const int charactersPerPage = 32;
    const int totalPages = 128 / charactersPerPage;

    for (int page = 0; page < totalPages; ++page) {
        int start = page * charactersPerPage;
        int end = start + charactersPerPage - 1;

        printASCII(start, end);

        cout << "\nTrang " << page + 1 << "/" << totalPages << "\n\n";

        cout << "Nhan Enter de xem trang tiep theo...";
        cin.ignore();
        cout << "\n\n";
    }

    cout << "Day la noi dung bai tap 3" << endl;
}

int reverseDigits(int n) {
    int reversedNumber = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        n /= 10;
    }
    return reversedNumber;
}

void exercise4() {
    int n;
    cout << "Nhap mot so nguyen duong n: ";
    cin >> n;

    int reversed = reverseDigits(n);
    cout << "Chu so dao nguoc cua " << n << " la: " << reversed << endl;

    cout << "Day la noi dung bai tap 4" << endl;
}

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

void exercise5() {
    int n;
    cout << "Nhap mot so nguyen duong n: ";
    cin >> n;

    int count = countDigits(n);
    int sum = sumDigits(n);

    cout << "So chu so cua " << n << " la: " << count << endl;
    cout << "Tong cac chu so cua " << n << " la: " << sum << endl;

    cout << "Day la noi dung bai tap 5" << endl;
}

void exercise6() {
    const double firstKmPrice = 15000.0;
    const double from2To5KmPrice = 13500.0;
    const double from6AndAboveKmPrice = 11000.0;
    const double discountPercentage = 0.10;
    const int discountThreshold = 120;

    int numKm;
    cout << "Nhap so km da di: ";
    cin >> numKm;

    double totalCost = 0.0;

    if (numKm >= 1 && numKm <= 5) {
        totalCost = numKm * firstKmPrice;
    } else if (numKm >= 6 && numKm <= discountThreshold) {
        totalCost = firstKmPrice + (numKm - 1) * from2To5KmPrice;
    } else if (numKm > discountThreshold) {
        double remainingKm = numKm - discountThreshold;
        totalCost = firstKmPrice + 4 * from2To5KmPrice + remainingKm * from6AndAboveKmPrice;

        // Giam gia  
        double discountAmount = totalCost * discountPercentage;
        totalCost -= discountAmount;
    }

    cout << "Tong so tien phai tra: " << totalCost << " VND" << endl;

    cout << "Day la noi dung bai tap 6" << endl;
}

void exercise7() {
    const double rateA = 250000; 
    const double rateB = 200000; 
    const double rateC = 150000; 
    const int discountDays = 12; 

    const double discountA = 0.10; 
    const double discountB = 0.08; 

    int numDays;
    char roomType;

    cout << "Nhap so ngay thue: ";
    cin >> numDays;
    cout << "Nhap loai phong (A/B/C): ";
    cin >> roomType;

    double totalCost;
    if (numDays <= discountDays) {
        switch (roomType) {
            case 'A':
                totalCost = numDays * rateA;
                break;
            case 'B':
                totalCost = numDays * rateB;
                break;
            case 'C':
                totalCost = numDays * rateC;
                break;
            default:
                cout << "Loai phong khong hop le!";
                return;
        }
    } else {
        switch (roomType) {
            case 'A':
                totalCost = numDays * rateA;
                totalCost -= totalCost * discountA;
                break;
            case 'B':
                totalCost = numDays * rateB;
                totalCost -= totalCost * discountB;
                break;
            case 'C':
                totalCost = numDays * rateC;
                break;
            default:
                cout << "Loai phong khong hop le!";
                return;
        }
    }

    cout << "Tien thue phong la: " << totalCost << " dong" << endl;

    cout << "Day la noi dung bai tap 7" << endl;
}

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return -1; 
    }
}

bool isValidDate(int day, int month, int year) {
    if (year < 1 || month < 1 || month > 12 || day < 1) {
        return false;
    }
    int daysInMonth = getDaysInMonth(month, year);
    return day <= daysInMonth;
}

void nextDay(int& day, int& month, int& year) {
    int daysInMonth = getDaysInMonth(month, year);
    day++;
    if (day > daysInMonth) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }
}

void previousDay(int& day, int& month, int& year) {
    day--;
    if (day < 1) {
        month--;
        if (month < 1) {
            month = 12;
            year--;
        }
        day = getDaysInMonth(month, year);
    }
}

void exercise8() {
    int day, month, year;
    cout << "Nhap ngay: ";
    cin >> day;
    cout << "Nhap thang: ";
    cin >> month;
    cout << "Nhap nam: ";
    cin >> year;

    if (isValidDate(day, month, year)) {
        int daysInMonth = getDaysInMonth(month, year);
        cout << "Thang " << month << " nam " << year << " co " << daysInMonth << " ngay." << endl;

        int nextDayVal = day, nextMonthVal = month, nextYearVal = year;
        nextDay(nextDayVal, nextMonthVal, nextYearVal);
        cout << "Ngay hom sau la: " << nextDayVal << "/" << nextMonthVal << "/" << nextYearVal << endl;

        int prevDayVal = day, prevMonthVal = month, prevYearVal = year;
        previousDay(prevDayVal, prevMonthVal, prevYearVal);
            cout << "Ngay hom truoc la: " << prevDayVal << "/" << prevMonthVal << "/" << prevYearVal << endl;
    } else {
        cout << "Ngay hoac thang nhap khong hop le." << endl;
    }

    cout << "Day la noi dung bai tap 8" << endl;
}

void exercise9() {
    string name;
    double mathScore, physicsScore, chemistryScore;

    cout << "Nhap ho va ten hoc sinh: ";
    cin.ignore();
    getline(cin, name);

    cout << "Nhap diem Toan: ";
    cin >> mathScore;
    cout << "Nhap diem Ly: ";
    cin >> physicsScore;
    cout << "Nhap diem Hoa: ";
    cin >> chemistryScore;


    double averageScore = (mathScore + physicsScore + chemistryScore) / 3.0;

    cout << "Diem trung binh 3 mon cua hoc sinh " << name << " la: " << averageScore << endl;

    if (averageScore >= 9.0) {
        cout << "Xep loai: Xuat sac" << endl;
    } else if (averageScore >= 8.0) {
        cout << "Xep loai: Gioi" << endl;
    } else if (averageScore >= 6.5) {
        cout << "Xep loai: Kha" << endl;
    } else if (averageScore >= 5.0) {
        cout << "Xep loai: Trung binh" << endl;
    } else if (averageScore >= 3.0) {
        cout << "Xep loai: Yeu" << endl;
    } else {
        cout << "Xep loai: Kem" << endl;
    }

    cout << "Day la noi dung bai tap 9" << endl;
}

int main() {
    int choice;
    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                exercise1();
                break;
            case 2:
                exercise2();
                break;
            case 3:
                exercise3();
                break;
            case 4:
                exercise4();
                break;
            case 5:
                exercise5();
                break;
            case 6:
                exercise6();
                break;
            case 7:
                exercise7();
                break;
            case 8:
                exercise8();
                break;
            case 9:
                exercise9();
                break;
            case 10:
                cout << "Day la noi dung bai tap 10" << endl;
                break;
            case 11:
                cout << "Cam on ban da su dung chuong trinh!" << endl;
                break;
            default:
                cout << "Lua chon khong hop le. Vui long nhap lai!" << endl;
                break;
        }
    } while (choice != 11);

    return 0;
}
