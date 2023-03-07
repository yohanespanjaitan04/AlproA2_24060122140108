/*
Nama Program  : Nama Hari
Deskripsi     : menampilkan nama hari
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
                printf("Senin");
                break;
            case 2:
                printf("Selasa");
                break;
            case 3:
                printf("Rabu");
                break;
            case 4:
                printf("Kamis");
                break;
            case 5:
                printf("Jumat");
                break;
            case 6:
                printf("Sabtu");
                break;
            case 7:
                printf("Minggu");
                break;
            default:
                printf("Masukan nomor hari tidak tepat\n");
                break;
        }
    } else {
        printf("Masukan nomor hari tidak tepat\n");
    }

    return 0;
}
