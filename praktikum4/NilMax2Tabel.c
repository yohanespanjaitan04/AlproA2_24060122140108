/*
Nama Program  : NilMax2Tabel
Deskripsi     : mencari nilai max ke-2
Nama Pembuat  : Yohanes Panjaitan
NIM           : 24060122140108
Tanggal       : 20 maret 2023
*/

#include <stdio.h>

int main(void) 
{
    // Kamus Lokal
    int T[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(T)/sizeof(T[0]);
    int max1 = T[0], max2 = T[0];

    // Algoritma
    for (int i = 1; i < n; i++) {
        if (T[i] > max1) {
            max1 = T[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (T[i] > max2 && T[i] != max1) {
            max2 = T[i];
        }
    }

    printf("Nilai maksimum ke-2 adalah %d\n", max2);

    return 0;
}
