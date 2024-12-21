include <stdio.h>

int main()
{
    int i = 1, N, jumlah = 0, rata2, bil;
    printf("NIM = 241110020\n");
    printf("Nama = Muhamad Rafi Hariman Saputra\n");
    printf("Masukkan jumlah bilangan : ");
    scanf("%d", &N);

    while (i <= N)
    {
        printf("Masukkan bilangan ke %d ? ", i);
        scanf("%d", &bil);
        jumlah += bil;
        i++;
    }

    rata2 = jumlah / N;
    printf("Nilai rata-rata adalah : %d\n", rata2);
    return 0;
}