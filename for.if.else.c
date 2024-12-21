#include <stdio.h>

int main()
{
    printf("241110020\n");
    printf("Muhamad Rafi Hariman Saputra\n");

    int S, Q;
    float Nilai, Rata, Jumlah = 0;

    // Validasi jumlah tugas harus positif
    printf("Jumlah Tugas = ");
    scanf("%d", &S);
    if (S <= 0) {
        printf("Jumlah tugas harus lebih dari 0. Program dihentikan.\n");
        return 1;
    }

    printf("\n");

    for (Q = 1; Q <= S;)
    {
        printf("Nilai Tugas ke %d = ", Q);
        scanf("%f", &Nilai);

        if (Nilai < 0) {
            printf("Nilai tidak boleh negatif. Silakan masukkan nilai yang valid.\n");
            continue;
        }

        Jumlah = Jumlah + Nilai;
        Q++;
    }

    Rata = Jumlah / S;
    printf("\nJumlah Tugas = %d", S);
    printf("\nJumlah Nilai = %.2f", Jumlah);
    printf("\nRata - Rata Nilai = %.2f \n", Rata);

    char hurufMutu;
    if (Rata >= 85)
    {
        hurufMutu = 'A';
    }
    else if (Rata >= 65)
    {
        hurufMutu = 'B';
    }
    else if (Rata >= 55)
    {
        hurufMutu = 'C';
    }
    else if (Rata >= 35)
    {
        hurufMutu = 'D';
    }
    else
    {
        hurufMutu = 'E';
    }
    printf("Huruf Mutu = %c\n", hurufMutu);

    return 0;
}
