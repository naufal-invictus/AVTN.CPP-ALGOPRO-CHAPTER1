#include <iostream>
using namespace std;

int main(){
	int total_detik, jam, menit, detik_sisa;
	
	cout << "Menghitung Total jam, menit, detik \n";
	
	cout << "Masukan Total Detik : ";
	cin >> total_detik;
	
	jam = total_detik / 3600;
	
	detik_sisa = total_detik % 3600;
	
	menit = detik_sisa / 60;
	
	detik_sisa = detik_sisa % 60;
	
	cout << "Total Detik : " << total_detik << " adalah " 
	     << jam << " Jam, " 
	     << menit << " Menit, dan "
	     << detik_sisa << " Detik" << endl;
	     
	return 0;
	
}
