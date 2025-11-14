#include <iostream>
using namespace std;

int main()
{
    int pilihan;
    cout << "Kalkulator Sederhana" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "Pilih operasi (1-4): ";
    cin >> pilihan;

    int a;
    int b;
    cout << "Masukkan dua angka: ";
    cin >> a >> b;

    float hasil;
    switch (pilihan)
    {
    case 1:
        hasil = a + b;
        cout << "Hasil: " << hasil << endl;
        break;
    case 2:
        hasil = a - b;
        cout << "Hasil: " << hasil << endl;
        break;
    case 3:
        hasil = a * b;
        cout << "Hasil: " << hasil << endl;
        break;
    case 4:
        if (b != 0)
        {
            hasil = a / b;
            cout << "Hasil: " << hasil << endl;
        }
        else
        {
            cout << "Error: Pembagian dengan nol!" << endl;
        }
        break;
    default:
        cout << "Pilihan tidak valid!" << endl;
        break;
    }

    return 0;
}