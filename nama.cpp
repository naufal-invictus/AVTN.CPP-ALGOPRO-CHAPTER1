#include <iostream>
#include <string>
using namespace std;
int main(){
	string nama;
	int nim, tinggi;

	cout<<"masukan nim:";
	cin>> nim;

	cin.ignore();

	cout<<"masukan nama:";
	getline(cin, nama);

	cout<<"masukan tinggi:";
	cin>> tinggi;

	cout<< " nama saya adalah: " << nama << " nim saya adalah: " << nim << " tinggi saya: " << tinggi << endl;

	return 0;
}
