/*
Nama Program  : kalkulator
Deskripsi     : Menentukan hasil aritmatik pada sebuah inputan
Nama Pembuat  : Yohanes Panjaitan
NIM           : 24060122140108
Tanggal       : 6 maret 2023
*/

#include<stdio.h>
int main(void)
{
    //kamus
    int iA;
    int iB;
    char option;

    //algoritma
    printf("Pilihan Operasi : ");
    scanf("%c", &option);
    printf("Masukkan nilai A : ");
    scanf("%d", &iA);
    printf("Masukkan nilai B : ");
    scanf("%d", &iB);


    switch(option){
        case 'a':
            printf("%d + %d = %d", iA, iB, iA + iB);
            break;
        case 'b':
            printf("%d - %d = %d", iA, iB, iA - iB);
            break;
        case 'c':
            printf("%d * %d = %d", iA, iB, iA * iB);
            break;
        case 'd':
            printf("%d / %d = %.3f", iA, iB, (float) iA / iB);
            break;
        case 'e':
            printf("%d / %d = %d", iA, iB, iA / iB);
            break;
        case 'f':
            printf("%d mod %d = %d", iA, iB, iA % iB);
            break;
        default:
            printf("Bukan pilihan menu yang benar");
            break;
    }
    return 0;
}