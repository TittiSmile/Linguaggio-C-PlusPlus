#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 100

struct dati 
{
   char nome    [MAXLEN];
   char cognome [MAXLEN];
   int anni [MAXLEN];
    
};


typedef struct dati Utente;

int main ()
{
    Utente u;
    printf( "inserisci nome:   ");
    gets(u.nome);                      //è come usare scanf
    printf ("Inserisci cognome:   ");
    gets(u.cognome);
    printf ("inserisci anni:   ");
    scanf ("%d,",u.anni);
    
    printf("Dati utente:\n\n");
    printf("Nome: %s\n",u.nome);
    printf("Cognome: %s\n",u.cognome);
    printf("Anni: %d\n",u.anni);
    
    
    
    return 0;
}
