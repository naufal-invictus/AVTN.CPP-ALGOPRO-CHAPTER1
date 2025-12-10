#include <iostream>
using namespace std;

int main() {
	int r;
	const float pi = 3.14159f; 
	float v;
	
	cout <<"Masukan Jari-jari (r) : ";
	cin >> r;
	
	v = 4.0/3.0 * pi * r * r * r ;
	
	cout <<"Hasil volume bola : " << v << endl;
	
	return 0;
	
}
