#include <iostream>
using namespace std;

int main (){
	
	int nilai;
	
	cout << "Menghitung Grade \n";

	cout << "Nilai (0-100) :  ";
	cin >> nilai;
	
	if (nilai >= 80 && nilai <= 100) {
		cout <<"A";
	} 
	else if (nilai >= 70) {
		cout <<"B";
	}
	else if (nilai >= 60) {
		cout <<"C";
	}
	else if (nilai >= 50) {
		cout <<"D";
	}
	else if (nilai >= 0) {
		cout <<"E";
	}
	else {
		cout << "Input Invalid: Masukkan nilai antara 0-100.";
	}
	
	cout << endl;
	
	return 0;
}
