#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct NODO
{
    int primo;
    struct NODO *next;
}nodo;

int main ()
{
    int elem,trovato=0;
    nodo *p=NULL;
    nodo *q=NULL;
    //PRIMO elemento (in testa)
    p=new nodo;
    p->primo=1;
    p->next=NULL;
   //SECONDO elemento (in coda)
    q=new nodo;
    q->primo=2;
    q->next=NULL;
    p->next=q;
   //TERZO elemento (in coda)
    q=new nodo;
    q->primo=3;
    q->next=NULL;
    p->next->next=q;
    
    //STAMPA elementi
    cout<<"****************LISTA DI PARTENZA*************\n\n";
    for(q=p; q!=NULL; q=q->next)
    {
        cout<< "elemento "<< q->primo<< endl;
    }
    
    //inserisco un altro elemento in TESTA alla lista appena creata
    q=new nodo;
    q->primo=11;
    q->next=p;
    p=q;
    //STAMPO la nuova lista 
    cout<<"**********\n\n";
     for(q=p; q!=NULL; q=q->next)
    {
        cout<< "elemento (dopo inserimento in TESTA)  "<< q->primo<< endl;
    }
    
    //ELIMINO il PRIMO elemento della lista
    q=p;
    p=p->next;
    delete (q);
    cout<<"**************\n\n";
     for(q=p; q!=NULL; q=q->next)
    {
        cout<< "elemento (con ELIMINAZIONE del primo elemento)  "<< q->primo<< endl;
    }
    
    //inserisco un elemento in CODA alla lista
    if(p==NULL)
    {
        p=new nodo;
        p->primo=21;
        p->next=NULL;
    }
    else
    {
        q=new nodo;
        for(q=p; q->next!=NULL;q=q->next)
        {
            q->next=new nodo;
            q->next->primo=21;
            p=q->next->next;
        }
    }
    
    cout<<"**************\n\n";
     
     for(q=p; q!=NULL; q=q->next)
    {
        cout<< "elemento (aggiunto in CODA)  "<< q->primo<< endl;
    }///////////////////////////////////////////////////////////////////////non so perchè non mi legge il resto della lista ):
    
    
    //RICERCA elemento
    q=p;
    cout<<"inserisci l'elemento che vuoi cercare:   "<< endl;
    cin>> elem;
    trovato=0;
    while(q->next!=NULL && q->primo!=elem)
    {
        p=q;
        q=q->next;
    }
    if(q->primo==elem)
    {
        p->next=q->next;
        delete(q);
        cout<<"eliminato!\n";
    }
    else
    {
        cout<< "elemento non trovato\n";
    }
    
    cout<<"**************\n\n";
     for(q=p; q!=NULL; q=q->next)
    {
        cout<< "elemento (con eliminazione)  "<< q->primo<< endl;
    }//funziona ma con problematiche ._. sadness   
    system ("PAUSE");
    return 0;
}
