#include <iostream>
using namespace std;

int main (){
	
	float a,b,hasil;
	int menu;
	
	cout << "Kalkulator Simpel \n";
	cout <<"-----------------------------" << endl;
	
	cout << "Pilih salah satu : \n 1. Kali  \n 2. Bagi \n 3. Tambah \n 4. Kurang \n Pilihan Anda : ";
	cin >> menu;
	
	if (menu == 1) {
		cout << "Angka Pertama :  ";
		cin >> a;
		cout << "Angka Kedua :  ";
		cin >> b;
		hasil = a * b;
		cout <<"Hasil kali : " << hasil << endl;
	} 
	
	else if (menu == 2) {
		cout << "Angka Pertama :  ";
		cin >> a;
		cout << "Angka Kedua :  ";
		cin >> b;
		if (b != 0) {
			hasil = a / b;
			cout <<"Hasil bagi : " << hasil << endl;
		} else {
			cout << "Error: Tidak bisa dibagi dengan nol." << endl;
		}
	}
	
	else if (menu == 3) {
		cout << "Angka Pertama :  ";
		cin >> a;
		cout << "Angka Kedua :  ";
		cin >> b;
		hasil = a + b;
		cout <<"Hasil tambah : " << hasil << endl;
	}
	
	else if (menu == 4) {
		cout << "Angka Pertama :  ";
		cin >> a;
		cout << "Angka Kedua :  ";
		cin >> b;
		hasil = a - b;
		cout <<"Hasil kurang : " << hasil << endl;
	}
	
	else {
		cout << "Pilihan tidak cocok" << endl;
	}
	
	
	return 0;
}
