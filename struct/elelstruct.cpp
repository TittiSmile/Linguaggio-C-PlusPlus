#include <iostream>
using namespace std;
typedef struct LISTA
{
    int primo;
    struct LISTA *next;
}nodo;

void menu();
nodo*nelem(int a);
nodo*intesta(nodo*p,int a);
nodo*incoda(nodo*p,int a);
nodo*ricerca(nodo*p,int a);
nodo*elimina(nodo*p);
int occorrenza(nodo*p,int a);
nodo*elocc(nodo*p,int a);
int somma(nodo*p);
void stampa(nodo*p);
nodo*rewerse(nodo*p);

int main ()
{
   nodo*l=NULL;
   int scelta,num;


   menu();
   do
   {
       cout<<"\t\tcosa scegli?"<< endl;
       cin>> scelta;
       switch(scelta)
       {
       case 1:
           cout<<"aggiungi in testa"<< endl;
           cin>> num;
           l=intesta(l,num);
        break;
       case 2:
           cout<<"aggiungi in coda"<< endl;
           cin>> num;
           l=incoda(l,num);
        break;
       case 3:
           cout<<"che elemento vuoi ricercare?"<< endl;
           cin>> num;
           if(ricerca(l,num))
           {
               cout<<"elemento trovato!"<< endl;
           }
           else
           {
               cout<<"elemento NON trovato"<< endl;
           }
        break;
       case 4:
           cout<<"elimino la lista"<< endl;
           l=elimina(l);
        break;
       case 5:
           cout<<"di quale numero vuoi contare le occorrenze?"<< endl;
           cin>> num;
           cout<<"le occorrenze di "<<num<<" sono: "<<occorrenza(l,num)<< endl;
        break;
       case 6:
           cout<<"di quale numero vuoi eliminare le occorrenze?"<< endl;
           cin>> num;
           l=elocc(l,num);
        break;
       case 7:
           cout<<"La somma di tutti i numeri nella lista e': "<<somma(l)<< endl;
        break;
       case 8:
           cout<<"stampo"<< endl;
           stampa(l);
        break;
       case 9:
           cout<<"stampo al contrario"<< endl;
           l=rewerse(l);
        break;
       case 10:
           cout<<"arrivederci"<< endl;
        break;
       default:
           cout<<"scelta errata"<< endl;
        break;
       }

   }while(scelta!=10);



    return 0;
}


void menu()
{
    cout<<"1)aggiungi in testa\n2)aggiungi in coda\n3)ricerca elemento\n4)elimina lista\n5)conta occorrenze"<< endl;
    cout<<"6)elimina occorrenze\n7)somma elementi lista\n8)stampa\n9)stampa al contrario\n10)esci"<< endl;
}

nodo*nelem(int a)
{
    nodo*q=new nodo;
    q->primo=a;
    q->next=NULL;
    return q;
}

nodo*intesta(nodo*p,int a)
{
    nodo*q=nelem(a);
    q->next=p;
    return q;
}

nodo*incoda(nodo*p,int a)
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

nodo*ricerca(nodo*p,int a)
{
    nodo*trovato;
    for(;p!=NULL && trovato==NULL;p=p->next)
    {
        if(p->primo==a)
        {
            trovato=p;
        }
    }
    return trovato;
}

nodo*elimina(nodo*p)
{
  nodo*tmp;
  for(;p!=NULL;p=tmp)
  {
      tmp=p->next;
      p->next=NULL;
      delete p;
  }
      return p;
}

int occorrenza(nodo*p,int a)
{
    int flag=0;
    if(p!=NULL)
    {
        if(p->primo==a)
        {
            flag=1+occorrenza(p->next,a);
        }
        else
        {
            flag=occorrenza(p->next,a);
        }
    }
    return flag;
}

nodo*elocc(nodo*p,int a)
{
    nodo*tmp=p;
    if(p!=NULL)
    {
        if(p->primo==a)
        {
            p=elocc(p->next,a);
            delete tmp;
        }
        else
        {
            p->next=elocc(p->next,a);
        }
    }
    return p;
}

int somma(nodo*p)
{
    int sum=0;
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
}

void stampa(nodo*p)
{
    while(p!=NULL)
    {
        cout<<"\n"<<p->primo<< endl;
        p=p->next;
    }
}

nodo*rewerse(nodo*p)
{
    if(p==NULL)
    {
        return 0;
    }
    rewerse (p->next);
    cout<<"\n"<<p->primo<< endl;
}


