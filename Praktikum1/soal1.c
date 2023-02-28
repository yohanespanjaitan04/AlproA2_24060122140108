/*
Nama Program  : Jarak GLBB  
Deskripsi     : Menghitung jarak GLBB
Nama Pembuat  : Yohanes Panjaitan
NIM           : 24060122140108
Tanggal       : 23 Februari 2023
*/
#include <stdio.h>

int main(void){
    // kamus lokal
    float s; // jarak, meter
    float v0; // kecepatan awal, m/s
    float t; // waktu, sekon
    float a; // percepatan, meter persekon kuadrat

    // Algoritma
    printf("masukkan nilai input: ");
    scanf("%f %f %f", &v0, &t, &a);
    s = v0 * t + 0.5 * (a *(t*t));
    printf("hasil dari s adalah %.4f", s);
    return 0;
}