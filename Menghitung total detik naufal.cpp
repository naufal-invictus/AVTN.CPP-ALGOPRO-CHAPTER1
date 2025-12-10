#include <iostream>
using namespace std;

int main(){
	int d,j,m;
	
	cout << "Menghitung Total Detik \n";
	
	cout << "Masukan Jam (j) : ";
	cin >> j;
	
	cout << "Masukan Menit (m) : ";
	cin >> m;
	
	cout << "Masukan Detik (d) : ";
	cin >> d;
	
	int total_jam_detik = j * 3600; 
	int total_menit_detik = m * 60;
	
	int total = total_jam_detik + total_menit_detik + d;
	
	cout << "Total Detik : " << total << " Detik" << endl;
	
	return 0;
	
}
