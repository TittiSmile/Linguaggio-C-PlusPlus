#include <iostream>
using namespace std;
/// il programma pare NON avere problemi. edit: ci sono solo problemi di stampa, le funzioni sono corrette
typedef struct LISTA
{
    int primo;
    struct LISTA *next;
}nodo;

void menu();
nodo*nelem(int a); ///scrivo nodo per semplificare ma è IDENTICO a scrivere struct LISTA
nodo*intesta(nodo*p,int a);
nodo*incoda(nodo*p,int a);
nodo*ricerca(nodo*p,int a);
nodo*elimina(nodo*p);
nodo*alterna(nodo*l1,nodo*l2);
nodo*unisci(nodo*l1,nodo*l2);
nodo*interseca(nodo*l1,nodo*l2);
void stampa(nodo*p);

int main ()
{
    nodo*l1=NULL;
    nodo*l2=NULL;
    nodo*l3=NULL;
    int scelta,num,dim,dom,nem;

  cout<<"quanto vuoi grande la lista 1?"<< endl;
  cin>> dim;
  cout<<"quanto vuoi grande la lista 2?"<< endl;
  cin>> dom;

  for(int i=0;i<dim;i++)
  {
      cout<<"inserisci "<<i+1<<" elemento" <<endl;
      cin>> num;
      l1=incoda(l1,num);
  }

  for(int i=0;i<dom;i++)
  {
      cout<<"inserisci "<<i+1<<" elemento" <<endl;
      cin>> nem;
      l2=incoda(l2,nem);
  }


  menu();
  do
  {

      cout<<"cosa vuoi fare?"<< endl;
      cin>> scelta;
      switch (scelta)
      {
          case 1:
              cout<<"stampiamo gli elementi delle liste in modo ALTERNATO"<< endl;
              l3=alterna(l1,l2);
              stampa(l3);
            break;
          case 2:
              cout<<"stampiamo gli elementi delle liste in modo UNITO"<< endl;
              l3=unisci(l1,l2);
              stampa(l3);
            break;
          case 3:
              cout<<"stampiamo gli elementi delle liste in modo INTERSECATO"<< endl;
              l3=interseca(l1,l2);
              stampa(l3);
            break;
          case 4:
              cout<<"arrivederci"<< endl;
            break;
          default:
              cout<<"errore"<< endl;
            break;
      }
  }while(scelta!=4);



    return 0;
}




void menu()
{
 cout<<"\n\n1) alterna elementi delle due liste\n2)unisci elementi delle due liste\n3)interseca elementi delle due liste"<< endl;
 cout<<"4)esci"<< endl;
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
    if (p==NULL)
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

nodo*alterna(nodo*l1,nodo*l2)
{
    nodo*l3=l1;
    if(l1==NULL)
    {
        return l2;
    }
    if(l2==NULL)
    {
        return l1;
    }
    else
    {
     l2->next=alterna(l1->next,l2->next);
     l3->next=l2;
    }
    return l3;
}

nodo*unisci(nodo*l1,nodo*l2)
{
    nodo*l3;
    if(l1==NULL)
    {
        return l2;
    }
    else if(l2==NULL)
    {
        return l1;
    }
    else if(l1->primo < l2->primo)
    {
        l3=l1;
        l3=unisci(l1->next,l2);
    }
    else
    {
        l3=l2;
        l3=unisci(l1,l2->next);
    }
    return l3;
}

nodo*interseca(nodo*l1,nodo*l2)
{
    nodo*l3=NULL;
    if(l1)
    {
        l3=interseca(l1->next,l2);
        if(ricerca(l2,l1->primo))
        {
            l3=intesta(l3,l1->primo);
        }
    }
    return l3;
}

void stampa(nodo*p)
{
    while(p!=NULL)
    {
        cout<<"\n\n "<<p->primo<<endl;
        p=p->next;
    }
}

