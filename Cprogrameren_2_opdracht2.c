#include<stdio.h>
#include<stdlib.h>

#define AFBEELDING "C:\\Users\\11701284\\Documents\\cprogrameren2\\war.bmp"
#define COPIE "C:\\Users\\11701284\\Documents\\cprogrameren2\\thunder.bmp"


void kopie (FILE * afbeelding1 , FILE * afbeelding2)
{
    char karakter = 0;
    int counter = 0;

    for( counter =0 ;counter < 1177146; counter++)
    {
        karakter = getc(afbeelding1);

        if (counter >52)
        {

         karakter = 255-karakter;
        }

        putc(karakter,afbeelding2);

    }

}




int main(void)

{
    FILE * fp = NULL;
    FILE * newFp = NULL;


    fp = fopen(AFBEELDING, "rb");
    if(fp==NULL)
    {
        printf("error taskmaneger has been deleted\n");
        exit(EXIT_FAILURE);
    }
 newFp = fopen(COPIE,"wb");
    kopie(fp,newFp);

fclose(fp);
fclose(newFp);
return 0;
}