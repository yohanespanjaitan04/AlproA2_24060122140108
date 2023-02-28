/*
Nama Program  : Gaya sentripetal
Deskripsi     : Menghitung Gaya sentripetal
Nama Pembuat  : Yohanes Panjaitan
NIM           : 24060122140108
Tanggal       : 23 Februari 2023
*/
#include <stdio.h>

int main(void){
    // kamus lokal
    float f; // gaya, mewton
    float m; // massa, m/s
    float v; // kecepatan, m/s
    float r; // jari jari, meter

    // Algoritma
    printf("masukkan nilai input: ");
    scanf("%f %f %f", &m, &v, &r);
    f = m * ((v*v) / r);
    printf("hasil dari f adalah %.4f", f);
    return 0;
}