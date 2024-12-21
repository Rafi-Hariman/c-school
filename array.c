#include <stdio.h>

int main() {
    int data[15];
    int a, b;
    int max, min;

    // Menampilkan NIM dan Nama
    printf("NIM = 241110020\n");
    printf("Nama = Muhamad Rafi H.S\n");

    printf("Masukkan banyaknya bilangan (Maksimum 15): ");
    scanf("%d", &a);

    // Memastikan jumlah bilangan tidak lebih dari 15
    if (a > 15) {
        printf("Jumlah bilangan tidak boleh lebih dari 15.\n");
        return 1;
    } else if (a <= 0) {
        printf("Jumlah bilangan harus lebih dari 0.\n");
        return 1;
    }

    // Input bilangan
    for (b = 0; b < a; b++) {
        printf("Input bilangan ke - %d: ", b + 1);
        scanf("%d", &data[b]);
    }

    // Inisialisasi max dan min
    max = data[0];
    min = data[0];

    // Mencari nilai maksimum dan minimum
    for (b = 1; b < a; b++) {
        if (data[b] > max) {
            max = data[b];
        }
        if (data[b] < min) {
            min = data[b];
        }
    }

    // Menampilkan hasil
    printf("\nNilai Max: %d\n", max);
    printf("Nilai Min: %d\n", min);

    return 0;
}