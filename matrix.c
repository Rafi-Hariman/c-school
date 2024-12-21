#include <stdio.h>

int main() {
    // Deklarasi variabel
    int a[2][3], b[2][3], c[2][3];
    int i, j;

    printf("NIM           : 241110020\n");
    printf("Nama          : Muhamad Rafi H.S\n");

    // Menampilkan judul program
    printf("Input Matrix A :\n");

    // Input elemen matriks A
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("a [%d,%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Menampilkan judul program
    printf("\nInput Matrix B :\n");

    // Input elemen matriks B
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("b [%d,%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Menampilkan matriks A
    printf("\nMatrix A :\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("a [%d,%d] = %d  ", i, j, a[i][j]);
        }
        printf("\n");
    }

    // Menampilkan matriks B
    printf("\nMatrix B :\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("b [%d,%d] = %d  ", i, j, b[i][j]);
        }
        printf("\n");
    }

    // Penjumlahan matriks A dan B
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Menampilkan hasil penjumlahan matriks
    printf("\nHasil Penjumlahan Matrix :\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("c [%d,%d] = %d  ", i, j, c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
