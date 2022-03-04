#include <iostream>
using namespace std;

int* somma (int *&n1,int *&n2);

int main ()
{ 


  int a=5;
  int *p1;
  p1=&a;
  int b=10;
  int *p2;
  p2=&b;
  int *ris= somma (p1,p2);    // abbiamo risparmiato *& perchè li abbiamo inseriti nella chiamata di funzione. è come se passassimo i parametri come due valori normali
                              // se non avessimo usato la sintassi *& nella funzione,avremmo dovuto scrivere "somma (&p1,&p2)". con il metodo *&,passiamo direttamente i puntatori
                              
  /*
  avremmo potuto scrivere anche: int *ris; ris=somma (p1,p2);
  */
  cout <<"indirizzo p1: "<< p1 << endl;
  cout <<"Indirizzo p2: "<< p2 << endl;
  cout << "puntatore p1 ad 'a': " << *p1 << endl;
  cout << "puntatore p2 a 'b': " << *p2 << endl;
  cout << "la somma e':   " << *ris << endl;
  return 0;
  
}

int* somma (int *&n1,int *&n2)
{
    int *v;
    v=new int;
    *v= (*n1 + *n2);
    
  return  v;  
}  
  /*
  questa funzione è un esempio idiota. nel rigo 29, l'asterisco va dopo "int" perchè tutta la funzione restituisce un puntatore.
  abbiamo messo "*&n1,*&n2" perchè consideriamo sia l'indirizzo che il puntatore stesso.
  il nostro puntatore "*v" sarà uguale a new int perchè stiamo facendo assegnare un idirizzo "new int" al puntatore *v. sarà il computer stesso ad assegnare l'indirizzo
  il puntatore *v ha quindi bisogno di un nuovo indirizzo che verrà assegnato dal compilatore stesso.
  */
  
    

