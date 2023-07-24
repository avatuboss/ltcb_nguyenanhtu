#include <iostream>
using namespace std;

char chuyen_chu_hoa(char chu_thuong) {
    if ('a' <= chu_thuong && chu_thuong <= 'z') {
        char chu_hoa = chu_thuong - ('a' - 'A');
        return chu_hoa;
    } else {
        return chu_thuong;
    }
}

int main() {
    char chu_thuong;
    cout << "Nhap mot ky tu chu thuong: ";
    cin >> chu_thuong;

    char chu_hoa = chuyen_chu_hoa(chu_thuong);
    cout << "Ky tu chu hoa tuong ung: " << chu_hoa << endl;

    return 0;
}

