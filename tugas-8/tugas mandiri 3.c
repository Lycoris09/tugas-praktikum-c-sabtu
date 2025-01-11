#include <stdio.h>

int main() {
    int A[11] = {0};
    int num,j,i = 0;

    printf("Masukkan angka-angka (akhiri dengan 999):\n");

    while (i < 11) {
        scanf("%d", &num);
        if (num == 999) {
            break;
        }
        if (num % 2 != 0) {
            A[i] = num;
            i++;
        }
    }

    printf("d. A: ");
    for(j = 0; j < 11; j++) {
        printf("%d ", A[j]);
    }
    printf("\n");

    return 0;
}
