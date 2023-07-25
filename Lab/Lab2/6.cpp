#include <iostream>
using namespace std;

int main() {
    const int startHour1 = 7;   
    const int endHour1 = 17;    
    const int startHour2 = 17;  
    const int endHour2 = 24;  

    const int rate1 = 400;     
    const int rate2 = 350;     
    const int rate3 = 300;     

    const double discount1 = 0.1;  
    const double discount2 = 0.12; 
    const double discount3 = 0.15; 

    int startHour, startMinute, endHour, endMinute;
    cout << "Nhap gio bat dau (0-23): ";
    cin >> startHour;
    cout << "Nhap phut bat dau (0-59): ";
    cin >> startMinute;
    cout << "Nhap gio ket thuc (0-23): ";
    cin >> endHour;
    cout << "Nhap phut ket thuc (0-59): ";
    cin >> endMinute;

    int startTimeInMinutes = startHour * 60 + startMinute;
    int endTimeInMinutes = endHour * 60 + endMinute;


    int totalTimeInMinutes = endTimeInMinutes - startTimeInMinutes;
    if (totalTimeInMinutes < 0) {
        totalTimeInMinutes += 24 * 60; 
    }

  
    double totalCost = 0;
    if (startTimeInMinutes >= startHour1 * 60 && endTimeInMinutes <= endHour1 * 60) {
        totalCost = totalTimeInMinutes * rate1;
        if (totalTimeInMinutes > 6 * 60) {
            totalCost -= totalCost * discount1;
        }
    } else if (startTimeInMinutes >= startHour2 * 60 && endTimeInMinutes <= endHour2 * 60) {
        totalCost = totalTimeInMinutes * rate2;
        if (totalTimeInMinutes > 4 * 60) {
            totalCost -= totalCost * discount2;
        }
    } else {
        totalCost = totalTimeInMinutes * rate3;
        if (totalTimeInMinutes > 7 * 60) {
            totalCost -= totalCost * discount3;
        }
    }

    cout << "Cuoc truy cap internet: " << totalCost << " dong" << endl;

    return 0;
}

