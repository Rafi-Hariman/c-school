#include <stdio.h>

int main() {
    int nim, bil1, bil2;
    char nama[50];

    // Input NIM dan Nama
    printf("NIM = ");
    scanf("%d", &nim);
    printf("Nama = ");
    scanf(" %[^\n]", nama);

    // Input bilangan 1 dan 2
    printf("Masukkan Bilangan 1: ");
    scanf("%d", &bil1);
    printf("Masukkan Bilangan 2: ");
    scanf("%d", &bil2);

    // Aritmatika operasi
    printf("\nHasil Penjumlahan: %d + %d = %d\n", bil1, bil2, bil1 + bil2);
    printf("Hasil Pengurangan: %d - %d = %d\n", bil1, bil2, bil1 - bil2);
    printf("Hasil Perkalian: %d * %d = %d\n", bil1, bil2, bil1 * bil2);
    printf("Hasil Pembagian: %d / %d = %.2f\n", bil1, bil2, (float)bil1 / bil2);
    printf("Hasil Modulus: %d %% %d = %d\n", bil1, bil2, bil1 % bil2);

    return 0;
}
