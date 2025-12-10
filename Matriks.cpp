#include <iostream>
using namespace std;

int main(){
	int matrix1[2]={5,3};
	int matrix2[2]={9,7};
	int total[2];
	char menu;

	cout << "=========== Tugas Praktikum 29/10/2025 =========== \n";
	cout << "---------- Hitung Jumlah 2 Matrik (Vektor) ---------- \n\n";

	do {

		for (int i = 0; i < 2; i++){
			total[i] = matrix1[i] + matrix2[i];
		}

		cout << "Matriks 1: | " << matrix1[0] << " " << matrix1[1] << " |\n";
		cout << "Matriks 2: | " << matrix2[0] << " " << matrix2[1] << " |\n";

		cout << "Total (Matriks 1 + 2) : \n";
		cout << "| ";
		for (int i=0; i < 2; i++){
			cout << total[i] << " ";
		}
		cout << "| \n";

		cout << "\nUlangi y/n? ";
		cin >> menu;
	} while (menu == 'y' || menu == 'Y');

	return 0;
}
