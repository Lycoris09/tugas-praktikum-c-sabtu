#include <stdio.h>

int main() {
    int kecepatan = 2; 
    int waktu = 100;   
    int jarak = 0;
    int i;             

    for (i = 1; i <= waktu; i++) {
        jarak += kecepatan; 
    }

    // Menampilkan hasil akhir
    printf("Jarak yang ditempuh setelah %d detik adalah %d meter.\n", waktu, jarak);

    return 0;
}
