#include <stdio.h>
#include <stdlib.h>

int main ()
 {
     int a=10,b=4;

     FILE *pf; //puntatore che serve per la SCRITTURA dei numeri sul blocknotes
     FILE *fp; // puntatore che serve per la LETTURA sul terminale dei numeri

     pf= fopen("provola.txt", "w");
     if(pf==NULL)
     {
         printf("impossibile aprire il file\n");
     }

     else
     {
         fprintf(pf,"i valori sono: %d %d \n",a,b);
     }


     fclose(pf);
     /////////////////////// con questo passaggio,ho assicurato la scrittura dei numeri 10 e 4 su un file block notes

     fp=fopen("provola.txt","r");
     if (fp==NULL)
     {
         printf("Impossibile aprire il file");
     }
     else
     {
         printf("i valori sono: %d %d ",a,b);
         fprintf(fp,"i valori sono: %d %d \n",a,b);


         while(!feof(fp))
         {

             fprintf(fp,"i valori sono: %d %d \n",a,b);

         }
              fclose(fp);

      }




     return 0;
 }
