#include <conio.h>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void clearScreen() {
  system("cls");
}

void pause() {
  cout << "Tekan tombol apapun untuk melanjutkan...";
  getch();
  clearScreen();
}

float penjumlahan() {
  float angka1, angka2;

  cout << "Masukkan angka pertama: ";
  cin >> angka1;
  cout << "Masukkan angka kedua: ";
  cin >> angka2;

  return angka1 + angka2;
}

float hitungLuasSegitiga() {
  float alas, tinggi;

  cout << "Masukkan alas: ";
  cin >> alas;
  cout << "Masukkan tinggi: ";
  cin >> tinggi;

  return 0.5 * alas * tinggi;
}

float hitungKelilingSegitiga() {
  float sisi1, sisi2, sisi3;

  cout << "Masukkan sisi 1: ";
  cin >> sisi1;
  cout << "Masukkan sisi 2: ";
  cin >> sisi2;
  cout << "Masukkan sisi 3: ";
  cin >> sisi3;

  return sisi1 + sisi2 + sisi3;
}

int main() {
  int pilihan;
  float hasil;

  do {
    cout << "Selamat datang di calculator segitiga" << endl;
    cout << "====================================" << endl;
    cout << "Pilih menu yang diinginkan: " << endl;
    cout << "1. Hitung luas segitiga" << endl;
    cout << "2. Hitung keliling segitiga" << endl;
    cout << "3. Penjumlahan" << endl;
    cout << "4. Keluar" << endl;
    cout << "Masukkan pilihan: ";
    cin >> pilihan;

    switch (pilihan) {
      case 1:
        clearScreen();
        hasil = hitungLuasSegitiga();
        cout << "Luas segitiga adalah: " << hasil << endl;
        pause();
        break;
      case 2:
        clearScreen();
        hasil = hitungKelilingSegitiga();
        cout << "Keliling segitiga adalah: " << hasil << endl;
        pause();
        break;
      case 3:
        clearScreen();
        hasil = penjumlahan();
        cout << "Hasil penjumlahan adalah: " << hasil << endl;
        pause();
        break;
      case 4:
        cout << "Terima kasih telah menggunakan calculator segitiga" << endl;
        break;
      default:
        cout << "Pilihan tidak tersedia" << endl;
        break;
    }
  } while (pilihan != 4);

  return 0;
}
