#include <iostream>
using namespace std;

typedef struct LISTA
{
    char primo;
    struct LISTA *next;
}nodo;

void menu();
struct LISTA *nelem (char a);
struct LISTA *intesta (struct LISTA *p,char a);
struct LISTA *incoda (struct LISTA *p,char a);
struct LISTA *ricerca (struct LISTA *p,char a);
struct LISTA *elimina(struct LISTA *p);
int noccr(struct LISTA *p,char a);
struct LISTA *elocc (struct LISTA *p,char a);
void stampa (struct LISTA *p);
struct LISTA *rewerse (struct LISTA *p);


int main ()
{
    char scelta;
    char c;
    struct LISTA *lol=NULL;

  menu();
    do
    {
        cout<<"\n\t\tInserire scelta"<< endl;
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
        cout<<"Quale elemento vuoi ricercare?"<< endl;
        cin>>c;
        lol=ricerca(lol,c);
        if(lol)  //va bene anche if (ricerca(lol,c))
        {
            cout<<"elemento trovato"<< endl;
        }
        else
        {
            cout<<"elemento NON trovato"<< endl;
        }
        break;
    case 'd':
        cout<<"Elimino la lista"<< endl;
        lol=elimina(lol);
        break;
    case 'e':
        cout<<"Di quale carattere vuoi contare le occorrenze?"<< endl;
        cin>> c;
        if(lol==NULL)
        {
            cout<<"Lista VUOTA!"<< endl;
        }
        else
        {
           cout<<"Le occorrenze di "<<c<<" sono: "<<noccr(lol,c)<< endl;
        }
        break;
    case 'f':
        cout<<"Quali occorrenze eliminare?"<< endl;
        cin>>c;
        lol=elocc(lol,c);
        if(lol==NULL)
        {
            cout<<"Lista VUOTA!"<< endl;
        }
        break;
    case 'g':
        cout<<"Stampo la lista"<< endl;
        stampa(lol);
        if(lol==NULL)
        {
            cout<<"Lista VUOTA!"<< endl;
        }
        break;
    case 'h':
        cout<<"Stampo al contrario"<< endl;
        lol=rewerse(lol);
        break;
    case 'i':
        cout<<"Arrivederci"<< endl;
        break;
    default:
        cout<<"Scelta errata."<< endl;
        break;
    }



    }while(scelta!='i');


    return 0;
}


void menu()
{
    cout<<"***MENU***"<<endl;
    cout<<"a)in testa\nb)in coda\nc)ricerca carattere\nd)elimina lista\ne)numero di occorrenze\nf)elimina occorrenze"<<endl;
    cout<<"g)stampa lista\nh)stampa al contrario\ni)esci"<<endl;
}

struct LISTA *nelem (char a)
{
 nodo*q=new nodo;
 q->primo=a;
 q->next=NULL;
 return q;
}

struct LISTA *intesta (struct LISTA *p,char a)
{
 nodo*q=nelem(a);
 q->next=p;
 return q;
}

struct LISTA *incoda (struct LISTA *p,char a)
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


struct LISTA *ricerca (struct LISTA *p,char a)
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


struct LISTA *elimina(struct LISTA *p)
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



int noccr(struct LISTA *p,char a)
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
            flag= noccr(p->next,a);
        }
    }
    return flag;

}


struct LISTA *elocc (struct LISTA *p,char a)
{
    nodo*flag;
    if(p!=NULL)
    {
        if(p->primo==a)
        {
            flag=p;
            p->next=NULL;
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






