/*
Nama Program  : jumlah faktor
Deskripsi     : mengitung jumlah faktor
Nama Pembuat  : Yohanes Panjaitan
NIM           : 24060122140108
Tanggal       : 12 maret 2023
*/

#include <stdio.h>

int main(void)
{
    // kamus lokal
    int N; 
    int i;

    // algaritma
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    printf("Faktor bilangan %d adalah: ", N);
    for (i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
