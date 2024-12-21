/* -------------------
 Struktur_if_else.c
 --------------------*/
#include <stdio.h>

int main()
{
    int pilihan;
    char nim[20];
    char nama[50];

    printf("Masukkan NIM: ");
    scanf("%s", nim);
    printf("Masukkan Nama Lengkap: ");
    scanf(" %[^\n]", nama);

    printf("\nNIM = %s\n", nim);
    printf("Nama = %s\n\n", nama);
    printf(" ==== Selamat Datang di Program Nama Hari ==== \n \n");
    printf(" 1. Senin \n");
    printf(" 2. Selasa \n");
    printf(" 3. Rabu \n");
    printf(" 4. Kamis \n");
    printf(" 5. Jumat \n");
    printf(" 6. Sabtu \n");
    printf(" 7. Minggu \n \n");
    printf(" Silahkan Pilih hari (1-7) ? ");
    scanf("%d", &pilihan);
    printf("\n");
    printf(" ============================================= \n \n");

    if (pilihan >= 1 && pilihan <= 7)
    {
        switch (pilihan)
        {
        case 1:
            printf(" Anda memilih Senin \n \n");
            break;
        case 2:
            printf(" Anda memilih Selasa \n \n");
            break;
        case 3:
            printf(" Anda memilih Rabu \n \n");
            break;
        case 4:
            printf(" Anda memilih Kamis \n \n");
            break;
        case 5:
            printf(" Anda memilih Jumat \n \n");
            break;
        case 6:
            printf(" Anda memilih Sabtu \n \n");
            break;
        case 7:
            printf(" Anda memilih Minggu \n \n");
            break;
        }
    }
    else
    {
        printf("Angka yang Anda masukan SALAH\n");
    }

    return 0;
}
