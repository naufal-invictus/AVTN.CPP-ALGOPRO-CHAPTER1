#include <iostream>
using namespace std;

int main(){
	cout <<"=====================================================================\n";
	cout <<"Praktikum Algoritma | Soal 4 - Logika Percabangan \nNaufal Maulana Hafizh - Teknik Informatika (A2)\n";
	cout <<"=====================================================================\n";
	cout << "Masukan Angka : ";
	int angka;
	cin >> angka;
	if (angka < 0){
		cout << "Angka Negatif" << endl;
	}
	else if (angka > 0){
		cout << "Angka Positif" << endl;
	} 
	else {
		cout <<"Angka Nol" << endl;
	}
	
	return 0;
}
