#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct NODO
{
    int primo;
    struct NODO *next;
}nodo;

struct NODO *InTesta (struct NODO *temp,int n);
struct NODO *InCoda  (struct NODO *temp,int n);
struct NODO *Ricerca (struct NODO *temp,int m);
struct NODO *Elimina (struct NODO *temp);
void  Stampa (struct NODO temp);

int main ()
{
    nodo *p=NULL;
    nodo *q=NULL;
    nodo *temp1=NULL;
    int numero, scelta;
    
    do
    {
        cout<<"\t\t*************MENU***********"<< endl;
        cout<<"\t\t1) Inserisci il numero in testa"<< endl;
        cout<<"\t\t2) Inserisci il numero alla fine(in coda)"<< endl;
        cout<<"\t\t3) Ricerca un numero nella lista"<< endl;
        cout<<"\t\t4) Elimina la lista"<< endl;
        cout<<"\t\t5) Stampa la lista "<< endl;
        cout<<"\t\t0) Esci dal programma"<< endl;
        cin>> scelta;
        cout<<endl;
        
        switch(scelta)
        {
            case 1:
                cout<<"Inserisci un numero"<< endl;
                cin>>numero;
                p=InTesta(p,numero);
                break;
            case 2:
                cout<<"Inserisci il numero da mettere in coda"<< endl;
                cin>> numero;
                p=InCoda(p,numero);
                break;
            case 3:
                cout<<"inserisci numero da ricercare"<< endl;
                cin>> numero;
                p=Ricerca(p,numero);
                break;
            case 4:
                cout<<"inserisci elemento da eliminare"<< endl;
                cin>> numero;
                p=Elimina(p,numero);               
                break;
            case 5:
                cout<<"ecco la stampa:"<< endl;
                p=Stampa(p);
                break;

        }
        
    }while(scelta != 0);
    
    system ("PAUSE");
    return 0;
}
struct NODO *InTesta (struct NODO *temp,int n)
{
    temp=new nodo;
    temp->primo=n;
    temp->next=NULL;
    return temp;  
}
struct NODO *InCoda (struct NODO *temp,int n)
{
    temp=new nodo;
    if(temp->next != NULL)
    {
        temp->primo=n;
        temp->next=NULL;
        return temp;
    }
    else 
    {
        temp->primo=n;
        temp=temp->next->next; //temp->next=NULL
        return temp;
    }
}
struct NODO *Ricerca (struct NODO *temp,int m)
{
   temp=new nodo;  // condizione sbagliata! andrebbe fatta un'uguaglianza tra la lista già creata e l'elemento da cercare tipo 'p=temp'
    while(temp->next != NULL && temp->primo != m)
    {
        temp=temp->next;
    } 
    if(temp->primo==m)
    {
        cout<<"trovato"<< endl;
    }
    else
    {
        cout<<"non trovato"<< endl;
    }  
}
struct NODO *Elimina (struct NODO *temp)
{
    temp=new nodo;
    nodo *temp1=new nodo;
    temp1=temp;
    temp=temp->primo;
    delete(temp1);
    
}
void  Stampa (struct NODO temp)
{
    temp=new nodo;
    while(temp->next != NULL)
    {
        cout<<temp->primo << endl;
        temp=temp->next;
    }
}






