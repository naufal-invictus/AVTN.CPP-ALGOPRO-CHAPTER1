#include <iostream>
using namespace std;

int main(){
	cout <<"=====================================================================\n";
	cout <<"Praktikum Algoritma | Soal 7 - Program Kombinasi Logika \nNaufal Maulana Hafizh - Teknik Informatika (A2) \n";
	cout <<"=====================================================================\n";

	int nilai_tugas,nilai_uts,nilai_uas;
	cout <<"Masukan Nilai Tugas : ";
	cin >> nilai_tugas;
	
	cout <<"Masukan Nilai UTS : ";
	cin >> nilai_uts;
	
	cout <<"Masukan Nilai UAS : ";	
	cin >> nilai_uas;
	
	float nilai_akhir = 0.3 * nilai_tugas + 0.3 * nilai_uts + 0.4 * nilai_uas;
	
	cout << "Nilai Akhir : " << nilai_akhir << endl;
	
	if (nilai_akhir >= 85){
		cout <<"Grade : A";
	}
	else if (nilai_akhir >= 70) {
		cout <<"Grade : B";
	}
	else if (nilai_akhir >= 60){
		cout <<"Grade : C";
	}
	else if (nilai_akhir >= 50){
		cout <<"Grade : D"; 
	}
	else { 
		cout <<"Grade : E";
	}
	
	cout << endl;
	
	return 0;
}
