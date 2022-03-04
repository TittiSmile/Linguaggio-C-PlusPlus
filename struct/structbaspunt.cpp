#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 100

struct dati 
{
   char nome    [MAXLEN];
   char cognome [MAXLEN];
   int anni [10];
    
};


typedef struct dati Utente;

int main ()
{
    Utente u;
    char *pnome=u.nome;
    char *pcognome=u.cognome;
    int *panni=u.anni;
    
    printf("Insersci nome:   ");
    gets(pnome);
    printf("inserisci cognome:   ");
     gets (pcognome);
     printf("inserisci anni:   ");
     scanf ("%d", &panni);
     
     printf("Dati utente:\n\n");
     printf("Nome: %s\n",u.nome);
    printf("Cognome: %s\n",u.cognome);
    printf("Anni: %d\n",u.anni);
    
     
    
    
    return 0;
}
