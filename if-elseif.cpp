#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "Masukkan nilai kamu: ";
    cin >> nilai;

    if (nilai >= 90) {
        /*
        Jika nilai lebih dari atau sama dengan 90 maka outputnya "Nilai kamu A"
        */
        cout << "Nilai kamu A" << endl;
    } else if (nilai >= 81) {
        /*
        Jika nilai lebih dari atau sama dengan 81 maka outputnya "Nilai kamu B"
        */
        cout << "Nilai kamu B" << endl;
    } else if (nilai >= 70) {
        /*
        Jika nilai lebih dari atau sama dengan 70 maka outputnya "Nilai kamu C"
        */
        cout << "Nilai kamu C" << endl;
    } else {
        /*
        Dan sebaliknya jika nilai nya tidak lebih dari ketiga kondisi tersebut maka outputnya
        "Nilai kamu D"
        */
        cout << "Nilai kamu D" << endl;
    }

    return 0;
}