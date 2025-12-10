#include <iostream>
using namespace std;

int main(){
	cout <<"=====================================================================\n";
	cout <<"Praktikum Algoritma | Soal 5 - Switch Case \nNaufal Maulana Hafizh - Teknik Informatika (A2)\n";
	cout <<"=====================================================================\n";
	
	int pilihan;
	cout <<"Masukan Pilihan (1-7) : ";
	cin >> pilihan;
	
	switch (pilihan) {
		case 1 :
			cout <<"senin";
			break;
		case 2 :
			cout <<"selasa";
			break;
		case 3 :
			cout <<"rabu";
			break;
		case 4 :
			cout <<"kamis";
			break;
		case 5 :
			cout <<"jumat";
			break;
		case 6 :
			cout <<"sabtu";
			break;
		case 7 :
			cout <<"minggu";
			break;
		default :
			cout <<"Invalid: Pilihan harus antara 1 sampai 7.";
			break;
	}
	
	return 0;
}
