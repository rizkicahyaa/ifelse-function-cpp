#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "Masukkan nilai kamu: ";
    cin >> nilai;

    if (nilai > 81) {
        cout << "Nilai kamu A!" << endl;
    } else {
        cout << "Nilai kamu B!" << endl;
    }

    return 0;
}