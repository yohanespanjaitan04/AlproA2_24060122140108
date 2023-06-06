#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nama [255][255];
    int power;
}pokemon;

// Program Utama
int main(void)
{

    //Kamus Lokal
    pokemon PKM;
    int retval;

    FILE *myFile, *aFile, *sFile;

    myFile = fopen("rekapPokemon.txt", "r");
    aFile = fopen("A_Class.txt", "w");
    sFile = fopen("S_Class.txt", "w");

    //ALGORITMA
    if(!myFile)
    {
        printf("File tidak ditemukan");
    }
    else
    {
        fprintf(aFile,"Daftar pokemon yang masuk ke A Class\n");
        fprintf(sFile,"Daftar Pokemon yang masuk S Class\n");
        retval = fscanf(myFile, "%s %d\n", &PKM.nama,&PKM.power);
        while (retval != EOF)
        {
            if(PKM.power >= 800)
            {
                fprintf(sFile, "%s %d\n", PKM.nama,PKM.power);
            }
            else 
            {
                fprintf(aFile, "%s %d\n", PKM.nama, PKM.power);
            }
            retval = fscanf(myFile, "%s %d\n", &PKM.nama, &PKM.power);
        }
        printf("nilai berhasil dikelompokkan");
        fclose(myFile);
    }
    return 0;
   
}