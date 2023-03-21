/*
Nama Program  : SimetriTabel
Deskripsi     : menentukan bahwa T1 dan T2 simetri atau tidak.
Nama Pembuat  : Yohanes Panjaitan
NIM           : 24060122140108
Tanggal       : 20 maret 2023
*/

#include <stdio.h>
#define MAX_SIZE 100

int main(void) 
{
    // kamus lokal
    int T1[MAX_SIZE];
    int T2[MAX_SIZE];
    int size1;
    int size2;
    int i;
    int simetri = 1;
    
    // algoritma
    printf("Masukkan ukuran Tabel T1: ");
    scanf("%d", &size1);
    printf("Masukkan elemen-elemen Tabel T1: ");
    for(i=0; i<size1; i++) {
        scanf("%d", &T1[i]);
    }
    
    printf("Masukkan ukuran Tabel T2: ");
    scanf("%d", &size2);
    printf("Masukkan elemen-elemen Tabel T2: ");
    for(i=0; i<size2; i++) {
        scanf("%d", &T2[i]);
    }
    
    if(size1 != size2) {
        simetri = 0;
    } else {
        for(i=0; i<size1; i++) {
            if(T1[i] != T2[i]) {
                simetri = 0;
                break;
            }
        }
    }
    
    if(simetri == 1) {
        printf("T1 dan T2 simetri.\n");
    } else {
        printf("T1 dan T2 tidak simetri.\n");
    }
    
    return 0;
}
