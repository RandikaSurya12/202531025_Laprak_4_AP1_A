#include <iostream>
using namespace std;

int main() {
    int kodeRahasia = 7;
    int tebakan;

    cout << "=== Pintu Dungeon ===" << endl;

    for (int i = 1; i <= 3; i++) {
        cout << "Percobaan " << i << "/3 - Tebak: ";
        cin >> tebakan;

        if (tebakan == kodeRahasia) {
            cout << "Benar!" << endl;
            return 0; // program langsung selesai jika benar
        } else {
            cout << "Salah!" << endl;
        }
    }

    // Jika sudah 3 kali dan semuanya salah
    cout << "Kalah! Angka = " << kodeRahasia << endl;

    return 0;
}
