/*
Nama Program  : bilangan sempurna
Deskripsi     : cek bilangan sempurna
Nama Pembuat  : Yohanes Panjaitan
NIM           : 24060122140108
Tanggal       : 12 maret 2023
*/

#include <stdio.h>

int main(void)
{
   //kamus lokal
   int n;
   int i;
   int sum;
   int j;

   //algoritma
   printf("Masukkan bilangan N: ");
   scanf("%d",&n);
   printf("Bilangan sempurna antara 1 dan %d adalah:\n", n );

   for(i=1; i<=n; i++){
      sum = 0;

      for(j=1; j<i; j++){
         if(i%j==0){
            sum += j;
         }
      }

      if(sum==i){
         printf("%d\n",i);
      }
   }

   return 0;
}