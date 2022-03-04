#include <iostream>
using namespace std;

typedef struct LISTA
{
    char primo;
    struct LISTA *next;
}nodo;

void menu();
struct LISTA *nelem(char a);
struct LISTA *intesta (struct LISTA*p,char a);
struct LISTA *incoda (struct LISTA*p,char a);
struct LISTA *ricerca (struct LISTA*p,char a);
struct LISTA *elimina (struct LISTA*p);
int occr (struct LISTA *p,char a);
struct LISTA *elocc (struct LISTA*p,char a);
bool vocali (struct LISTA *p);
void stampa (struct LISTA *p);
struct LISTA *rewerse (struct LISTA *p);


int main()
{
    char scelta;
    char c;
    struct LISTA *lol=NULL;

    menu();
    do
    {
        cout<<"\n\t\tDigitare scelta"<< endl;
        cin>> scelta;

        switch(scelta)
        {
        case 'a':
            cout<<"Inserisci in testa"<< endl;
            cin>> c;
            lol=intesta(lol,c);
            break;
        case 'b':
         cout<<"Inserisci in coda"<< endl;
         cin>> c;
         lol=incoda(lol,c);
            break;
        case 'c':
            cout<<"Quale carattere vuoi ricercare?"<< endl;
            cin>>c;
            lol=ricerca(lol,c);
            if(ricerca(lol,c))
            {
                cout<<"Trovato"<< endl;
            }
            else
            {
                cout<<"NON trovato"<< endl;
            }
            break;
        case 'd':
            cout<<"Elimino la lista"<< endl;
            lol=elimina(lol);
            break;
        case 'e':
            cout<<"Di quale numero vuoi contare le occorrenze?"<< endl;
            cin>> c;
            if(lol==NULL)
            {
                cout<<"Lista VUOTA!"<< endl;
            }
            else
            {
              cout<<"Il numero di occorrenze di "<<c <<" e' "<<occr(lol,c)<<endl;
            }
            break;
        case 'f':
          cout<<"Quale occorrenza vuoi eliminare?"<< endl;
          cin>>c;
          if(lol==NULL)
          {
              cout<<"Lista VUOTA!"<< endl;
          }
          else
          {
              lol=elocc(lol,c);
          }
          break;
        case 'g':
            cout<<"Verifico se ci sono vocali nella lista"<< endl; //////////////////////////////**
           if( vocali(lol))
           {
               cout<<"true"<<endl;
           }
           else
           {
               cout<<"false"<<endl;
           }

            break;
        case 'h':
            cout<<"Stampo la lista"<< endl;
            stampa(lol);
            if(lol==NULL)
            {
                cout<<"Lista VUOTA!"<< endl;
            }
            break;
          case 'i':
              cout<<"Stampo lista al contrario"<< endl;
              lol=rewerse(lol);
              if(lol==NULL)
              {
                  cout<<"Lista VUOTA!"<< endl;
              }
            break;
        case 'j':
         cout<<"Arrivederci"<< endl;
            break;
        default:
            cout<<"Scelta errata"<< endl;
            break;
        }

    }while(scelta!= 'j');


    return 0;
}





void menu()
{
    cout<<"***MENU***"<< endl;
    cout<<"a)in testa\nb)in coda\nc)ricerca\nd)elimina lista\ne)conta occorrenze\nf)elimina occorrenze"<< endl;
    cout<<"g)verifica vocali\nh)stampa\ni)stampa al contrario\nj)esci"<< endl;
}

struct LISTA *nelem(char a)
{
 nodo*q=new nodo;
 q->primo=a;
 q->next=NULL;
 return q;
}


struct LISTA *intesta (struct LISTA*p,char a)
{
 nodo*q=nelem(a);
 q->next=p;
 return q;
}


struct LISTA *incoda (struct LISTA*p,char a)
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

struct LISTA *ricerca (struct LISTA*p,char a)
{
 nodo*trovato=NULL;
 for(;p!=NULL && trovato==NULL;p=p->next)
 {
     if(p->primo==a)
     {
         trovato=p;
     }
 }
    return trovato;

}

struct LISTA *elimina (struct LISTA*p)
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

int occr (struct LISTA *p,char a)
{
    int flag=0;
    if(p!=NULL)
    {
        if(p->primo==a)
        {
            flag=1+occr(p->next,a);
        }
        else
        {
            flag=occr(p->next,a);
        }

    }
return flag;
}

struct LISTA *elocc (struct LISTA*p,char a)
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


bool vocali (struct LISTA *p)
{
    bool flag;
    if(p!=NULL)
    {
        if(p->primo=='a' || 'e' || 'i' || 'o' || 'u')
        {
            flag=true;
        }
        else
        {
            flag=false;
        }
    }
return flag;


}


void stampa (struct LISTA *p)
{
    while(p!=NULL)
    {
        cout<<"Lista:\n"<<p->primo<< endl;
        p=p->next;
    }
}

struct LISTA *rewerse (struct LISTA *p)
{
    if(p==0)
        return 0;
    rewerse(p->next);
    cout<<p->primo<< endl;
}
















