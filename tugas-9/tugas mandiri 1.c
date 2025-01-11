#include <stdio.h>

int main() {
    int a[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int i, n;
    int b = 0;

    printf("Elemen array: ");
    for (i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        printf("%d ", a[i]);
    }
    printf("Masukan nilai array: ");
    scanf("%i", &n);

    i = 0;
    while (i < sizeof(a) / sizeof(a[0])) {
        if (a[i] == n) {
            b++;
        }
        i++;
    }
    printf("\n");
    if (b > 0) {
        printf("Jumlah array: %d\n", b);
        printf("ADA\n");
    } else {
        printf("TIDAK ADA\n");
    }
    return 0;
}

