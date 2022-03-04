#include <iostream>
#define max 51
using namespace std;
typedef struct LISTA
{
    char primo[max];
    struct LISTA *next;
}nodo;

void menu();
bool compare(char*a,char*b);
bool controllo(char*a,char*b);
void copia(char*a,char*b);
nodo*aggiungi(nodo*p,char*a);
nodo*intesta(nodo*p,char*a);
nodo*elimina(nodo*p,char*a);
void stampa(nodo*p);


int main ()
{
   nodo*l=NULL;
   char s[max];
   int scelta;

   menu();
   do
   {
       cout<<"\t\t cosa scegli?"<< endl;
       cin>> scelta;

       switch(scelta)
       {
       case 1:
           cout<<"inserisci una stringa"<< endl;
           cin>> s;
           l=aggiungi(l,s);
        break;
       case 2:
           cout<<"quale occorrenza eliminare?"<< endl;
           cin>> s;
           l=elimina(l,s);
        break;
       case 3:
           cout<<"stampo"<< endl;
            stampa(l);
        break;
       case 4:
           cout<<"arrivederci"<< endl;
        break;
       default:
           cout<<"scelta errata"<< endl;
        break;



       }

   }while(scelta!=4);


    return 0;
}

void menu()
{
    cout<<"1)aggiungi una stringa S\n2)elimina occorrenze\n3)stampa\n4)esci"<< endl;
}

bool compare(char*a,char*b)
{
    int i=0;
    while(a[i]!='\0')
    {
        if(b[i]!=a[i])
        return false;
        i++;
    }
    return true;
}

bool controllo(char*a,char*b)
{
    bool flag=true;
    if(a[0]<b[0])
    {
        flag=false;
    }
    else if(a[0]==b[0])
    {
        flag=controllo(a+1,b+1);
    }
    return flag;
}

void copia(char*a,char*b)
{
    int i=0;
    while(b[i]!='\0')
    {
        a[i]=b[i];
        i++;
    }
    a[i]='\0';
}

nodo*aggiungi(nodo*p,char*a)
{
    if(p==NULL || (controllo(p->primo,a)==true))
    {
        p=intesta(p,a);
    }
    else
    {
        p->next=aggiungi(p->next,a);
    }
    return p;
}

nodo*intesta(nodo*p,char*a)
{
    nodo*q=new nodo;
    copia(q->primo,a);
    q->next=p;
    return q;
}

nodo*elimina(nodo*p,char*a)
{
    nodo*tmp=p;
    if(p!=NULL)
    {
        if(compare(p->primo,a)==1)
        {
            p=elimina(p->next,a);
            delete tmp;
        }
        else
        {
            p->next=elimina(p->next,a);
        }
    }
    return p;
}

void stampa(nodo*p)
{
    while(p!=NULL)
    {
        cout<<"\n"<<p->primo<< endl;
        p=p->next;
    }
}


