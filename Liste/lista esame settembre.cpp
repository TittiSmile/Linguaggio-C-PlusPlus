#include <iostream>
using namespace std;

typedef struct LISTA
{
    int primo;
    struct LISTA *next;
}nodo;

void menu();
struct LISTA *nelem (int a);
struct LISTA *intesta (struct LISTA *p,int a);
struct LISTA *incoda (struct LISTA *p,int a);
struct LISTA *ricerca (struct LISTA *p,int a);
int somma(struct LISTA *p);
bool pari (struct LISTA *p);
struct LISTA *elimina (struct LISTA *p);
void *stampa (struct LISTA *p);
struct LISTA *primi (struct LISTA *p,int a);
//int primi (struct LISTA *p);
int ver_pri(struct LISTA *p);
struct LISTA *rewerse (struct LISTA *p);


int main ()
{
    int scelta,num;
    struct LISTA *lol=NULL;

    menu();
    do
    {
        cout<<"\n\t\tInserisci la tua scelta"<< endl;
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
            cout<<"Inserisci numero da ricercare"<< endl;
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
             cout<<"Verifico se la somma e' pari"<< endl;
            if(pari(lol))
             {
                 cout<<"true"<< endl;
             }
             else
             {
                 cout<<"false"<< endl;
             }
            break;
        case 5:
            cout<<"Elimino la lista"<< endl;
            lol=elimina(lol);
            break;
        case 6:
            cout<<"Stampo la lista"<< endl;
            stampa(lol);
            break;
        case 7:
            cout<<"Verifico numeri primi"<< endl;

            break;
        case 8:
            cout<<"Stampo al contrario"<< endl;
            lol=rewerse(lol);
            break;
        case 9:
         cout<<"Arrivederci"<< endl;
            break;
        default:
            cout<<"Scelta errata."<< endl;
            break;
        }


    }while(scelta!=9);


    return 0;
}


void menu()
{
    cout<<"***MENU***"<< endl;
    cout<<"1)in testa\n2)in coda\n3)ricerca\n4)verifica pari\n5)elimina\n6)stampa"<< endl;
    cout<<"7)lista numeri primi\n8)stampa al contrario\n9)esci"<< endl;

}
struct LISTA *nelem (int a)
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


int somma(struct LISTA *p)
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


bool pari (struct LISTA *p)
{
    bool flag=true;
  int par;
  par=somma(p);
    if(par%2!=0)
    {
      flag=false;
    }
    else
    {
      flag=true;
    }
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


void *stampa (struct LISTA *p)
{
    while(p!=NULL)
    {
        cout<<"Lista:\n"<<p->primo<< endl;
        p=p->next;
    }
}

int ver_pri(struct LISTA *p)
{
    int ris;
    if(p==NULL)
    {
        return 0;
    }
    else
    {
        ris=ver_pri(p->next);
       // ris=p->primo%2;
        return ris;
    }



}



struct LISTA *primi (struct LISTA *p)
//int primi (struct LISTA *p)
{
    /*nodo*temp;
    for(;p!=NULL;p=temp)
    {
        temp=p->next;
        p->next=NULL;
        delete p;
    }
    return p;*/
                 /* nodo* var;

  if(p==NULL)
  {
      return 0;
  }
  else
  {
      var=primi(p->next);
      var=(p->primo)%2;

      if(var==0)
     {
        delete var;
     }

      else
      {
       return var;
      }
  }

  /*

  var=primi(p->next);
  var=p->primo%2;
  if(var==0)
    delete var;
  else
   return var;

  */

int itr;
itr=ver_pri(p);
if(itr%2==0)
{
 delete itr;
}
else
{
    return itr;
}
/////////////////////////TO BE CONTINUED...
}





struct LISTA *rewerse (struct LISTA *p)
{
 if(p==NULL)
    return 0;
 rewerse(p->next);
 cout<<p->primo<< endl;
}



