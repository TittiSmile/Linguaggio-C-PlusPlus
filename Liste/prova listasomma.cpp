#include <iostream>
using namespace std;

typedef struct LISTA
{
    int primo;
    struct LISTA *next;
}nodo;

void menu();
struct LISTA *nelem(int a);
struct LISTA *intesta (struct LISTA *p,int a);
struct LISTA *incoda (struct LISTA *p,int a);
struct LISTA *ricerca (struct LISTA *p,int a);
struct LISTA *elimina (struct LISTA *p);
int noccr (struct LISTA *p,int a);
struct LISTA *elocc (struct LISTA *p,int a);
void stampa (struct LISTA *p);
struct LISTA *rewerse (struct LISTA *p);
int somma(struct LISTA *p);


int main()
{
    int scelta,num;
    struct LISTA *lol=NULL;

    menu();
    do
    {
        cout<<"\n\t\tInserisci scelta"<< endl;
        cin>> scelta;

        switch(scelta)
        {
        case 1:
            cout<<"Inserisci in testa"<<endl;
            cin>> num;
            lol=intesta(lol,num);
            break;
        case 2:
            cout<<"Inserisci in coda"<<endl;
            cin>> num;
            lol=incoda(lol,num);
            break;
        case 3:
            cout<<"Inserisci elemento da ricercare"<<endl;
            cin>> num;
            lol=ricerca(lol,num);
            if(ricerca(lol,num))
            {
                cout<<"elemento trovato"<< endl;
            }
            else
            {
                cout<<"elemento NON trovato"<< endl;
            }
            break;
        case 4:
            cout<<"Elimina lista"<< endl;
            lol=elimina(lol);
            break;
        case 5:
            cout<<"Di quale valore vuoi contare le occorrenze?"<< endl;
            cin>> num;
            if(lol==NULL)
            {
                cout<<"Lista VUOTA!"<< endl;
            }
            else
            {
              cout<<"Il numero di occorrenze e' "<<noccr(lol,num)<< endl;
            }
            break;
        case 6:
            cout<<"Di quale valore vuoi eliminare le occorrenze?"<< endl;
            cin>> num;
            lol=elocc(lol,num);
            break;
        case 7:
            cout<<"Stampa la lista"<< endl;
            stampa(lol);
            if(lol==NULL)
            {
                cout<<"Lista VUOTA!"<< endl;
            }
            break;
        case 8:
            cout<<"Stampa lista al contrario"<< endl;
            lol=rewerse (lol);
            break;
        case 9:
            cout<<"Sommo gli elementi della lista"<< endl;
            cout<<"La somma e' "<<somma(lol)<< endl;
            break;
        case 10:
            cout<<"Arrivederci"<<endl;
            break;
        default:
            cout<<"Scelta errata"<<endl;
            break;
        }

    }while(scelta!=10);



    return 0;
}




void menu()
{
    cout<<"***MENU***"<< endl;
    cout<<"1)in testa\n2)in coda\n3)ricerca\n4)elimina\n5)numero occorrenze\n6)elimina occorrenze"<< endl;
    cout<<"7)stampa\n8)stampa al contrario\n9)somma\n10)esci"<< endl;
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
 return q;
}

struct LISTA *incoda (struct LISTA *p,int a)
{
  if(p==NULL)
  {
      p=nelem(a);
  }
  else
  {
      p->next=incoda(p->next,a);
  }
 return p;

}

struct LISTA *ricerca (struct LISTA *p,int a)
{
   struct LISTA *trovato=NULL;
   for(;p!=NULL && trovato==NULL;p=p->next)
   {
       if(p->primo==a)
       {
           trovato=p;
       }
   }
 return trovato;

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


int noccr (struct LISTA *p,int a)
{
    int flag=0;
    if(p!=NULL)
    {
        if(p->primo==a)
        {
            flag=1+noccr(p->next,a);
        }
         else
        {
            flag=noccr(p->next,a);
        }

    }

    return flag;
}


struct LISTA *elocc (struct LISTA *p,int a)
{
 nodo*flag;
 if(p!=NULL)
 {
     if(p->primo==a)
     {
         flag=p;
         p->next=NULL;
         delete flag;
     }
     else
     {
         elocc(p->next,a);
     }
 }
  return flag;
}


void stampa (struct LISTA *p)
{
    while(p!=NULL)
    {
        cout<<"Lista: \n"<<p->primo<< endl;
        p=p->next;
    }
}



struct LISTA *rewerse (struct LISTA *p)
{
 if(p==NULL)
    return 0;
 rewerse(p->next);
 cout<<p->primo<< endl;

}


int somma(struct LISTA *p)
{
   /* int sum;
    nodo*temp;
    while(p!=NULL)
    {
      sum=p->primo+p->primo;
    }

   return sum;*/



   int sum;
   if(p==NULL)
   {
       return 0;
   }
   else
   {
       sum=somma(p->next);
       sum=sum+p->primo;
       return sum;
   }
/////POWAAAA
}


