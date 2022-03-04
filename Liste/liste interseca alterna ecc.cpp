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
nodo*alterna(nodo*l1,nodo*l2);
nodo*unisci(nodo*l1,nodo*l2);
nodo*interseca(nodo*l1,nodo*l2);
void stampa(nodo*p);
nodo*rewerse(nodo*p);



int main ()
{
    nodo*l1=NULL;
    nodo*l2=NULL;
    nodo*l3=NULL;
   int dim,dom,num,mun,scelta;

   cout<<"quanto vuoi grande la lista 1?"<< endl;
   cin>>dim;
   cout<<"quanto vuoi grande la lista 2?"<< endl;
   cin>>dom;

   for(int i=0;i<dim;i++)
   {
       cout<<"inserisci "<<i+1<<" numero nella lista 1" <<endl;
       cin>> num;
       l1=incoda(l1,num);
   }

   for(int i=0;i<dom;i++)
   {
       cout<<"inserisci "<<i+1<<" numero nella lista 2"<< endl;
       cin>> mun;
       l2=incoda(l2,mun);
   }

   cout<<"la lista 1 e': "<< endl;
   stampa(l1);
   cout<<"la lista 2 e': "<< endl;
   stampa(l2);

   do
   {
       menu();
       cout<<"\n\tDigitare la scelta"<< endl;
       cin>> scelta;
       switch(scelta)
       {
       case 1:
           cout<<"alterno gli elementi delle liste"<< endl;
           l3=alterna(l1,l2);
           stampa(l3);
        break;
       case 2:
          cout<<"unisco gli elementi delle liste"<< endl;
           l3=unisci(l1,l2);
           stampa(l3);
        break;
       case 3:
           cout<<"interseco gli elementi comuni delle due liste"<< endl;
           l3=interseca(l1,l2);
           stampa(l3);
        break;
       case 4:
           cout<<"elimino le liste"<< endl;
           l1=elimina(l1);
           l2=elimina(l2);
           l3=elimina(l3);
        break;
       case 5:
           cout<<"arrivederci"<< endl;
        break;
       default:
           cout<<"scelta errata"<< endl;
        break;
       }


   }while(scelta!=5);


return 0;
}




void menu()
{
    cout<<"\n1)alterna elementi delle liste\n2)unisci elementi delle liste\n3)interseca elementi\n4)elimina liste\n5)esci"<< endl;
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

nodo*alterna(nodo*l1,nodo*l2)
{
    nodo*l3=l1;
    if(l1==NULL)
    {
        return l2;
    }
    else if(l2==NULL)
    {
        return l1;
    }
    else
    {
        l2->next=alterna(l1->next,l2->next);
        l3=l2->next;
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
        l3->next=unisci(l1->next,l2);
    }
    else
    {
        l3=l2;
        l3->next=unisci(l1,l2->next);
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
        cout<<"\n\n "<<p->primo<< endl;
        p=p->next;
    }
}

nodo*rewerse(nodo*p)
{
    if(p==NULL)
    {
        return 0;
    }
    rewerse(p->next);
    cout<<"\n\n "<< p->primo<< endl;
}





