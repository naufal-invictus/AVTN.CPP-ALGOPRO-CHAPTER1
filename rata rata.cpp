#include <iostream>
using namespace std;

int main(){
	cout << "Menghitung Rata rata dari 5 data/nomor \n";
	float a,b,c,d,e;
	float total;
	float rata;
	
	cout << "Data 1 : ";
	cin >> a;
	
	cout << "Data 2 : ";
	cin >> b;
	
	cout << "Data 3 : ";
	cin >> c;
	
	cout << "Data 4 : ";
	cin >> d;
	
	cout << "Data 5 : ";
	cin >> e;
	
	total = a + b + c + d + e;
	rata = total / 5; 
	
	cout << "Rata rata nilai dari data yang anda input adalah : " << rata << endl;
	return 0;
}
