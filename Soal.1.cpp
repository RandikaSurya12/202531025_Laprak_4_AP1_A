#include <iostream>
using namespace std;

int main() {
    int pilihan;

    do {
        cout << "=== FIBONACCI GENERATOR ===" << endl;
        cout << "1) n suku" << endl;
        cout << "2) sampai <= m" << endl;
        cout << "3) exit" << endl;
        cout << "Pilih: ";
        cin >> pilihan;

        if (pilihan == 1) {
            int n;
            cout << "Masukkan n: ";
            cin >> n;

            if (n <= 0) {
                cout << "Input tidak valid!" << endl;
            } else {
                int a = 0, b = 1, c;
                cout << "Hasil (" << n << " suku):" << endl;

                for (int i = 1; i <= n; i++) {
                    if (i == 1) {
                        cout << a << " ";
                    } else if (i == 2) {
                        cout << b << " ";
                    } else {
                        c = a + b;
                        cout << c << " ";
                        a = b;
                        b = c;
                    }
                }
                cout << endl;
            }

        } else if (pilihan == 2) {
            int m;
            cout << "Masukkan m: ";
            cin >> m;

            if (m < 0) {
                cout << "Input tidak valid!" << endl;
            } else {
                int a = 0, b = 1, c;
                cout << "Hasil (<= " << m << "):" << endl;

                cout << a << " ";
                if (b <= m) cout << b << " ";

                while (true) {
                    c = a + b;
                    if (c > m) break;
                    cout << c << " ";
                    a = b;
                    b = c;
                }
                cout << endl;
            }

        } else if (pilihan == 3) {
            cout << "Program selesai." << endl;
        } else {
            cout << "Pilihan tidak valid!" << endl;
        }

        cout << endl;

    } while (pilihan != 3);

    return 0;
}
