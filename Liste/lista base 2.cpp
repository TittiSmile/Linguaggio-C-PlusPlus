#include <iostream>
using namespace std;

typedef struct LISTA
{
    int primo;
    struct LISTA *next;
}nodo;

struct LISTA *nelem(int a);
struct LISTA *intesta (struct LISTA *p,int a);
struct LISTA *incoda (struct LISTA *p,int a);
struct LISTA *elimina (struct LISTA *p);  //provo a fare la funzione 'elimina' di tipo struct
void stampa (struct LISTA *p);


int main ()
{
    struct LISTA *lol=NULL;
    int num;
    cout<<"inserisci un elemento in testa" << endl;
    cin>> num;
    lol=intesta(lol,num);

    cout<<"inserisci un elemento in coda" << endl;
    cin>> num;
    lol=incoda(lol,num);

    cout<<"\nstampo la lista" << endl;
    stampa(lol);

    cout<<"\nelimino la lista" << endl;
    lol=elimina(lol);

    cout<<"ora la lista e'"<< endl;
    stampa(lol);

    return 0;
}


struct LISTA *nelem(int a)
{
 nodo*q=new nodo;
 q->primo=a;
 q->next=NULL;
 return q;
}


struct LISTA *intesta (struct LISTA *p,int a)
{
 nodo*q=nelem(a);
 q->next=p;
 p=q;
 return p;
}


struct LISTA *incoda (struct LISTA *p,int a)
{
 nodo*q=nelem(a);
 struct LISTA *temp;    //ricordo che scrivere 'struct LISTA' e 'nodo' sono la stessa cosa.

 if(p!=NULL)
 {
     for( temp=p; temp->next!=NULL; temp=temp->next);

             temp->next=q;   //non so perchè se metto le {} non mi stampa il secondo elemento della lista...



 }
 else
 {
     p=q;
 }
 return p;

}


struct LISTA *elimina (struct LISTA *p)
{
 nodo*temp;
 for(;p!=NULL;p=temp)
 {
     temp=p->next;
     p->next=NULL;
     delete p;
 }
 return p;
}


void stampa (struct LISTA *p)
{
    cout<<"\nLISTA:"<< endl;
    while(p!=NULL)
    {
        cout<<p->primo<<"  *  "<< endl;
        p=p->next;
    }

    if(p==NULL)
    {
        cout<<"lista vuota"<< endl;
    }

}
