#include <iostream>

using namespace std;

int main(){
	int celcius;
	float f;
	
	cout <<"Celcius ke Fahrenheit \n";
	
	cout <<"Masukan Celcius : ";
	cin >> celcius;
	
	f = celcius * 1.8 + 32;
	
	cout << "Hasil Celcius ke Fahrenheit : " << f << " F" << endl;
	
	
	
	return 0;
}
