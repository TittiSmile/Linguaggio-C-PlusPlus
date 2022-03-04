#include <stdio.h>

int main ()
{
    char nome [10];
    char cognome [20];
    int esami;
    FILE *fp;

    fp=fopen("esempio.txt","r");
    if (fp)
    {
        while(!feof(fp))
        {
            printf("nome:");
            scanf("%c",nome);
            printf("\ncognome:");
            scanf("%c",cognome);
            printf("\nesami:");
            scanf("%d\n",&esami);

            fscanf(fp,"%s\t",nome);
            fscanf(fp,"%s\t",cognome);
            fscanf(fp,"%d\t\n",&esami);
            printf("nome: %s\tcognome: %s\t esami:%d\t",nome,cognome,&esami);
        }
          fclose(fp);
    }
    else
    {
        printf("impossibile aprire il file");
    }

    return 0;
}







