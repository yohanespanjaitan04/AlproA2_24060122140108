/*
Nama Program  : Nama Bulan
Deskripsi     : menampilkan nama Bulan
Nama Pembuat  : Yohanes Panjaitan
NIM           : 24060122140108
Tanggal       : 6 maret 2023
*/

#include <stdio.h>

int main(void) 
{
    //kamus
    int i;

    //algoritma
    printf("Masukkan nomor hari: ");
    scanf("%d", &i);

    if (i >= 1) {
        switch (i) {
            case 1:
                printf("Januari");
                break;
            case 2:
                printf("Februari");
                break;
            case 3:
                printf("Maret");
                break;
            case 4:
                printf("April");
                break;
            case 5:
                printf("Mei");
                break;
            case 6:
                printf("Juni");
                break;
            case 7:
                printf("Juli");
                break;
            case 8:
                printf("Agustus");
                break;
            case 9:
                printf("September");
                break;
            case 10:
                printf("Oktober");
                break;
            case 11:
                printf("November");
                break;
            case 12:
                printf("Desember");
                break;
            default:
                printf("Masukan nomor bulan tidak tepat");
                break;
        }
    } else {
        printf("Masukan nomor hari tidak tepat");
    }

    return 0;
}