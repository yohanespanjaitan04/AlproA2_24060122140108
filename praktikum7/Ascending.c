/*Nama File :  Ascending.c*/
/*Nama Pembuat : Yohanes Panjaitan */
/*Tanggal : 13 mei 2023 */
/*Deskripsi : Ascending*/
/*NIM : 24060122140108 : */

#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int arr[], int n) 
{
    //kamus lokal
    int pass;
    int k;
    int temp;
    bool swapp;

    //Algoritma
    swapp = true;
    pass = 1;
    while (pass <= n-1 && swapp)  {
        swapp = false;
        int k = 0;
        for(k = 0; k<n;k++){
            if (arr[k] < arr[k - 1]) {
                temp = arr[k];
                arr[k] = arr[k - 1];
                arr[k - 1] = temp;
                swapp = true;
            }
        }
        pass++;
    }
}

int main()
{
    //kamus lokal
    int arr[] = {3,10,33,11,5,99,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int l;

    //algoritma
    bubbleSort(arr, n);
    printf("Array yang sudah terurut: \n");
    for (int l = 0; l < n; l++) {
    printf("%d ", arr[l]);
    }
    return 0;
}