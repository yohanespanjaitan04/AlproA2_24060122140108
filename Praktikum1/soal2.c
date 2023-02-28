/*
Nama Program  : Jarak parabola
Deskripsi     : Menghitung jarak parabola
Nama Pembuat  : Yohanes Panjaitan
NIM           : 24060122140108
Tanggal       : 23 Februari 2023
*/
#include <stdio.h>

int main(void){
    // kamus lokal
    float y; // jarak, meter
    float v0; // kecepatan awal, m/s
    float t; // waktu, sekon
    float g; // percepatan, meter persekon kuadrat

    // Algoritma
    printf("masukkan nilai input: ");
    scanf("%f %f %f", &v0, &t, &g);
    y = v0 * t + 0.5 * (y *(t*t));
    printf("hasil dari y adalah %.4f", y);
    return 0;
}