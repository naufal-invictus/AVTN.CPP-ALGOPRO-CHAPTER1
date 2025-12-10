#include <iostream>
using namespace std;

void menu(){
	cout << "\nMenu\n";
	cout << "1. Penambajan \n";
	cout << "2. Perkalian \n";
	cout << "3. Pembagian \n";
	cout << "4. Pengurangan\n";
	cout << "5. Exit\n";
}

int penambahan (int a, int b){
	return a + b;
}
int perkalian (int a, int b){
	return a * b;
}
int pembagian (int a, int b){
	return a / b;
}
int pengurangan (int a, int b){
	return a - b;
}
int main(){
	int pilihan = 0;
	int penampung;
	int angka1, angka2;
	char ulang ='y';
	string hasil = "Hasilnya adalah : ";

	do {
		menu();
		cout << "Pilihan : ";
		cin >> pilihan;

		if (pilihan >= 1 && pilihan <= 4) {
			cout << "Masukkan Angka Pertama : ";
			cin >> angka1;
			cout << "Masukkan Angka Kedua : ";
			cin >> angka2;
		}

		if (pilihan == 1){
			penampung = penambahan(angka1, angka2);
			cout << hasil << penampung << endl;
			cout << "Ulang ? y/n ";
			cin >> ulang;
		}

		else if (pilihan == 2) {
			penampung = perkalian(angka1, angka2);
			cout  << hasil << penampung << endl;
			cout << "Ulang ? y/n ";
			cin >> ulang;
		}

		else if (pilihan == 3) {
			if (angka2 != 0) {
				penampung = pembagian(angka1, angka2);
				cout  << hasil << penampung << endl;
			} else {
				cout << "Error: Tidak bisa dibagi dengan nol." << endl;
			}
			cout << "Ulang ? y/n ";
			cin >> ulang;
		}

		else if (pilihan == 4) {
			penampung = pengurangan(angka1, angka2);
			cout  << hasil <<  penampung << endl;
			cout << "Ulang ? y/n ";
			cin >> ulang;

		}

		else if (pilihan == 5 ){
			cout << "Exit \n";
			ulang = 'n';
		}

		else {
			cout << "\nPilihan tidak valid \n\n";
			cout << "Ulang ? y/n ";
			cin >> ulang;
		}

	} while (ulang != 'n' && ulang != 'N');

	return 0;
}
