/*
Nama Program  : jumlah deret
Deskripsi     : mengitung hasil jumlah deret
Nama Pembuat  : Yohanes Panjaitan
NIM           : 24060122140108
Tanggal       : 12 maret 2023
*/

#include <stdio.h>

int main(void) 
{
    //kamus lokal
    int n; 
    int i; 
    int jumlah = 0; 

    // algaritma
    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        jumlah += i;
    }

    printf("Jumlah deret bilangan 1 hingga %d adalah %d", n, jumlah);

    return 0;
}