#include <stdio.h>

int main ()
{
    FILE *fp;
    int a;
    int i;
    int numero;

    printf("quanti numeri vuoi inserire nel file block notes?\n");
    scanf("%d",&a);

    fp=fopen("numeri prova.txt","w");

    if(fp!=NULL)
    {
      for(i=0;i<a;i++)
      {
          printf("inserisci %d numero\n",i+1);
          scanf("%d",numero);
          fprintf(fp,"%d\n",numero);
      }
    }
else
{
    printf("errore,impossibile aprire il file");
}



    fclose(fp);


    return 0;
}






