#include <iostream>
using namespace std;

typedef struct LISTA
{
    int primo;
    struct LISTA *next;
}nodo;

void menu();
struct LISTA *nuovoelem(int a);
struct LISTA *intesta (struct LISTA *p,int a);
struct LISTA *incodar (struct LISTA *p,int a);
struct LISTA *eliminar (struct LISTA *p);
struct LISTA *ricercar (struct LISTA *p,int a);
void stampar (struct LISTA *p);

int main ()
{
    int scelta,n;
    struct LISTA *lol=NULL;
    menu();

    do
    {
        do
        {
            cout<<"___Che operazione vuoi fare?" << endl;
            cin>> scelta;
            if(scelta<1 || scelta>6)
            {
                cout<<"errore"<< endl;
            }
        }while(scelta<1 || scelta>6);

        switch(scelta)
        {
        case 1:
            cout<<"Digitare il numero da inserire in testa"<< endl;
            cin>> n;
            lol=intesta(lol,n);
            break;
        case 2:
            cout<<"Digitare il numero da inserire in coda"<< endl;
            cin>> n;
            lol=incodar(lol,n);
            break;
        case 3:
            cout<<"Hai eliminato la lista"<< endl;
            lol=eliminar(lol);
            break;
        case 4:
            cout<<"Digitare il numero da ricercare"<< endl;
            cin>> n;
            lol=ricercar(lol,n);
            break;
        case 5:
            cout<<"Hai deciso di stampare la lista"<< endl;
            stampar(lol);
            break;
        case 6:
            cout<<"Arrivederci"<< endl;
            break;
        }

    }while(scelta!=6);

    return 0;
}


void menu()
{
    cout<<"\t\t***MENU***"<< endl;
    cout<<"\t\t1)Inserisci in testa\n\t\t2)Inserisci in coda\n\t\t3)Elimina\n\t\t4)Ricerca\n\t\t5)Stampa\n\t\t6)Esci"<< endl;
}


struct LISTA *nuovoelem(int a)
{
    nodo*q=new nodo;
    q->primo=a;
    q->next=NULL;

    return q;

}


struct LISTA *intesta (struct LISTA *p,int a)
{
 nodo*q=nuovoelem(a);
 q->next=p;
 return q;
}

struct LISTA *incodar (struct LISTA *p,int a)
{
 nodo*q;
 if(p==NULL)
 {
     p=nuovoelem(a);
 }
 else
 {
     p->next=incodar(p->next,a);
 }
    return p;
}

struct LISTA *eliminar(struct LISTA *p)
{
  if(p!=NULL)
  {
      eliminar(p->next);
      p->next=NULL;
      delete p;
  }
    return p;
}


struct LISTA *ricercar (struct LISTA *p,int a)
{
 nodo*trovato=NULL;

    if(p==NULL || p->primo==a)
 {
     trovato=p;
     cout<<"elemento trovato"<< endl;
}

 else
 {
     trovato=ricercar(p->next,a);
     cout<<"elemento NON trovato"<< endl;
 }
    return trovato;

}
void stampar (struct LISTA *p)
{
    if(p!=NULL)
    {
        cout<<"lista:\n\n"<<p->primo<< endl;
        stampar(p->next);
    }
}

