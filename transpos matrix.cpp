#include <iostream>
using namespace std;

int main(){
	
	cout << "=========== Tugas Praktikum 29/10/2025 =========== \n";
	cout << "---------- Transpos Matriks ---------- \n\n";	
	
	char menu;
	int baris,kolom;
	
	cout << "Baris : ";
	cin >> baris;
	cout << "Kolom : ";
	cin >> kolom;
	int matriks[baris][kolom];

	do {
		
		cout << "\n--- Input Matriks Asli ---\n";
		for (int i=0; i < baris; i++){
			for (int j=0; j < kolom; j++){
				cout << "Masukan Matriks Baris [" << i << "]" << " Kolom [" << j << "] \n > ";
				cin >> matriks[i][j];
			}
		}
		
		cout << "\n Matriks Asli \n";
		for (int i=0; i < baris; i++){
			for (int j=0; j < kolom; j++){
				cout << matriks[i][j] << " ";
			}
			cout << endl;
		}
		
		cout << "\n Matriks Transpos \n";
		
		int transpos[kolom][baris];
		
		for (int i=0; i < baris; i++){
			for (int j=0; j < kolom; j++){
				transpos[j][i] = matriks[i][j];
			}
		}
		
		for (int i=0; i < kolom; i++){
			for (int j=0; j < baris; j++){
				cout << transpos[i][j] << " | ";
			}
			cout << endl;
		}
		
		cout << "\n Ulangi y/n? ";
		cin >> menu;
	} while (menu == 'y' || menu == 'Y');
	
	return 0;
}
