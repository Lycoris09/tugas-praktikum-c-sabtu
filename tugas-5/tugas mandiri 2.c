#include <stdio.h>

int main() {
    char jenis;
    int harga;
    float diskon, hargaSetelahDiskon;

    printf("Masukkan kode jenis barang (A/B/C): ");
    scanf(" %c", &jenis);
    printf("Masukkan harga barang: ");
    scanf("%d", &harga);

    if (jenis == 'A' || jenis == 'a') {
        diskon = 0.1;
    } else if (jenis == 'B' || jenis == 'b') {
        diskon = 0.15;
    } else if (jenis == 'C' || jenis == 'c') {
        diskon = 0.2;
    } else {
        printf("Jenis barang tidak valid.\n");
        return 1;
    }

    hargaSetelahDiskon = harga - (harga * diskon);
    printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah diskon = %.0f\n", 
            jenis, diskon * 100, hargaSetelahDiskon);
    return 0;
}

