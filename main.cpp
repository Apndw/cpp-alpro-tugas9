#include <conio.h>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/**
 * Deklarasi fungsi yang digunakan
 */
void pause();
void clearScreen();
float penjumlahan();
float hitungLuasSegitiga();
float hitungKelilingSegitiga();

/**
 * Fungsi utama yang akan dieksekusi
 */
int main() {
  int pilihan_081;
  float hasil_081;

  do {
    cout << "Selamat datang di calculator segitiga" << endl;
    cout << "====================================" << endl;
    cout << "Pilih menu yang diinginkan: " << endl;
    cout << "1. Hitung luas segitiga" << endl;
    cout << "2. Hitung keliling segitiga" << endl;
    cout << "3. Penjumlahan" << endl;
    cout << "4. Keluar" << endl;
    cout << "====================================" << endl;
    cout << "Masukkan pilihan: ";
    cin >> pilihan_081;

    clearScreen();

    switch (pilihan_081) {
      case 1:
        hasil_081 = hitungLuasSegitiga();
        cout << "Luas segitiga adalah: " << hasil_081 << endl;
        pause();
        break;
      case 2:
        hasil_081 = hitungKelilingSegitiga();
        cout << "Keliling segitiga adalah: " << hasil_081 << endl;
        pause();
        break;
      case 3:
        hasil_081 = penjumlahan();
        cout << "Hasil penjumlahan adalah: " << hasil_081 << endl;
        pause();
        break;
      case 4:
        cout << "Terima kasih telah menggunakan calculator segitiga" << endl;
        break;
      default:
        cout << "Pilihan tidak tersedia" << endl;
        break;
    }
  } while (pilihan_081 != 4);

  return 0;
}

void clearScreen() {
  system("cls");
}

void pause() {
  cout << "\nTekan tombol apapun untuk melanjutkan...";
  getch();
  clearScreen();
}

float penjumlahan() {
  float angka1_081, angka2_081;

  do {
    cout << "Masukkan angka pertama: ";
    cin >> angka1_081;
    cout << "Masukkan angka kedua: ";
    cin >> angka2_081;
  } while (angka1_081 < 0 || angka2_081 < 0);

  return angka1_081 + angka2_081;
}

float hitungLuasSegitiga() {
  float alas_081, tinggi_081;

  do {
    cout << "Masukkan alas: ";
    cin >> alas_081;
    cout << "Masukkan tinggi: ";
    cin >> tinggi_081;
  } while (alas_081 < 0 || tinggi_081 < 0);

  return 0.5 * alas_081 * tinggi_081;
}

float hitungKelilingSegitiga() {
  float sisi1_081, sisi2_081, sisi3_081;

  do {
    cout << "Masukkan sisi 1: ";
    cin >> sisi1_081;
    cout << "Masukkan sisi 2: ";
    cin >> sisi2_081;
    cout << "Masukkan sisi 3: ";
    cin >> sisi3_081;
  } while (sisi1_081 < 0 || sisi2_081 < 0 || sisi3_081 < 0);

  return sisi1_081 + sisi2_081 + sisi3_081;
}
