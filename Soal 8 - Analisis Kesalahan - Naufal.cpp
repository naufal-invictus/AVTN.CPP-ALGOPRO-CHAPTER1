#include <iostream>
using namespace std;

int main(){
	cout <<"=====================================================================\n";
	cout <<"Praktikum Algoritma | Soal 8 - Lulus/Tidak Lulus \nNaufal Maulana Hafizh - Teknik Informatika (A2)\n";
	cout <<"=====================================================================\n";

	int nilai;
	
	cout << "Masukkan Nilai: ";
	cin >> nilai;
	
	if (nilai >= 60) {
		cout <<"Lulus" << endl;
	} else {
		cout <<"Tidak lulus" << endl;
	}
	
	return 0;
}
