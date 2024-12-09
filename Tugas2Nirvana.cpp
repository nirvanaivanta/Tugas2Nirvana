#include <iostream>
#define PI 3.14
using namespace std;

// Luas & Keliling Persegi
void persegi(double sisi) {
    cout << "Luas Persegi: " << (sisi * sisi) << endl;
    cout << "Keliling Persegi: " << (4 * sisi) << endl;
}

// Luas & Keliling Persegi Panjang
void persegiPanjang(double panjang, double lebar) {
    cout << "Luas Persegi Panjang: " << (panjang * lebar) << endl;
    cout << "Keliling Persegi Panjang: " << (2 * (panjang + lebar)) << endl;
}

// Luas & Keliling segitiga siku-siku
void segitigaSikuSiku(double alas, double tinggi) {
    cout << "Luas Segitiga Siku-Siku: " << (0.5 * alas * tinggi) << endl;
    cout << "Keliling Segitiga Siku-Siku: "
        << (alas + tinggi + (alas * alas + tinggi * tinggi) / (alas + tinggi)) << endl;
}

//Luas & Keliling lingkaran
void lingkaran(double jariJari) {
    cout << "Luas Lingkaran: " << (PI * jariJari * jariJari) << endl;
    cout << "Keliling Lingkaran: " << (2 * PI * jariJari) << endl;
}

int main() {
    int pilihan;
    do {
        cout << "\nPilih bangun datar untuk dihitung (Angka):" << endl;
        cout << "1. Persegi" << endl;
        cout << "2. Persegi Panjang" << endl;
        cout << "3. Segitiga Siku-Siku" << endl;
        cout << "4. Lingkaran" << endl;
        cout << "5. Keluar" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
        case 1: {
            double sisi;
            cout << "Masukkan sisi : ";
            cin >> sisi;
            persegi(sisi);
            break;
        }
        case 2: {
            double panjang, lebar;
            cout << "Masukkan panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar: ";
            cin >> lebar;
            persegiPanjang(panjang, lebar);
            break;
        }
        case 3: {
            double alas, tinggi;
            cout << "Masukkan alas: ";
            cin >> alas;
            cout << "Masukkan tinggi: ";
            cin >> tinggi;
            segitigaSikuSiku(alas, tinggi);
            break;
        }
        case 4: {
            double jariJari;
            cout << "Masukkan jari-jari lingkaran: ";
            cin >> jariJari;
            lingkaran(jariJari);
            break;
        }
        case 5:
            cout << "Keluar dari program." << endl;
            break;
        default:
            cout << "Pilihan tidak valid. Coba lagi." << endl;
        }
    } while (pilihan != 5);

    return 0;
}
