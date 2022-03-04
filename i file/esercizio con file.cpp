//questo programma ha l'intenzione di aprire un file block notes già creato

#include <stdlib.h>
#include <stdio.h>

#define MAX 100

int lettura_file(char file[],int vettore[]);


int main ()
{
    int vet[MAX],dim;
    char file [MAX];

    printf("Inserisci nome del file da aprire:\n");
    scanf ("%s",file);
    dim=lettura_file(file,vet);
    for (int i=0;i<dim;i++)
    {

       printf("%d",vet[i]);
    }

    return 0;
}




int lettura_file(char file[],int vettore[])
{
    int i=0;
    FILE *fp;

    fp=fopen(file,"r");
    while (!feof(fp))
    {
      // fscanf(fp,"%d",&vettore[i]);
       i++;

    }
    fclose(fp);
    return i;
}
