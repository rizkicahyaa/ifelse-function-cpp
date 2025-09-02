#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "Masukkan nilai kamu: ";
    cin >> nilai;
    
    if (nilai >= 90) {
        cout << "Nilai kamu A" << endl;
    } else if (nilai >= 81) {
        cout << "Nilai kamu B" << endl;
    } else if (nilai >= 70) {
        cout << "Nilai kamu C" << endl;
    } else {
        cout << "Nilai kamu D" << endl;
    }

    return 0;
}