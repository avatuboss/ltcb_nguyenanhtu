#include <iostream>
using namespace std;

void printASCII(int start, int end) {
    cout << "Bang ma ASCII tu " << start << " den " << end << ":" << endl;
    for (int i = start; i <= end; ++i) {
        cout << static_cast<char>(i) << "\t" << i << "\t";
        if ((i - start + 1) % 2 == 0) {
            cout << endl;
        }
    }
}

int main() {
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

    return 0;
}

