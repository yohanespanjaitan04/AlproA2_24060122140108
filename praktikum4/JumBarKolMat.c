/*
Nama Program  : JumBarKolMat
Deskripsi     : menjumlahkan semua elemen pada baris dan kolomnya
Nama Pembuat  : Yohanes Panjaitan
NIM           : 24060122140108
Tanggal       : 20 maret 2023
*/

#include <stdio.h>

int main(void) 
{
    // kamus lokal
    int T[3][3] = {{1,3,5}, {2,5,2}, {4,2,4}};
    int i;
    int j;
    int jumlah_baris;
    int jumlah_kolom;

    // algoritma
    for (i = 0; i < 3; i++) {
        jumlah_baris = 0;
        jumlah_kolom = 0;

        for (j = 0; j < 3; j++) {
            jumlah_baris += T[i][j];
            jumlah_kolom += T[j][i];
        }

        printf("Jumlah elemen pada baris %d adalah %d\n", i+1, jumlah_baris);
        printf("Jumlah elemen pada kolom %d adalah %d\n", i+1, jumlah_kolom);
    }

    return 0;
}
