//programma in C di allocazione DINAMICA degli array con utilizzo di malloc
#include <stdio.h>
#include <assert.h> // questa libreria non è necessaria. serve per il passaggio successivo
#include <stdlib.h>

int main ()
{
    int *array,dim,i; // in questo caso l'array viene dichiarato come puntatore piochè utilizziamo la funzione malloc
    printf ("Inserisci la dimensione del tuo array: ");
    scanf ("%d", &dim);
    array=(int *) malloc(dim*sizeof(int));
    assert(array!=NULL); //grazie alla libreria assert possiamo mettere questa "condizione" cioè bisogna verificare che l'array non sia nullo. funziona come un ciclo if
    for (int i=0;i<dim;i++)
    {
        printf( "inserisci elemento dell'array: ");
        scanf ("%d", &array[i]);
    }
    
    printf("Elementi allocati\n\n");
    printf( "Elemento\tIndirizzo\tValore\n");
    for (int i=0;i<dim;i++)
    {
        printf ("%d  \t\t%d  \t%d \n",i, &array[i], array[i]);
    }
    system ("PAUSE");
    return 0;
}
