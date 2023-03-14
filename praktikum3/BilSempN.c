/*
Nama Program  : bilangan sempurna 2
Deskripsi     : cek bilangan sempurna
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
    int jumlah = 0;

    // algoritma
    printf("Masukan nilai n : ");
    scanf("%d", &N);

    for(i=1; N>0 && i<=N; i++){
        jumlah += i;

    }
    printf("Jumlah deret: %d", jumlah);

    return 0;
}