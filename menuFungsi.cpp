#include <iostream>
#include <limits>

using namespace std;

// Fungsi untuk mencetak menu (void)
void cetakMenu(){
	cout << "===========================" << endl;
	cout << "        KALKULATOR" << endl;
	cout << "===========================" << endl;
	cout << "1. Tambah" << endl;
	cout << "2. Kurang" << endl;
	cout << "3. Kali" << endl;
	cout << "4. Bagi" << endl;
	cout << "5. Keluar" << endl;
	cout << "---------------------------" << endl;
	cout << "Pilihan Anda (1-5): ";
}

// Fungsi Tambah
float tambah(float a, float b){
	return a + b;
}

// Fungsi Kurang
float kurang(float a, float b){
	return a - b;
}

// Fungsi Kali
float kali(float a, float b){
	return a * b;
}

// Fungsi Bagi
float bagi(float a, float b){
	return a / b;
}

int main(){

	int pilihan;
	float angka1, angka2, hasil;
	char ulangi;

	do {
		cetakMenu();
		cin >> pilihan;

		if (pilihan >= 1 && pilihan <= 4) {
			cout << "\nMasukkan Angka Pertama : ";
			cin >> angka1;
			cout << "Masukkan Angka Kedua : ";
			cin >> angka2;
			cout << "---------------------------" << endl;
		}

		switch (pilihan) {
			case 1:
				hasil = tambah(angka1, angka2);
				cout << "Hasil Tambah : " << hasil << endl;
				break;
			case 2:
				hasil = kurang(angka1, angka2);
				cout << "Hasil Kurang : " << hasil << endl;
				break;
			case 3:
				hasil = kali(angka1, angka2);
				cout << "Hasil Kali : " << hasil << endl;
				break;
			case 4:
				if (angka2 != 0) {
					hasil = bagi(angka1, angka2);
					cout << "Hasil Bagi : " << hasil << endl;
				} else {
					cout << "Error: Tidak bisa dibagi dengan nol." << endl;
				}
				break;
			case 5:
				cout << "\nTerima kasih! Program selesai." << endl;
				ulangi = 'n';
				break;
			default:
				cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
				ulangi = 'y';
				continue;
		}

		if (pilihan != 5) {
			cout << "\nUlangi lagi? (y/n): ";
			cin >> ulangi;
		}

	} while (ulangi == 'y' || ulangi == 'Y');

	return 0;
}
