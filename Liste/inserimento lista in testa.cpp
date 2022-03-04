#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct LISTA 
{
    int primo;
    struct LISTA *next;
}nodo;

int main ()
{
  nodo *p=new nodo;  //vado a creare una nuova cella con il valore '2'
  p->primo=2;
  p->next=NULL;

  nodo*q=new nodo; //creo una cella col valore '3' che vado a posizionare al posto di q
  q->primo=3;
  q->next=p;
  p=q;        //questa condizione mi serve per far partire la lista dal valore '3'(valore di q) e non da '2'(valore di p)
  

  nodo*temp=new nodo;   //creo una cella col valore '44' da mettere in testa a p e q.
  temp->primo=44;
  temp->next=q;  //deve essere uguale alla cella che lo procede;
  q=temp;  // mi serve per stampare prima 44, poi 3  ed infine 2

  while(temp!=NULL)
  {
      cout<< temp->primo << endl;
      temp=temp->next;
  }
  cout<<"ecco l'inserimento in testa"<< endl;
  
  //si può continuare così fino a quando si vuole (questo è l'inserimento in testa) basta ricordarsi di allacciare alla variabile corrente
  // la variabile che è stata precedentemente creata (in quest'ultimo caso,la variabile temp si allaccia a q e prima, la variabile q si allacciava a p)
  
  
  //**********N.B.!!!!!!!!!!!!!! bisogna fare un unico ciclo while alla fine di tutto il programma altrimenti si richia di 
  // non far stampare la lista nel modo corretto. 
  //se avessi fatto un ciclo while per la stampa ogni volta che creavo una cella con un numero,la lista veniva stampata in modo scorretto.
  
  
    
    return 0;
}
