#include <iostream>
using namespace std;

int main(){
	cout << "==================================== \n";
	cout << "----- [ TUGAS LOOP 1 ]----- \n";
	cout << "==================================== \n";
	
	
	cout << "\n=================[ LOOP 1-100 ]================= \n";
	int i;
	for (i = 0; i <= 100; i++){
		cout << i << " ";
	}

	
	cout << "\n\n=================[ LOOP Bilangan Genap ]================= \n";
	int a, awal, akhir;
	
	cout << "Angka Awal : ";
	cin >>awal;
	cout << "Angka Akhir : ";
	cin >>akhir;
	for (a = awal; a <= akhir; a++){
		if (a % 2 == 0){
		cout <<a << " ";
		}
	}

	cout << "\n\n=================[ Cetak Anak Ayam ]================= \n";
	int jumlah;
	cout << "Masukan Jumlah Anak Ayam : ";
	cin >>jumlah;
	cout << "Mulai Bernyanyi! ";
	cout << "\n========================== \n";
	for (a = jumlah ; a > 0 ; a--){
		cout << "Tek kotek kotek Anak Ayam turun : " << a << "\n";
		
			if (a>0){
				int ayam = a - 1;
				cout <<"Mati 1 tinggal : " << ayam << "\n";
			}
	}

	return 0;
}
