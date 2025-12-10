#include <iostream>
using namespace std;

int main () {	
	int bulan;
	
	cout << "Masukan Nomor Bulan 1-12 : ";
	cin >> bulan;
	switch (bulan) {
		case 1:
		case 2:
		case 3:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			cout <<"Musim Hujan";
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			cout <<"Musim Kemarau";
			break;
		default:
			cout << "Masukan harus antara 1 - 12.";
			}
			
	cout << endl;
	
	return 0;
}
