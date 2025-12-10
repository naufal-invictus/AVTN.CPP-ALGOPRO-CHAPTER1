#include <iostream>
#include <string>
using namespace std;

int main(){
	int jumlah_mahasiswa;
	string nama;
	int npm;
	float nilai_tugas, nilai_uts, nilai_uas;
	float nilai_akhir;

	cout << "======= SOAL KASUS 1 : Pengelolaan Nilai Mahasiswa ======= \n \n";
	
	cout << "Masukan Jumlah Mahasiswa : ";
	cin >> jumlah_mahasiswa;
	
	for (int i = 0; i < jumlah_mahasiswa; i++) {
			cout << "\n--- Mahasiswa ke-" << i + 1 << " ---\n";
			
			cout << "Masukan NPM : ";
			cin >> npm;
			cin.ignore();
			
			cout << "Masukan Nama : ";
			getline(cin, nama);
			
			cout << "Nilai Tugas : ";
			cin >> nilai_tugas;
			cout << "Nilai UTS : ";
			cin >> nilai_uts;
			cout << "Nilai UAS: ";
			cin >> nilai_uas;
			
			nilai_akhir = 0.3 * nilai_tugas + 0.3 * nilai_uts + 0.4 * nilai_uas;
			
			cout << "\n[ Data Mahasiswa ] \n";
			cout << "Nama: " << nama << " | NPM: " << npm << "\n";
			cout << "Nilai Akhir : " << nilai_akhir << "\n";
		}
	
	return 0;
}
