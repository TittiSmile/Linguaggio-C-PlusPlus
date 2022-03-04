//programma che calcola la lunghezza di un carattere. STRINGA E VETTORE.
#include <iostream>
#include <string.h>   // questa libreria è per le stringhe di caratteri!
#define n 30
using namespace std;
int main ()
{
    char nome [n];    // avremmo potuto scrivere anche int nome [30] ma,visto che abbiamo usato il define, ogni volta che nel programma metteremo n, quest'ultimo verrà visualizzato come 30
    int lunghezza;
    cout << "Qual e'  il tuo nome?" << endl;
    cin >> nome;
    lunghezza= strlen (nome);  // strlen vuol dire "lunghezza stringa" e assegna alla variabile "lunghezza" la lunghezza dei caratteri del nome! es: paolo è di 5 caratteri.
    cout << "Il tuo nome e' di " << lunghezza << " caratteri." << endl;
    
    
    return 0;
}
