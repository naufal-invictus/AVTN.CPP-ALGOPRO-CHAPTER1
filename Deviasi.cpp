#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int N = 5;
    double data[N] = {5, 7, 3, 7, 10};

    double total = 0.0;
    double rata_rata;
    double selisih[N];
    double jumlah_kuadrat_selisih = 0.0;
    double variansi;
    double standar_deviasi;
    char menu;

    cout << "=========== Tugas Praktikum 29/10/2025 =========== \n";
    cout << "---------- Hitung Standar Deviasi ---------- \n\n";

    do {
        total = 0.0;
        jumlah_kuadrat_selisih = 0.0;

        for (int i = 0; i < N; i++) {
            total += data[i];
        }

        rata_rata = total / N;

        cout << "Data: {";
        for (int i = 0; i < N; i++) {
            cout << data[i] << (i < N - 1 ? ", " : "");
        }
        cout << "}\n";
        cout << "Total Jumlah Data (Sigma X) : " << total << "\n";
        cout << "**Rata-Rata (Mean)** : " << rata_rata << "\n";
        cout << "------------------------------------------\n";

        cout << "Selisih (x - mean) | Kuadrat Selisih (x - mean)^2\n";
        for (int i = 0; i < N; i++) {
            selisih[i] = data[i] - rata_rata;

            double kuadrat_selisih = selisih[i] * selisih[i];
            jumlah_kuadrat_selisih += kuadrat_selisih;

            cout << i + 1 << ". " << selisih[i] << " | " << kuadrat_selisih << "\n";
        }

        cout << "------------------------------------------\n";
        cout << "**Total Jumlah Kuadrat Selisih (Sigma (x - mean)^2)** : "
             << jumlah_kuadrat_selisih << "\n";

        variansi = jumlah_kuadrat_selisih / (N - 1);
        cout << "**Variansi** (Sigma (x-mean)^2 / (N-1)) : " << variansi << "\n";

        standar_deviasi = sqrt(variansi);
        cout << "**Standar Deviasi** (Akar Kuadrat Variansi) : "
             << standar_deviasi << "\n";

        cout << "\n------------------------------------------\n";
        cout << "Ulangi perhitungan? (y/n): ";
        cin >> menu;
        cout << "==========================================\n";
    } while (menu == 'y' || menu == 'Y');

    return 0;
}
