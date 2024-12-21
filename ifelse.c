/* -------------------
 Strukturifelse.c
 --------------------*/
#include <stdio.h>

int main()
{
    int nilai;
    int nim;
    char nama[50];

    printf("NIM = ");
    scanf("%d", &nim);
    printf("Nama = ");
    scanf(" %[^\n]", nama);
    printf("Masukkan nilai ujian : ");
    scanf("%d", &nilai);

    printf("NIM: %d\n", nim);
    printf("Nama: %s\n", nama);

    if (nilai >= 80 && nilai <= 100)
        printf("Nilai Mutu: A\n");
    else if (nilai >= 68 && nilai <= 79)
        printf("Nilai Mutu: B\n");
    else if (nilai >= 58 && nilai <= 67)
        printf("Nilai Mutu: C\n");
    else if (nilai >= 45 && nilai <= 57)
        printf("Nilai Mutu: D\n");
    else if (nilai >= 0 && nilai <= 45)
        printf("Nilai Mutu: E\n");
    else
        printf("Nilai tidak valid\n");

    return 0;
}