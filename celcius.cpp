#include <iostream>
using namespace std;

int main(){
	float celcius, fahrenheit;

	cout << " masukan suhu dalam celcius: ";
	cin >> celcius;

	fahrenheit = ( celcius * 9.0 / 5.0) + 32 ;

	cout << " suhu dalam fahrenheit: " << fahrenheit << " Â°F" << endl;
	return 0;

}
