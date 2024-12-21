#include <stdio.h>

#define MAX_PEOPLE 6

struct Person
{
    char nim[20];
    char nama[50];
};

// Fungsi untuk mencetak jumlah uang dalam format Rupiah
void printRupiah(int amount)
{
    if (amount < 1000)
    {
        printf("Rp. %d", amount);
    }
    else
    {
        printRupiah(amount / 1000);
        printf(".%03d", amount % 1000);
    }
}

int main(void)
{
    int kodePasien;
    float biayaBerobat, kompensasi, totalBiaya;
    float persentaseKompensasi;

    struct Person group[MAX_PEOPLE] = {
        {"221120144", "PRIKENANG PRASTY SUYUDIY"},
        {"241110020", "MUHAMAD RAFI HARIMAN SAPUTRA"},
        {"241110039", "MUHAMMAD LATHIFUL HUDA"},
        {"241110064", "DENYS PUTRA WIYADAS"},
        {"241110087", "IQBAL AKBAR"},
        {"241120074", "SURYO ANGGITO"},
    };

    printf("\nDaftar NIM - Nama:\n");
    for (int i = 0; i < MAX_PEOPLE; i++)
    {
        printf("%s - %s\n", group[i].nim, group[i].nama);
    }

    printf("\nMasukkan Kode Pasien (1-4): ");
    scanf("%d", &kodePasien);

    if (kodePasien < 1 || kodePasien > 4)
    {
        printf("Kode pasien tidak valid.\n");
        return 1;
    }

    printf("Masukkan Biaya Berobat: Rp. ");
    scanf("%f", &biayaBerobat);
    if (biayaBerobat <= 0)
    {
        printf("Biaya berobat tidak valid.\n");
        return 1;
    }

    switch (kodePasien)
    {
    case 1:
        persentaseKompensasi = 0.25; // 25% untuk Pasien Baru
        break;
    case 2:
        persentaseKompensasi = 0.50; // 50% untuk Pasien Baru (BPJS)
        break;
    case 3:
        persentaseKompensasi = 0.75; // 75% untuk Pasien Lama
        break;
    case 4:
        persentaseKompensasi = 1.0; // 100% untuk Pasien Lama (BPJS)
        break;
    default:
        printf("Kode pasien tidak valid.\n");
        return 1;
    }

    // Hitung kompensasi dan total biaya
    kompensasi = 200000 * persentaseKompensasi;
    totalBiaya = biayaBerobat - kompensasi;

    // Tampilkan hasil perhitungan dengan format Rupiah
    printf("\nKompensasi yang diberikan: ");
    printRupiah((int)kompensasi);
    printf("\nTotal Biaya setelah kompensasi: ");
    printRupiah((int)totalBiaya);
    printf("\n");

    return 0;
}
