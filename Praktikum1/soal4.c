/*
Nama Program  : Volume Bola Kerucut
Deskripsi     : Menghitung Volume Bola Kerucut
Nama Pembuat  : Yohanes Panjaitan
NIM           : 24060122140108
Tanggal       : 23 Februari 2023
*/
#include <stdio.h>

int main(void){
    // kamus lokal
    float vb; // volume, mewton
    const double phi= 3.1415; // konstanta
    float r; // jari-jari, meter
    float vk; // volume kerucut, meter

    // Algoritma
    printf("masukkan nilai input: ");
    scanf("%f", &r);
    vb = 4* ((phi * (r * r * r)))/3;
    vk = 0.5 * vb;
    printf("hasil dari vb adalah %.4f\n", vb);
    printf("hasil dari vk adalah %.4f", vk);
    return 0;
}