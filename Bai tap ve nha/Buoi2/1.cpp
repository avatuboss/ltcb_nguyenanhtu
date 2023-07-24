#include <iostream>
using namespace std;

int calculateScore(int number) {
    int score = 0;
    while (number != 0) {
        int digit = number % 10;
        score += digit;
        number /= 10;
    }
    return score;
}

int main() {
    int num;
    cout << "Nhap so xe gom 4 chu so: ";
    cin >> num;

    int score = calculateScore(num);
    cout << "So xe cua ban " << score << " nut" << endl;

    return 0;
}

