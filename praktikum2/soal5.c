/*
Nama Program  : Segitiga
Deskripsi     : Menentukan jenis segitiga
Nama Pembuat  : Yohanes Panjaitan
NIM           : 24060122140108
Tanggal       : 6 maret 2023
*/

#include <stdio.h>

int main(void) 
{
    //kamus
    int a, b, c;

    //algoritma
    printf("Masukkan sisi a: ");
    scanf("%d", &a);
    printf("Masukkan sisi b: ");
    scanf("%d", &b);
    printf("Masukkan sisi c: ");
    scanf("%d", &c);

    
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Terdapat nilai yang bukan sisi segitiga\n");
    }else if (a>0 && b>0 && c>0){
        if (a == b && b == c && a == c) {
            printf("Segitiga sama sisi\n");
        }else if (a == b || b == c || c == a) {
            printf("Segitiga sama kaki\n");
        }else {
        printf("Segitiga sembarang\n");}
    }
    return 0;
}
