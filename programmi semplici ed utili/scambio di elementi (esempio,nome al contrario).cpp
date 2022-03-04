//programma che permette di scambiare (in questo caso delle lettere) elementi. esempio: carlo (scambiando gli le lettere diventa) olrac
#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    char nome [30];     // usiamo un a variabile char di grandezza 30
    int i,j,variabile;  //"i" e "j" sono contatori  mentre "variabile" è una variabile di deposito.
    int lunghezza;     // ci serve per contare la lunghezza di nome usando strlen ().
    cout << "Programma che dà in output una parola/nome al contrario.\nDigitare il nome o la parola." << endl;
    cin >> nome;
    lunghezza = strlen(nome);   //viene dato alla variabile "lunghezza" la lunghezza della stringa "nome"
    i = 0;                     // contatore inizializzato a 0 
    j = lunghezza-1;          // la lunghezza della stringa è sempre lunghezza-1. ricordati che la stringa di caratteri parte da 0 e arriva a k-1. 
                               //se consideriamo
                              // la parola "ciao" c=k[0],i=k[1],a=k[2],o=k[3]. la parola è di 4 caratteri ma di grandezza è lunghezza-1
    while (i < j)          // fin quando la "i" è minore della lunghezza effettiva di "j" viene fatto il seguente processo:
    {
        variabile = nome[i];     
        nome [i] = nome [j];      
        nome [j] = variabile;     
            //prendiamo in considerazione la parola "ciao":
           //i=c    ----> alla variabile i viene data la prima lettera della parola,ovvero la c
           //j=o    ----> alla variabile j viene data l'ultima lettera della parola,ovvero la o
           //la variabile "variabile" diventa ----> variabile=c    (vedi rigo 18)
           //con questo cambio, i contatori cambiano ovvero:  i=o    j=c
        i++;    // la prima variabile viene incrementata per il ragionamento fatto prima
        j--;    // j viene decrementata per lo stesso discorso.
    }
    cout << "La tua parola,vista al contrario, e' " << nome << endl;
    
    return 0;
}
