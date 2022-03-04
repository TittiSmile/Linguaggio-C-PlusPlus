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
bool  pari (struct LISTA *p);
struct LISTA *elimina (struct LISTA *p);
void stampa (struct LISTA *p);
struct LISTA *primi (struct LISTA *p,int a);
struct LISTA *rewerse (struct LISTA *p);


int main ()
{
    int scelta,n;
    struct LISTA *lol=NULL;

    menu();

    do
    {
        cout<<"\tScegli l'operazione"<< endl;
        cin>> scelta;

        switch(scelta)
        {
        case 1:
            cout<<"Inserisci in testa"<< endl;
            cin>> n;
            lol=intesta(lol,n);
            break;
        case 2:
            cout<<"inserisci in coda"<< endl;
            cin>> n;
            lol=incoda(lol,n);

            break;
        case 3:
            cout<<"ricerca"<< endl;
            cin>> n;
            lol=ricerca(lol,n);

            break;
        case 4:
            cout<<"verifica che la somma dei numeri sia pari"<< endl;
             if(pari(lol))
               cout<<"TRUE"<< endl;
             else
                cout<<"FALSE"<< endl;


            break;
        case 5:
            cout<<"elimina"<< endl;
            lol=elimina(lol);
            break;
        case 6:
            cout<<"stampa"<< endl;
           if(lol==NULL)
           {
               cout<<"LISTA VUOTA"<< endl;
           }
           else
            {
               stampa(lol);
            }

            break;
        case 7:
            cout<<"elimina i numeri NON primi"<< endl;

            break;
        case 8:
            cout<<"Stampa al contrario"<< endl;
            lol=rewerse(lol);
            break;
        case 9:
            cout<<"arrivederci"<< endl;
            break;
        default:
            cout<<"\t\tscelta NON valida"<< endl;
            break;
        }
    }while(scelta!=9);

    return 0;
}


void menu()
{
    cout<<"***MENU***"<<endl;
    cout<<"1)in testa\n2)in coda\n3)ricerca\n4)parita'\n5)elimina\n6)stampa\n7)primi\n8)reverse\n9)esci\n********"<<endl;
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
    /*nodo*q=nelem(a);
    nodo*temp;
    if(p!=NULL)
    {
        for(temp=p;temp->next!=NULL;temp=temp->next)
            {temp->next=q;}
    }
    else
    {
        p=q;
    }

    return p;*/
    ///////////////////N.B.///////////////////////
    /////NON SO PERCHè MA IN MODO ITERATIVO NON FUNZIONA. PER QUESTO HO USATO LA FUNZIONE RICORSIVA//////

nodo*q;
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
    nodo *trovato=NULL;
  for(;p!=NULL && trovato==NULL;p=p->next)
  {
      if(p->primo==a)
      {
         trovato=p;
         cout<<"elemento trovato"<< endl;
      }
      else
      {
          cout<<"elemento NON trovato"<< endl;
      }
  }
  return trovato;

}

bool pari (struct LISTA *p)
{
    bool flag=true;

        if((p->primo+p->next->primo) /2 != 0)
          flag=false;

          else
            flag=pari(p->next);

return flag;
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
   while(p!=NULL)
    {
        cout<<"LISTA: "<<p->primo <<endl;
        p=p->next;
    }
}


struct LISTA *primi (struct LISTA *p,int a)
{
 while(p!=NULL)
 {
     if((p->primo/2)!=0)
     {

     }
 }


}


struct LISTA *rewerse (struct LISTA *p)
{
   if(p==NULL)
     return 0;

    rewerse (p->next);
     cout<<p->primo<< endl;

}

