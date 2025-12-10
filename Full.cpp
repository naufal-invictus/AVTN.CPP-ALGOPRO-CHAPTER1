#include <iostream>
using namespace std;

int main(){
	float nilai[5];
	float total = 0.0;

	cout << "=========== Tugas Praktikum 29/10/2025 =========== \n";
	cout << "---------- [LENGKAP] Hitung Rata-rata 5 Nilai ---------- \n\n";

	for (int i = 0; i < 5; i++) {
		cout <<"Input Nilai ke " << i + 1 << ": ";
		cin >> nilai[i];
		total += nilai[i];
	}

	float rata = total / 5;

	cout << "\nTotal Nilai : " << total << endl;
	cout << "Rata-Rata Nilai : " << rata << endl;

	return 0;
}
