#include <iostream>
using namespace std;

int main() {
	int r;
	const float pi = 3.14159f; 
	float keliling;
	
	cout <<"Masukan Jari-jari (r) : ";
	cin >> r;
	
	keliling = 2 * pi * r;
	cout <<"Hasil Keliling Lingkaran : " << keliling << endl;
	
	return 0;
	
}
