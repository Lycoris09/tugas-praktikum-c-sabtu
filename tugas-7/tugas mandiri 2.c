#include <stdio.h>

int main() {
    int A[11];
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    int i, j = 0; 

    for (i = 0; i < 11; i++) {
        A[i] = 0;
    }

    printf("Data dalam dokumen:\n");
    for (i = 0; i < 11; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    for (i = 0; i < 11; i++) {
        if (data[i] % 2 == 0) { 
            A[j] = data[i];
            j++; 
        }
    }

    printf("\nIsi array A setelah penyimpanan nilai genap:\n");
    for (i = 0; i < 11; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
