#include <stdio.h>

#define MAX_PEOPLE 6

struct Person
{
    char nim[20];
    char nama[50];
};

int main()
{
    int choice;
    float panjang, lebar, sisi, luas;

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

    printf("\nMenu:\n");
    printf("1. Hitung Luas Persegi Panjang\n");
    printf("2. Hitung Luas Persegi\n");
    printf("Pilih (1/2): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Masukkan panjang: ");
        scanf("%f", &panjang);
        printf("Masukkan lebar: ");
        scanf("%f", &lebar);

        if (panjang < 0 || lebar < 0)
        {
            printf("Tidak boleh bilangan negatif\n");
        }
        else if (panjang < lebar)
        {
            printf("Ukuran panjang harus lebih besar dari lebar\n");
        }
        else
        {
            luas = panjang * lebar;
            printf("Luas Persegi Panjang: %d\n", (int)luas);
        }
        break;

    case 2:
        printf("Masukkan ukuran sisi: ");
        scanf("%f", &sisi);

        if (sisi < 0)
        {
            printf("Tidak boleh bilangan negatif\n");
        }
        else
        {
            luas = sisi * sisi;
            printf("Luas Persegi: %d\n", (int)luas);
        }
        break;

    default:
        printf("Pilihan tidak valid\n");
        break;
    }

    return 0;
}
