#include <stdio.h>

#define HONOR_TETAP 300000

// Fungsi untuk mencetak jumlah uang dengan format Rupiah (dengan pemisah ribuan)
void printRupiah(int amount)
{
    if (amount < 1000)
    {
        printf("%d", amount);
    }
    else
    {
        printRupiah(amount / 1000);
        printf(".%03d", amount % 1000); // Memastikan format tiga digit
    }
}

// Fungsi untuk menghitung total honor berdasarkan golongan
float hitungHonor(int golongan)
{
    float tunjangan;

    // tunjangan sesuai dengan golongan
    switch (golongan)
    {
    case 1:
        tunjangan = 0.05 * HONOR_TETAP;
        break;
    case 2:
        tunjangan = 0.10 * HONOR_TETAP;
        break;
    case 3:
        tunjangan = 0.15 * HONOR_TETAP;
        break;
    default:
        printf("Golongan tidak valid.\n");
        return -1;
    }

    return HONOR_TETAP + tunjangan;
}

int main()
{
    int golongan;

    // input NIM dan Nama
    printf("NIM: 241110020 \n");
    printf("Nama: Muhamad Rafi Hariman Saputra \n");

    // input golongan
    printf("Masukkan golongan (1, 2, atau 3): ");
    scanf("%d", &golongan);

    // Validasi input golongan
    if (golongan < 1 || golongan > 3)
    {
        printf("Golongan tidak boleh bilangan negatif atau di luar rentang (1-3).\n");
        return 1;
    }

    // Menghitung total honor
    float totalHonor = hitungHonor(golongan);

    if (totalHonor != -1)
    {
        // Menampilkan hasil
        printf("Total Honor yang diterima: Rp ");
        printRupiah((int)totalHonor);
        printf("\n");
    }

    return 0;
}
