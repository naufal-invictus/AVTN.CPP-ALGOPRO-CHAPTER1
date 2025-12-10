#include <iostream>
using namespace std;

int main(){
	cout <<"=====================================================================\n";
	cout <<"Praktikum Algoritma | Soal 10 - Mini Project \nNaufal Maulana Hafizh - Teknik Informatika (A2)\n"; 
	cout <<"=====================================================================\n";
	
	int nilai_test_logika, nilai_test_bahasa;
	float rata_rata;
	
	cout <<"Masukan Nilai Test Logika : ";
	cin >> nilai_test_logika;
	
	cout <<"Masukan Nilai Test Bahasa : ";
	cin >> nilai_test_bahasa;
	
	rata_rata = (float)(nilai_test_logika + nilai_test_bahasa) / 2.0; 
	
	cout << "Rata-Rata Nilai: " << rata_rata << endl;
	
	if (rata_rata >= 70) {
		cout << "Status Kelulusan: Lulus";
		if (rata_rata >= 85) {
			cout <<" Dengan Sangat Baik";
		}
	}
	else if (rata_rata < 70){ 
		cout <<"Status Kelulusan: Tidak lulus, perlu ditingkatkan";
	}
	
	cout << endl;
	return 0;
}
