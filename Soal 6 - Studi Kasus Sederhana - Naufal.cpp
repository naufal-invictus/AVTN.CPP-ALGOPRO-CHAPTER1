#include <iostream>
using namespace std;

int main(){
	cout <<"=====================================================================\n";
	cout <<"Praktikum Algoritma | Soal 6 - Studi Kasus Sederhana \nNaufal Maulana Hafizh - Teknik Informatika (A2)\n";
	cout <<"=====================================================================\n";
	
	float total_belanja;
	
	cout << "Masukkan Total Belanja : ";
	cin >> total_belanja;
	
	if (total_belanja > 200000){
		float diskon = total_belanja * 0.10;
		float total_bayar = total_belanja - diskon; 
		
		cout << "Anda Mendapatkan Diskon 10% sebesar : " << diskon << endl;
		cout << "Total Bayar Setelah Potongan : " << total_bayar << endl;
	}
	else {
		cout << "Total Belanja : " << total_belanja << endl;
		cout << "Tidak Ada Diskon" << endl;
	}
	
	return 0;
}
