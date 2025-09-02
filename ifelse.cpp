#include <iostream>
using namespace std;

int main() {
    int umur = 18;

    if (umur >= 18) {
        /* 
        Jika umur lebih dari atau sama dengan 18, maka output nya adalah "Anda sudah dewasa"
        karena kondisinya True
        */
        cout << "Anda sudah dewasa" << endl; 
    } else {
        /* 
        Sebaliknya jika umur kurang dari 18, maka output nya adalah "Anda belum dewasa"
        karena kondisinya False
        */
        cout << "Anda belum dewasa" << endl;
    }

    return 0;
}