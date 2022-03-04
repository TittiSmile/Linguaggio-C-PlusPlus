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
nodo* rewerse(nodo*p);


int main ()
{
    nodo*l=NULL;
    int scelta,num;

    menu();
    do
    {
        cout<<"\t\tDigitare la scelta"<< endl;
        cin>> scelta;
        switch(scelta)
        {
        case 1:
            cout<<"inserire numero in testa"<< endl;
            cin>> num;
            l=intesta(l,num);
            break;
        case 2:
            cout<<"inserire numero in coda"<< endl;
            cin>> num;
            l=incoda(l,num);
            break;
        case 3:
            cout<<"che numero vuoi ricercare?"<< endl;
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
            cout<<"elimino TUTTA la lista"<< endl;
            l=elimina(l);

            break;
        case 5:
           cout<<"Di quale numero vuoi contare le occorrenze?"<< endl;
            cin>> num;
            cout<<"le occorrenze di "<<num<<" sono: "<<occorrenza(l,num)<< endl;

            break;
        case 6:
            cout<<"di quale numero vuoi eliminare le occorrenze?"<< endl;
            cin>> num;
            l=elocc(l,num);
            cout<<"ho eliminato le occorrenze di "<<num<< endl;
            break;
        case 7:
            cout<<"sommo tutti gli elementi della lista"<< endl;
            cout<<"somma:   "<<somma(l)<< endl;
            break;
        case 8:
            cout<<"stampo la lista "<< endl;
            stampa(l);
            if(l==NULL)
            {
                cout<<"Lista vuota!"<< endl;
            }
            break;
        case 9:
            cout<<"stampo la lista al contrario "<< endl;
            rewerse(l);
            if(l==NULL)
            {
                cout<<"lista vuota!"<< endl;
            }
            break;
        case 10:
            cout<<"arrivederci"<< endl;
            break;
        default:
            cout<<"scelta errata"<< endl;
            break;
        }

    }while(scelta != 10);


    return 0;
}

void menu()
{
    cout<<"1)aggiungi in testa\n2)aggiungi in coda\n3)ricerca elemento\n4)elimina\n5)cerca occorrenza\n6)elimina occorrenza"<<endl;
    cout<<"7)somma elementi lista\n8)stampa\n9)stampa al contrario\n10)esci"<< endl;
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
          /* tmp=p;
           p=p->next;
           delete tmp;*/
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
       cout<<"\n\n"<<p->primo<< endl;
       p=p->next;
   }
}

nodo* rewerse(nodo*p)
{
    if(p==NULL)
        return 0;
    rewerse(p->next);
    cout<<"\n\n"<<p->primo<< endl;
}



