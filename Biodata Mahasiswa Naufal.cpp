#include <iostream>
#include <string> 
using namespace std;

int main() {
	string nama;
	int npm,umur;
	float tinggi;
	
	cout << "Biodata Mahasiswa \n";
	
	cout << "Masukan NPM : ";
	cin >> npm;
	cin.ignore();
	
	cout << "Masukan Nama : ";
	getline(cin, nama);
	
	cout << "Masukan Umur : ";
	cin >> umur;
	
	cout << "Masukan Tinggi : ";
	cin >> tinggi;
	
	cout << "Nama anda adalah " << nama << " Dengan NPM " << npm << " Berusia " << umur << " Tahun " << " dan tinggi " << tinggi << " cm" << endl ;
	
	return 0;
}
