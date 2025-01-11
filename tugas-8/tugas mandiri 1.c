#include <stdio.h>

int main() {
    int A[11] = {0};
    int num,j, i = 1; // Mulai dari indeks 1 untuk ganjil

    printf("Masukkan angka-angka (akhiri dengan 999):\n");

    while (i < 11) {
        scanf("%d", &num);
        if (num == 999) {
            break;
        }
        if (num > 9) {
            A[i] = num;
            i += 2;
        }
    }

    printf("a. A: ");
    for(j = 0; j < 11; j++) {
        printf("%d ", A[j]);
    }
    printf("\n");

    return 0;
}
