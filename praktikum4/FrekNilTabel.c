/*
Nama Program  : FrekNilTabel
Deskripsi     : menampilkan nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali
Nama Pembuat  : Yohanes Panjaitan
NIM           : 24060122140108
Tanggal       : 20 maret 2023
*/

#include <stdio.h>

int main(void) 
{
    // kamus lokal
    int T[] = {1,2,2,3,4,5};
    int n = sizeof(T)/sizeof(T[0]);
    int kemunculan[n];

    // algoritma
    for (int i = 0; i < n; i++) {
        kemunculan[i] = 0;
        for (int j = i+1; j < n; j++) {
            if (T[i] == T[j]) {
                kemunculan[i]++;
            }
        }
    }

    printf("Elemen dengan frekuensi kemunculan lebih dari satu kali adalah: ");
    for (int i = 0; i < n; i++) {
        if (kemunculan[i] > 0) {
            printf("%d ", T[i]);
        }
    }
    printf("\n");

    return 0;
}
