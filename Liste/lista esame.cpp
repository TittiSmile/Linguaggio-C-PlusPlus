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
bool verifica(struct LISTA *p);


int main ()
{
   int scelta,num;
   struct LISTA *lol=NULL;


   menu();
   do
   {
       cout<<"\n\t\tInserisci la scelta"<<endl;
       cin>>scelta;

     switch(scelta)
     {
     case 1:
         cout<<"Inserisci un numero in testa"<<endl;
         cin>> num;
         lol=intesta(lol,num);
        break;
     case 2:
         cout<<"Inserisci un numero in coda"<<endl;
         cin>>num;
         lol=incoda(lol,num);
        break;
     case 3:
         cout<<"Inserisci elemento da ricercare"<<endl;
         cin>> num;
         lol=ricerca(lol,num);
         if(ricerca(lol,num))
         {
            cout<<"elemento trovato"<<endl;
         }
         else
         {
             cout<<"elemento NON trovato"<<endl;
         }
        break;
     case 4:
         cout<<"Elimino lista"<<endl;
         lol=elimina(lol);
        break;
     case 5:
       cout<<"Di quale numero vuoi le occorrenze"<<endl;
        cin>>num;
        cout<<"il numero di occorrenze e' "<<noccr(lol,num)<<endl;
        break;
     case 6:
         cout<<"Di quale numero vuoi eliminare l'occorrenza?"<<endl;
         cin>>num;
         lol=elocc(lol,num);

        break;
     case 7:
         cout<<"Stampo la lista"<<endl;
         stampa(lol);
         if (lol==NULL)
         {
             cout<<"Lista VUOTA"<<endl;
         }
        break;
     case 8:
         cout<<"Stampo al contrario"<<endl;
         lol=rewerse(lol);
        break;
     case 9:
         cout<<"Hai scelto di verificare la somma"<< endl;
         if(verifica(lol))
         {
             cout<<"true"<< endl;
         }
         else
         {
             cout<<"false"<< endl;
         }
        break;
    case 10:
         cout<<"Arrivederci"<< endl;
        break;
     default:
         cout<<"scelta errata."<< endl;
        break;
     }

   }while(scelta!=10);




    return 0;
}


void menu()
{
    cout<<"***MENU***"<<endl;
    cout<<"1)in testa\n2)in coda\n3)ricerca\n4)elimina lista\n5)numero occorrenze\n6)elimina occorrenze"<<endl;
    cout<<"7)stampa\n8)stampa rewerse\n9)verifica se un elemento(dal terzo) e' somma dei due precedenti\n10)esci"<<endl;
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
 //uso la ricorsiva

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
    nodo* trovato=NULL;
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
         p=p->next;
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
        cout<<"Lista:\n"<< p->primo<< endl;
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

bool verifica(struct LISTA *p)
{
    bool flag=true;
    if(p!=NULL && p->next!=NULL && p->next->next!=NULL)
    {
        if(p->primo+p->next->primo!= p->next->next->primo)
        {
          flag=false;
        }
        else
        {
            flag=verifica(p->next);
        }
    }

    return flag;

}





