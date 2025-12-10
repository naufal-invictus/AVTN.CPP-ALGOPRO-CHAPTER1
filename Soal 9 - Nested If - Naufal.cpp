#include <iostream>
using namespace std;

int main(){
	cout <<"=====================================================================\n";
	cout <<"Praktikum Algoritma | Soal 9 - Nested If \nNaufal Maulana Hafizh - Teknik Informatika (A2)\n";
	cout <<"=====================================================================\n";
	
	int nilai,kehadiran;
	
	cout << "Masukkan Nilai Akhir : ";
	cin >> nilai;
	
	cout << "Masukkan Persentase Kehadiran : ";
	cin >> kehadiran;
	
	if (nilai >= 60){
		cout << "Status Nilai: Lulus Nilai | ";
		if (kehadiran >= 75) {
			cout <<"Status Kehadiran: Lulus Kehadiran";
		} 
		else {
			cout << "Status Kehadiran: Tidak Lulus Kehadiran (Perlu perbaikan)";
		}
	} 
	else {
		cout << "Status Nilai: Tidak Lulus Nilai";
	}
	
	cout << endl;
	return 0;
}
