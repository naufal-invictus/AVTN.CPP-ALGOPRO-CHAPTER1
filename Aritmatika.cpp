#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Masukan Angka untuk Variabel A : ";
    cin >> a;
    cout << "Masukan Angka untuk Variabel B : ";
    cin >> b;
    cout << "\n";

    int hasil_tambah = a + b;
    int hasil_kurang = a - b;
    int hasil_bagi = a / b;
    int hasil_kali = a * b;

    cout << "Nilai Variabel A : " << a << endl;
    cout << "Nilai Variabel B : " << b << endl << endl;

    cout << "Hasil Tambah A + B = " << hasil_tambah << endl;
    cout << "Hasil Kurang A - B = " << hasil_kurang << endl;
    cout << "Hasil Bagi A / B = " << hasil_bagi << endl;
    cout << "Hasil Kali A * B = " << hasil_kali << endl;

    return 0;
}
