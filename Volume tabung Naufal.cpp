#include <iostream>
using namespace std;

int main() {
	int r,t;
	const float pi = 3.14159f; 
	float v; 
	
	cout <<"Masukan Jari-jari (r) : ";
	cin >> r;
	cout <<"Masukan Tinggi (t) : ";
	cin >> t;
	
	v = pi * r * r * t;
	cout <<"Hasil Volume tabung : " << v << endl;
	
	return 0;
	
}
