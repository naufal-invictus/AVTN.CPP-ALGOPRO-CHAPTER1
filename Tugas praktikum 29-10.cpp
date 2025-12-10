#include <iostream>
using namespace std;

int main(){
	int nilai[5]={0,0,0,0,0};
	double total = 0.0; 
	char menu;
	cout << "=========== Tugas Praktikum 29/10/2025 =========== \n";
	cout << "---------- Menginput Nilai dan Hitung Rata-rata ---------- \n\n";	
		
	do {
		total = 0.0; 

		for (int i = 0; i < 5; i++) {
			cout <<"Input Nilai ke " << i + 1 << ": ";
			cin >> nilai[i];
			}
			
		cout << "\nMenghitung total nilai...\n";
		
		for (int i = 0; i < 5; i++){
			cout << "Nilai " << i + 1 << " : " << nilai[i] << endl;
			total += nilai[i]; 
		}
		
		float rata = total / 5;
		cout << "TOTAL : " << total << " | " << "Rata-Rata : " << rata << endl;
		
		cout << "\nLanjut y/n? ";
		cin >> menu;
		} while (menu == 'y' || menu == 'Y');
		
	return 0;
}
