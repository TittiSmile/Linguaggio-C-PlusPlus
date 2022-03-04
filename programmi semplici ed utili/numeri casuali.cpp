// programma che genera numeri casuali utilizzando due nuove librerie.
#include <iostream>
#include <time.h>   // questa libreria serve a visualizzare i secondi che scorrono sull'orologio del computer! ci servirà per il nostro generatore di numeri casuali
#include <stdlib.h> // questa libreria include molte funzionalità tra cui il generatore di numeri casuali (rand,srand ecc)
using namespace std;
int main ()
{
    int numero;
    srand (time(NULL));  // serve a visualizzare i tempo che scorre nel nostro orologio.generatore di numeri casuali basato sull'orologio del pc
    for (int i=0;i<10;i++) // verranno visualizzati i numeri random 10 volte
    {
        numero= rand() %10;                 /*se togliessimo %10, verrebbero 
                                         visualizzati numeri enormi,maggiori di 10. utilizzando l'operatore modulo, 
                                         assegnamo al numero random (e quindi alla variabile "numero") i resto della divisione dei 
                                        numeri casuali con 10. es: 20098374:10 darà come resto un numero x. quest'ultimo verrà visualizzato come numero casuale.
                                        è chiaro che potremmo usare anche altri numeri con l'operatore modulo, dipende da quali valori vogliamo far uscire come
                                        resto della divisione tra il numero casuale e il divisore. */
        cout << "I numeri casuali generati sono " << numero << endl;
    }
    
    
    return 0;
}
