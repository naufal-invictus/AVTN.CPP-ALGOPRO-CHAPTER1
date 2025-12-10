#include <iostream>
using namespace std;

int main(){
	float angka[5], total = 0, ratarata;
	
	cout << " masukan 5 bilangan:\n";
	
	for(int i = 0; i < 5; i ++) {
		cout << "bilangan ke-" << i + 1 << ": "; 
		cin >> angka[i];
		total += angka[i]; 
	}
	
	ratarata = total / 5;
	cout << " rata rata dari 5 bilangan tersebut adalah: " << ratarata << endl;
	return 0;	
}
