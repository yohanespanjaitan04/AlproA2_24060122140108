/*
Nama Program  : JumFrekNilTabel
Deskripsi     : menampilkan jumlah nilai-nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali.
Nama Pembuat  : Yohanes Panjaitan
NIM           : 24060122140108
Tanggal       : 20 maret 2023
*/

#include <stdio.h>

int main(void) 
{
    // kamus lokal
    int T[] = {1,1,2,2,3};
    int n = sizeof(T) / sizeof(T[0]);
    int total = 0;

    // algoritma
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (T[j] == T[i]) {
                count++;
            }
        }

        if (count > 1) {
            total += T[i];
        }
    }

    printf("Jumlah elemen tabel T yang frekuensinya lebih dari satu kali adalah: %d\n", total);
    return 0;
}
