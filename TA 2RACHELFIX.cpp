#include <iostream>
using namespace std;

void tukar(int *x, int *y) {
    int z = *x;
    *x = *y;
    *y = z;
}

int main() {
    int n; 
    int nilai[2005]; 

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    cout << "Masukkan nilai mahasiswa: ";
    for (int i = 0; i < n; i++) {
        cin >> nilai[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nilai[j] > nilai[j + 1]) {
                tukar(&nilai[j], &nilai[j + 1]);
            }
        }
    }

    cout << "Nilai mahasiswa setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << nilai[i] << " ";
    }
    cout << endl;

    return 0;
}