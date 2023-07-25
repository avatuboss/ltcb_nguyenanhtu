#include <iostream>
using namespace std;

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
            return -1; // Tháng không h?p l?
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

int main() {
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

    return 0;
}

