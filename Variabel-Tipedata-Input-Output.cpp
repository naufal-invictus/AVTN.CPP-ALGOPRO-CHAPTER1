#include <iostream>
using namespace std;

int main(){
    // Deklarasi Variabel
    string nama;
    int umur;
    double berat_badan;
    char inisial;
    bool status_kewarganegaraan;

    // Mengisi Variabel
    cout << "Masukan Nama : ";
    cin >> nama;
    cout << "Masukan Umur : ";
    cin >> umur;
    cout << "Masukan Berat Badan : ";
    cin >> berat_badan;
    cout << "Masukan Inisial 1 Karakter : ";
    cin >> inisial;
    cout << "Apakah indonesia? 1/0 ";
    cin >> status_kewarganegaraan;

    // Output
    cout << "Nama Saya: " << nama <<endl;
    cout << "Umur Saya: " << umur <<endl;
    cout << "Berat Badan Saya: " << berat_badan << endl;
    cout << "Inisial Saya: " << inisial << endl;
    cout << "Orang Indonesia : " << status_kewarganegaraan << endl;

    return 0;

}
