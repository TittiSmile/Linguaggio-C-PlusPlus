#include <stdio.h>
#include <stdlib.h>


int main ()
{
    FILE *pf;
    char parola;
    pf=fopen ("apro un file di testo txt.txt","w");
    if (pf==NULL)
    {
        printf("impossibile aprire il file");
    }
    fprintf(pf,"ciao");




    fclose(pf);






    return 0;
}
