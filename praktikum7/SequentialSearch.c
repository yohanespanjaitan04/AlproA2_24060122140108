/*Nama File :  SequentialSearch.c*/
/*Nama Pembuat : Yohanes Panjaitan */
/*Tanggal : 13 mei 2023 */
/*Deskripsi : SequentialSearch*/
/*NIM : 24060122140108 : */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // kamus lokal
    int n; 
    int t[100];
    int x; 
    int ix = 0;
    // algoritma
    printf("Masukkan jumlah elemen tabel: ");
    scanf("%d", &n);
    printf("Masukkan elemen-elemen tabel: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &t[i]);
    }
    printf("Masukkan nilai X yang ingin dicari: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (t[i] == x) {
            ix = i + 1;
            break;
        }
    }
    printf("IX = %d\n", ix);
    return 0;
}
