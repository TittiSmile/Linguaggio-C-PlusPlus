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
struct LISTA *elimina (struct LISTA *p,int a);
int occorrenza (struct LISTA *p,int a);
struct LISTA *elimina_occorrenza (struct LISTA *p,int a);
void stampa (struct LISTA *p);
struct LISTA *rewerse (struct LISTA *p);
int somma(struct LISTA *p);


int main()
{
    int scelta;
    int num;
    struct LISTA *lol=NULL;

    menu();
    do
    {
        cout<<"\n\t\tDigitare la scelta"<< endl;
        cin>> scelta;

        switch(scelta)
        {
        case 1:
            cout<<"Inserisci in testa"<< endl;
            cin>>num;
            lol=intesta(lol,num);

            break;
        case 2:
            cout<<"Inserisci in coda"<< endl;
            cin>>num;
            lol=incoda(lol,num);

            break;
        case 3:
            cout<<"Ricerca elemento"<< endl;
            cin>>num;
            lol=ricerca(lol,num);
            if(ricerca(lol,num))
            {
                cout<<"Elemento trovato"<< endl;
            }
            else
            {
                cout<<"Elemento NON trovato"<< endl;
            }

            break;
        case 4:
            cout<<"Elimino la lista"<< endl;
            lol=elimina(lol,num);

            break;
        case 5:
            cout<<"di quale numero vuoi contare le occorrenze?"<< endl;
            cin>> num;
            if(lol==NULL)
            {
                cout<<"Lista VUOTA!"<< endl;
            }
            else
            {
                cout<<"Il numero di occorrenze di "<<num<<" e' "<<occorrenza(lol,num)<< endl;
            }
/*            cout<<"Conto le occorrenze"<< endl;
            occorrenza(lol,num);
            if(lol==NULL)
            {
                cout<<"Lista VUOTA!"<< endl;
            }
            else
            {
                cout<<"Il numero di occorrenze di "<<num<<" e' "<<occorrenza(lol,num)<< endl;
            }
            ////non so perchè ho fatto ciò ahahah
*/
        cout<<""<< endl;    break;
        case 6:
            cout<<"Quale occorrenza vuoi eliminare?"<< endl;
            cin>>num;
            lol=elimina_occorrenza(lol,num);
            if(lol==NULL)
            {
                cout<<"Lista VUOTA!"<< endl;
            }
            else
            {
                cout<<"Ho eliminato le occorrenze di "<<num<< endl;
            }

            break;
        case 7:
            cout<<"Stampo la lista"<< endl;
            stampa(lol);
             if(lol==NULL)
            {
                cout<<"Lista VUOTA!"<< endl;
            }
            break;
        case 8:
            cout<<"Stampo al contrario"<< endl;
            lol=rewerse(lol);
             if(lol==NULL)
            {
                cout<<"Lista VUOTA!"<< endl;
            }
            break;
        case 9:
            cout<<"Sommo tutti gli elementi"<< endl;
            somma(lol);
            if(lol==NULL)
            {
                cout<<"Lista VUOTA!"<< endl;
            }
            break;
        case 10:
            cout<<"Arrivederci"<< endl;
            break;
        default:
            cout<<"Scelta errata"<< endl;
            break;
        }


    }while(scelta!=10);




    return 0;
}


void menu()
{
    cout<<"***MENU***"<< endl;
    cout<<"1)in testa\n2)in coda\n3)ricerca\n4)elimina lista\n5)conta occorrenze"<< endl;
    cout<<"6)elimina occorrenze\n7)stampa\n8)stampa al contrario\n9)somma degli elementi della lista\n10)esci"<< endl;
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

struct LISTA *elimina (struct LISTA *p,int a)
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

int occorrenza (struct LISTA *p,int a)
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

struct LISTA *elimina_occorrenza (struct LISTA *p,int a)
{
 /*nodo*flag;
 if(p!=NULL)
 {
     if(p->primo==a)
     {
         flag=p->next;
         p->next=NULL;
         delete flag;
     }
     else
     {
         p->next=elimina_occorrenza(p->next,a);
     }
 }
 return flag;*/
///////////////////////////////////////////////  N.B.!!!!!
//con questo metodo,la funzione elimina occorrenza non funziona correttamente (dà problemi in stampa) meglio quella sotto!

nodo*temp=p;
if(p!=NULL)
{
    if(p->primo==a)
    {
        p=elimina_occorrenza(p->next,a);
        delete temp;
    }
    else
    {
        p->next=elimina_occorrenza(p->next,a);
    }

}
return p;

}

void stampa (struct LISTA *p)
{
    while(p!=NULL)
    {
        cout<<"Lista:\n"<<p->primo <<endl;
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
