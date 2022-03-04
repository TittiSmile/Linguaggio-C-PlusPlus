#include <iostream>
using namespace std;

typedef struct LISTA
{
    char primo;
    struct LISTA *next;
}nodo;

void menu();
struct LISTA *nelem(char a);
struct LISTA *intesta(struct LISTA *p,char a);
struct LISTA *incoda(struct LISTA *p,char a);
struct LISTA *elocc (struct LISTA *p,char a);
struct LISTA *elimina (struct LISTA *p);
void stampa (struct LISTA *p);
struct LISTA *ricerca_due (struct LISTA *p,char a,char b);
int indice (struct LISTA *p,char a,char b);
int mindist (struct LISTA *p,char a,char b);

int main ()
{
    char scelta;
    char x,y;
    int ind;
    struct LISTA *lol=NULL; //nome della lista
    //struct LISTA *temp=NULL; //lista 'temporanea'

menu();
    do
    {
        cout<<"\n\t\tche scelta vuoi fare?" << endl;
        cin>>scelta;

        switch(scelta)
        {
        case 'a':
            cout<<"inserisci in testa"<< endl;
            cin>>x;       ////N.B.! la variabile 'x' equivarrebbe alla mia semplice e solita 'a'
            lol=intesta(lol,x);
            break;
        case 'b':
            cout<<"inserisci in coda"<< endl;
            cin>> x;
            lol=incoda(lol,x);
            break;
        case 'c':
            cout<<"Inserisci un'occorrenza da eliminare"<< endl;
            cin>> x;
            lol=elocc(lol,x);
            break;
        case 'd':
            cout<<"elimina la lista"<< endl;
            lol=elimina(lol);
            break;
        case 'e':
            cout<<"stampa la lista"<< endl;
           if(lol==NULL)
           {
               cout<<"lista VUOTA"<< endl;
           }
           else
           {
            stampa(lol);
           }
            break;
        case 'f':
            cout<<"Inserisci due elementi da ricercare nella lista:\nPrimo carattere: ";
            cin>> x;
            cout<<"Secondo carattere: ";
            cin>>y;
           /* temp=lol;
            if(temp!=NULL)
            {
                cout<<"\nuno (o entrambi) dei due elementi è stato trovato"<< endl;
            }
            else
            {
                cout<<"\nNon sono stati trovati elementi"<< endl;
            }
            cout<<endl;*/
            lol=ricerca_due(lol,x,y);

            break;
        case 'g':
        cout<<"Inserisci i due caratteri da ricercare(indice)\nPrimo carattere: ";
        cin>> x;
        cout<<"Secondo carattere: ";
        cin>> y;
        ind=indice(lol,x,y);
        if(ind==-1)
        {
            cout<<"Nessun carattere e' presente nella lista"<< endl;
        }
        else
        {
         cout<<"L'indice della prima occorrenza e' "<<ind<< endl;
        }


            break;
        case 'h':
         cout<<"inserisci i due elementi"<< endl;
        cin>> x>> y;
        ind=mindist(lol,x,y);
        if(ind==-1)
        {
            cout<<"entrambi gli elementi NON sono presenti"<< endl;
        }
        else
        {
            cout<<"la distanza minima tra i due caratteri e' "<<ind<< endl;
        }
            break;
        case 'i':
            cout<<"Arrivederci"<< endl;
            break;
        default:
            cout<<"scelta errata."<< endl;
            break;
        }

    }while(scelta!='i');

    return 0;
}




void menu()
{
    cout<<"MENU"<< endl;
    cout<<"a)In testa\nb)In coda\nc)elimina tutte le occorrenze\nd)elimina lista\ne)stampa\nf)ricerca due elementi"<< endl;
    cout<<"g)indice caratteri\nh)minima distanza tra i due caratteri\ni)esci"<< endl;
}

struct LISTA *nelem(char a)
{
 nodo*q=new nodo;
 q->primo=a;
 q->next=NULL;
 return q;
}

struct LISTA *intesta(struct LISTA *p,char a)
{
 nodo*q=nelem(a);
 q->next=p;
 return q;
}

struct LISTA *incoda(struct LISTA *p,char a)
{
 ////uso il modo RICORSIVO
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

struct LISTA *elocc (struct LISTA *p,char a)
{
  nodo*flag=p;
  if(p!=NULL)
  {
      if(p->primo==a)
      {
          p=elocc(p->next,a);
          delete p;
      }
      else
      {
          p->next=elocc(p->next,a);
      }
  }
    return p;
}


struct LISTA *elimina (struct LISTA *p)
{
    nodo*temp;
    for (;p!=NULL;p=temp)
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
        cout<<"Lista: "<< p->primo<< endl;
        p=p->next;
    }
}


struct LISTA *ricerca_due (struct LISTA *p,char a,char b)
{
    ////Provo in modo iterativo
 nodo*trovato=NULL;
 /*for(;p!=NULL && trovato==NULL;p=p->next)
 {
     if(p->primo==a || p->primo==b)
     {
         trovato=p;
     }
 }
 return trovato;*/

 //RICORSIVO
 /*if(p!=NULL)
 {
     if(p->primo==a || p->primo==b)
     {
         trovato=p;
     }
     else
     {
        trovato=ricerca_due(p->next,a,b);
     }
 }
 return trovato;*/

 for(;p!=NULL && trovato==NULL;p=p->next)
 {
     if(p->primo==a || p->primo==b)
     {
         trovato=p;
         cout<<"elemento/i trovato"<< endl;
     }
     else
     {
         cout<<"NON trovati"<< endl;
     }
 }

}



int indice (struct LISTA *p,char a,char b)
{
 int indice=0;
 while(p!=NULL)
 {
    indice++;
    if(p->primo==a || p->primo==b)
    {
        return indice;
    }
    p=p->next;

 }
 return -1;

}


int mindist (struct LISTA *p,char a,char b)
{
  int indice=-1, distanza1=0, distanza2=0;
    while(p!=NULL && p->primo!=a){
        distanza1++;
        if(p->primo==p->next->primo){
            break;
        }
        p=p->next;
    }
    while(p!=NULL && p->primo!=b){
        distanza2++;
        if(p->primo==p->next->primo){
            break;
        }
        p=p->next;
    }
    if(distanza1>distanza2){
        indice=distanza1-distanza2;
    }
    else{
        indice=distanza2-distanza1;
    }
    return indice;
}










