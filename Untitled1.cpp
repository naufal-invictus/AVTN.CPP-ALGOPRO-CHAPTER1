#include <iostream>
using namespace std;
int main(){
	int nilai;
	cout << " menghitung grade \n";
	cout << " Nilai : ";
	cin >> nilai;

	if (nilai >= 80){
		cout << "Grade : A";
	}
	else if (nilai >=70){
		cout << "Grade : B";
	}
	else if (nilai >=60){
		cout << "Grade : C";
	}
	else if (nilai >=50){
		cout << "Grade : D";
	}
	else if (nilai >= 0){
		cout << "Grade : E";
	}
	else {
		cout << "Input Invalid: Nilai harus positif (0-100)";
	}

	cout << endl;
	return 0;
}
