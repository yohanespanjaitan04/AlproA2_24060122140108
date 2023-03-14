/*
Nama Program  : bilangan prima
Deskripsi     : cek bilangan prima
Nama Pembuat  : Yohanes Panjaitan
NIM           : 24060122140108
Tanggal       : 12 maret 2023
*/

#include <stdio.h>

int main(void)
{
   // kamus lokal
   int N;   
   int i; 
   int j; 
   int in;

   // algoritma
   printf("Masukkan bilangan N: ");
   scanf("%d",&N);
   printf("Bilangan prima antara 2 dan %d adalah:\n",N);

   for(i=2; i<=N; i++){
      in = 0;

      for(j=2; j<i; j++){
         if(i%j==0){
            in = 1;
            break;
         }
      }

      if(in==0){
         printf("%d\n",i);
      }
   }

   return 0;
}
