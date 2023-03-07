/*
Nama Program  : Tahanan
Deskripsi     : Menghitung total tahanan
Nama Pembuat  : Yohanes Panjaitan
NIM           : 24060122140108
Tanggal       : 6 maret 2023
*/

#include <stdio.h>

int main(void) 
{
    //kamus
    int tahanan1, tahanan2, tahanan3, total_tahanan;
    
    //algoritma
    printf("Masukkan tahanan 1: ");
    scanf("%d", &tahanan1);
    printf("Masukkan tahanan 2: ");
    scanf("%d", &tahanan2);
    printf("Masukkan tahanan 3: ");
    scanf("%d", &tahanan3);
    
    if (tahanan1 < 0 || tahanan2 < 0 || tahanan3 < 0) {
        printf("Masukan tahanan tidak boleh negatif\n");
    } else {
        total_tahanan = tahanan1 + tahanan2 + tahanan3;
        printf("Total tahanan jika dirangkai seri: %d\n", total_tahanan);
    }
    
    return 0;
}
