/*
Nama Program  : bilangan prima
Deskripsi     : cek bilangan prima
Nama Pembuat  : Yohanes Panjaitan
NIM           : 24060122140108
Tanggal       : 12 maret 2023
*/

#include <stdio.h>

int main(void)
{
    //kamus lokal
    int N; 
    int i;  
    int count = 0;

    //algoritma
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        printf("%d adalah bilangan prima.\n", N);
    }
    else
    {
        printf("%d bukan bilangan prima.\n", N);
    }

    return 0;
}
