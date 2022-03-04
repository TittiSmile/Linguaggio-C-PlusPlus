//programma per i primi esempi/esercizi/spiegazioni delle funzioni!
//1° esempio: PASSAGGIO PER VALORE (vengono passati sia dei valori che delle costanti)
#include <iostream>
using namespace std;

int funzione (int a,int b);                      //chiamata funzione per valore
void funzione2 (int *a,int *b,int *risultato);  // chiamata funzione per indirizzo
int main ()                                    // anche il main è una funzione. una funzione principale! ;)
{
   int x,y;
   int somma=0;
   cout << "Inserisci due numeri interi! " << endl; 
   cin >> x >> y;
   somma=x+y;                                      // scrivere in questo modo e scrivere come subito dopo,è la stessa cosa!
   cout << "somma normale (x+y)  "<< somma << endl; 
   x=2;
   y=3;                            
   somma=funzione(x, y);
   cout << "somma con funzione!! [funzione (x,y)] "<< somma << endl;
   funzione2(&x, &y,&somma);
   cout << "somma con indirizzi!! [funzione (&x,&y,&somma)]  " << somma << endl;
   cout <<"somma confunzione costante!!! [funzione (numero,numero)]  " << funzione (4,8) << endl; //funzione con COSTANTI!! potremmo utilizzare anche questo metodo mettendo due numeri al posto di "int a,int b" senza includere necessariamente la variabile somma.
   return 0;
   
}
int funzione (int a,int b)
{
    int risultato;
    risultato= a+b;
    return risultato;
    
}
void funzione2 (int *a,int *b,int *risultato)
{
    *a=20;
    *b=5;
    *risultato= *a + *b;
}

//2° esempio: PASSAGGIO PER INDIRIZZO

/*
#include <iostream>
using namespace std;
int funzione (int a,int b);    
void funzione2 (int *a,int b*,int *risultato)     
int main ()                      
{
   int x,y;
   int somma=0;
   cout << "Inserisci due numeri interi! " << endl; 
   cin >> x >> y;
   somma=funzione(x, y);
   cout << "il risultato e' " << somma << endl;
   cout <<"altro risultato:  " << funzione (4,8) << endl; 
   return 0;
   
}
int funzione (int a,int b)
{
    int risultato;
    risultato= a+b;
    return risultato;
    
}

*/

