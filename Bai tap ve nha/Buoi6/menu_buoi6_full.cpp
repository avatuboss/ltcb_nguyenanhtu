#include <iostream>
#include <cstring>
using namespace std;

void printArray(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void task1() {
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;
    
    char arr[n];
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Mang vua nhap la: ";
    printArray(arr, n);
}

void task2() {
    char str[100];
    cout << "Nhap chuoi: ";
    cin.ignore();
    cin.getline(str, 100);

    cout << "Cac ky tu in hoa trong chuoi la: ";
    for (int i = 0; i < strlen(str); i++) {
        if (isupper(str[i])) {
            cout << str[i] << " ";
        }
    }
    cout << endl;
}

void task3() {
    char str[100];
    cout << "Nhap chuoi: ";
    cin.ignore();
    cin.getline(str, 100);

    cout << "Chuoi sau khi dao nguoc ky tu: ";
    for (int i = strlen(str) - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
}

void task4() {
    char str[100];
    cout << "Nhap chuoi: ";
    cin.ignore();
    cin.getline(str, 100);

    cout << "Chuoi sau khi doi chu xen ke 1 chu hoa va 1 chu thuong: ";
    for (int i = 0; i < strlen(str); i++) {
        if (i % 2 == 0) {
            cout << toupper(str[i]);
        } else {
            cout << tolower(str[i]);
        }
    }
    cout << endl;
}

void task5() {
    char str[100];
    cout << "Nhap chuoi: ";
    cin.ignore();
    cin.getline(str, 100);

    char target;
    cout << "Nhap ky tu muon dem: ";
    cin >> target;

    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == target) {
            count++;
        }
    }

    cout << "So lan xuat hien cua ky tu '" << target << "' trong chuoi la: " << count << endl;
}

void task6() {
    char str[100];
    cout << "Nhap chuoi: ";
    cin.ignore();
    cin.getline(str, 100);

    int charCount[256] = {0};
    for (int i = 0; i < strlen(str); i++) {
        charCount[str[i]]++;
    }

    char mostFrequentChar;
    int maxCount = 0;
    for (int i = 0; i < 256; i++) {
        if (charCount[i] > maxCount) {
            maxCount = charCount[i];
            mostFrequentChar = static_cast<char>(i);
        }
    }

    cout << "Ky tu xuat hien nhieu nhat trong chuoi la: '" << mostFrequentChar << "' xuat hien " << maxCount << " lan." << endl;
}

bool isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

void task7() {
    char str[100];
    cout << "Nhap chuoi: ";
    cin.ignore();
    cin.getline(str, 100);

    if (isPalindrome(str)) {
        cout << "Chuoi la doi xung." << endl;
    } else {
        cout << "Chuoi khong doi xung." << endl;
    }
}

void deleteWord(char str[], char word[]) {
    char* pos = strstr(str, word);
    if (pos != NULL) {
        strcpy(pos, pos + strlen(word));
    }
}

void task8() {
    char str[100];
    cout << "Nhap chuoi: ";
    cin.ignore();
    cin.getline(str, 100);

    char word[100];
    cout << "Nhap tu muon xoa: ";
    cin.getline(word, 100);

    deleteWord(str, word);

    cout << "Chuoi sau khi xoa tu '" << word << "' la: " << str << endl;
}

int main() {
    int choice;
    do {
        cout << "\nMENU BAI TAP: Nguyen Anh Tu" << endl;
        cout << "1. Nhap/Xuat mang" << endl;
        cout << "2. Xuat cac ky tu in hoa trong chuoi" << endl;
        cout << "3. Dao nguoc cac ky tu trong chuoi" << endl;
        cout << "4. Doi chu xen ke 1 chu hoa va 1 chu thuong" << endl;
        cout << "5. Dem mot ky tu xuat hien bao nhieu lan trong chuoi" << endl;
        cout << "6. Tim kiem ky tu xuat hien nhieu nhat trong chuoi" << endl;
        cout << "7. Kiem tra chuoi co doi xung hay khong" << endl;
        cout << "8. Nhap vao mot tu va xoa tu do trong chuoi" << endl;
        cout << "0. Thoat" << endl;
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;

        switch (choice) {
            case 1:
                task1();
                break;
            case 2:
                task2();
                break;
            case 3:
                task3();
                break;
            case 4:
                task4();
                break;
            case 5:
                task5();
                break;
            case 6:
                task6();
                break;
            case 7:
                task7();
                break;
            case 8:
                task8();
                break;
            case 0:
                cout << "Ket thuc chuong trinh." << endl;
                break;
            default:
                cout << "Lua chon khong hop le. Vui long chon lai." << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}

