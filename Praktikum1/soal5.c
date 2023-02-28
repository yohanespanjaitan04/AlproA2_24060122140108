/*
Nama Program  : Luas Keliling Layang-layang
Deskripsi     : Menghitung Luas Keliling Layang-layang
Nama Pembuat  : Yohanes Panjaitan
NIM           : 24060122140108
Tanggal       : 23 Februari 2023
*/
#include <stdio.h>

int main(void){
    // kamus lokal
    float s1; // sisi satu layng-layang, meter
    float s2; // sisi dua layang-layang, meter
    float d1; // diagonal satu layang-layang, meter
    float d2; // jari jari, meter
    float luas; // jari jari, meter
    float kell; // jari jari, meter

    // Algoritma
    printf("masukkan nilai input: ");
    scanf("%f %f", &d1, &d2);
    luas = 0.5 * d1 * d2;
    printf("hasil dari luas adalah %.4f\n", luas);
    printf("masukkan nilai input: ");
    scanf("%f %f", &s1, &s2);
    kell = 2 * (s1 + s2);
    printf("hasil dari kell adalah %.4f", kell);
    return 0;
}