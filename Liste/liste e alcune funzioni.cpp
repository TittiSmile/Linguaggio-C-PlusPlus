#include <iostream>
using namespace std;

typedef struct LISTA
{
    int primo;
    struct LISTA *next;
}nodo;

void menu();
struct LISTA *nelem (int a);
struct LISTA *intesta(struct LISTA *p,int a);
struct LISTA *incoda(struct LISTA *p,int a);
struct LISTA *ricerca (struct LISTA *p,int a);
struct LISTA *elimina (struct LISTA *p);
void stampa(struct LISTA *p);
struct LISTA *rewerse(struct LISTA *p);
struct LISTA *inordine(struct LISTA *p,struct LISTA *tmp);
struct LISTA *crescente(struct LISTA *p);
int somma(struct LISTA *p);
int noccr (struct LISTA *p,int a);
struct LISTA *elocc(struct LISTA *p,int a);



int main ()
{
    struct LISTA *lol=NULL;
    int scelta;
    int num;

    menu();

    do
    {
        cout<<"\n\tInserisci la tua scelta"<< endl;
        cin>>scelta;

    switch(scelta)
    {
         case 1:
             cout<<"Digitare il numero da inserire in testa"<< endl;
             cin>> num;
             lol=intesta(lol,num);
            break;
         case 2:
             cout<<"Digitare il numero da inserire in coda"<< endl;
             cin>>num;
             lol=incoda(lol,num);
            break;
         case 3:
             cout<<"Digitare il numero da ricercare"<< endl;
             cin>>num;
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
             cout<<"Eliminazione della lista"<< endl;
             lol=elimina(lol);
             cout<<"Lista ELIMINATA"<< endl;
            break;
         case 5:
             cout<<"Stampa della lista"<< endl;
             stampa(lol);
             if(lol==NULL)
             {
                 cout<<"Lista VUOTA!"<< endl;
             }
            break;
         case 6:
             cout<<"Stampo al contrario"<< endl;
             lol=rewerse(lol);
             if(lol==NULL)
             {
                 cout<<"Lista VUOTA!"<< endl;
             }
            break;
         case 7:
             cout<<"Metto i numeri in ordine CRESCENTE"<< endl;
             lol=crescente(lol);
              if(lol==NULL)
              {
                  cout<<"Lista VUOTA!"<< endl;
              }
            break;
         case 8:
             cout<<"Sommo tutti gli elementi sulla lista"<< endl;
            cout<<"La somma degli elementi e' "<<somma(lol)<< endl;
            if(lol==NULL)
            {
                cout<<"Lista VUOTA!"<< endl;
            }
            break;
         case 9:
             cout<<"Di quale numero vuoi contare le occorrenze?"<< endl;
             cin>>num;
             cout<<"il numero di occorrenze di "<<num<<" e' "<<noccr(lol,num)<< endl;
             if(lol==NULL)
             {
                 cout<<"Lista VUOTA!"<< endl;
             }
            break;
         case 10:
             cout<<"Di quale occorrenza vuoi eliminare le occorrenze?"<< endl;
             cin>>num;
             lol=elocc(lol,num);
             if(lol==NULL)
             {
                 cout<<"Lista VUOTA!"<< endl;
             }
            break;
         case 11:
             cout<<"Arrivederci"<< endl;
            break;
         default:
            cout<<"Scelta errata"<<endl;
       }

    }while(scelta!=11);


    return 0;
}






void menu()
{
  cout<<"1)inserisci in testa\n2)inserisci in coda\n3)ricerca elemento\n4)elimina lista\n5)stampa lista\n6)lista al contrario";
  cout<<"\n7)lista in ordine crescente\n8)somma elementi lista\n9)numero di occorrenze\n10)elimina occorrenze\n11)esci"<< endl;
}


struct LISTA *nelem (int a)
{
 nodo*q=new nodo;
 q->primo=a;
 q->next=NULL;
 return q;
}

struct LISTA *intesta(struct LISTA *p,int a)
{
 nodo*q=nelem(a);
 q->next=p;
 return q;
}



struct LISTA *incoda(struct LISTA *p,int a)
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
 nodo *temp;
 for(;p!=NULL;p=temp)
 {
     temp=p->next;
     p->next=NULL;
     delete p;
 }
    return p;
}



void stampa(struct LISTA *p)
{
    while(p!=NULL)
    {
        cout<<"LISTA:\n"<< p->primo<< endl;
        p=p->next;
    }
}





struct LISTA *rewerse(struct LISTA *p)
{
 if(p==NULL)
        return 0;
 rewerse(p->next);
 cout<<p->primo<< endl;
}


struct LISTA *inordine(struct LISTA *p,struct LISTA *tmp)
{
    if(p==NULL || p->primo > tmp->primo) //è ordine crescente! questa funzione serve a dare l'input per la funzione successiva
    {
        tmp->next=p;
        p=tmp;
    }
    else
    {
        p->next=inordine(p->next,tmp);
    }
    return p;
}


struct LISTA *crescente(struct LISTA *p)
{
 struct LISTA *temp;
 struct LISTA *newlista=NULL;
 while(p!=NULL)
 {
     temp=p;
     p=p->next;
     newlista=inordine(newlista,temp);

 }
    return newlista;
}



int somma(struct LISTA *p)
{
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

    }
    else
    {
        flag=noccr(p->next,a);
    }
    return flag;
}


struct LISTA *elocc(struct LISTA *p,int a)
{
 struct LISTA *temp=p;

 if(p!=NULL)
 {
    if(p->primo==a)
      {
        p=elocc(p->next,a);
        delete temp;
      }
        else
        {
            p->next=elocc(p->next,a);
        }

 }

   return p;
}







