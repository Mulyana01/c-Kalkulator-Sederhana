#include <iostream>

using namespace std;

int main()
{
    double angka1, angka2;
    char pilih;
    // Membuat Kalkulator Sederhana
    cout << " Masukkan Angka Pertama : ";
    cin >> angka1;
    cout << " Masukkan Angka Kedua : ";
    cin >> angka2;

    // Membuat Operasi (+,-,*,/)
    cout << " Pilih Operasi (+,-,*,/): ";
    cin >> pilih;
    if (char(pilih) == '+')
    {
        cout << " Hasil : " << angka1 + angka2 << endl;
    }
    else if (char(pilih) == '-')
    {
        cout << " Hasil : " << angka1 - angka2 << endl;
    }
    else if (char(pilih) == '*')
    {
        cout << " Hasil : " << angka1 * angka2 << endl;
    }
    else if (char(pilih) == '/')
    {
        if (angka2 != 0)
        {
            cout << " Hasil : " << angka1 / angka2 << endl;
        }
        else
        {
            cout << " Error! Tidak dapat membagi dengan angka 0" << endl;
        }
    }

    return 0;
}
