/***************************************************



Es. 2.2) Definire una struct “studente” che abbia 4 campi: cognome, voto più basso, voto più alto e
media dei voti. Scrivere un programma che una volta riempiti con i dati necessari 5 struct “studente”
dia le seguenti 4 possibilità:
1) Visualizzare i dati dei 5 studenti
2) Cercare uno studente per cognome e visualizzane il voto più basso, quello più alto e la
media.
3) Visualizzare i dati dello studente con la media più alta.
4) Uscire dal programma.

***************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLEN 100
#define MAXSTR 20


struct studente
{
   char nome[10];
    char cognome[10];   
     int voto[5];  
       
};





int main()
{ 
    int scelta,i;
    struct studente s1,s2,s3,s4;
    struct  studente classe[4];
    
    strcpy(s1.nome,"Titti");
    strcpy(s1.cognome,"Titti");
    s1.voto[0]=30;
    s1.voto[1]=10;
    
    strcpy(s2.nome,"Rosa");
    strcpy(s2.cognome,"Rossi");
    s2.voto=20;
    
    strcpy(s3.nome,"Aldo");
    strcpy(s3.cognome,"Gialli");
    s3.voto=10;
    
    strcpy(s4.nome,"Pippo");
    strcpy(s4.cognome,"Pluto");
    s4.voto=30;
    
    
    classe[0]=s1;
    classe[1]=s2;
    classe[2]=s3;
    classe[3]=s4;
    
    do
    {
    printf("1) Visualizzare i dati dei 5 studenti \n 2) Cercare uno studente per cognome e visualizzane il voto più basso, quello più alto e la media.\n 3) Visualizzare i dati dello studente con la media più alta. \n 4) Uscire dal programma.");
    scanf("%d",&scelta);
    switch (scelta)
    {
           case 1:
             printf(" Visualizzare i dati dei 5 studenti\n");
             
             
             for(i=0;i<4;i++)
             {
                 printf("nome: %s\ncognome:%s\neta:%d\n",classe[i].nome,classe[i].cognome,classe[i].voto);            
                  printf("\n");           
                             
             }
             
             
       
           break;
               case 2:
                printf("2) Cercare uno studente per cognome e visualizzane il voto più basso, quello più alto e la media.\n");  
           
           break;
           
            case 3:
                 printf(" 3) Visualizzare i dati dello studente con la media più alta. \n");
   
           break;
    }
    
    
    
    
    
    }while(scelta!=4);
  return 0;  
}
