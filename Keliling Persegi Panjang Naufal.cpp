#include <iostream>
using namespace std;

int main() {
	int p,l;
	int keliling;
	
	cout <<"Masukan Panjang (P) : ";
	cin >> p;
	
	cout <<"Masukan Lebar (L) : ";
	cin >> l;
	
	keliling = 2 * (p + l);
	cout <<"Hasil Keliling Persegi Panjang : " << keliling << endl;
	
	return 0;
	
}
