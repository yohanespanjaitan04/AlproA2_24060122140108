/*
Nama Program  : integer sembarang
Deskripsi     : Menghitung bilangan integer sembarang
Nama Pembuat  : Yohanes Panjaitan
NIM           : 24060122140108
Tanggal       : 6 maret 2023
*/

#include <stdio.h>

int main(void)
{
    // kamus
    int i;

    // algoritma
    printf("Masukkan sebuah bilangan: ");

    if (scanf("%d", &i) == 1) {
        if (i > 0) {
            printf("Bilangan positif");
        } else if (i < 0) {
            printf("Bilangan negatif");
        } else {
            printf("Nol");
        }
    } else {
        printf("Bukan termasuk sebuah bilangan");
    }

    return 0

}