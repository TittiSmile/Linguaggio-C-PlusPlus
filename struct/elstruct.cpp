#include <iostream>
#define max 51
using namespace std;
typedef struct LISTA
{
    char primo[max];
    struct LISTA *next;
}nodo;

void menu();
nodo*aggiungi(nodo*p,char *a);
nodo*intesta(nodo*p,char *a);
nodo*elimina(nodo*p,char *a);
bool controllo(char *a,char *b);
bool compare(char *a,char *b);
void copia(char*a,char *b);
void stampa(nodo*p);

int main ()
{
    nodo*l=NULL;
    char s[max];
    int scelta;

    menu();
    do
    {
        cout<<"\t\tCosa scegli?"<< endl;
        cin>> scelta;
        switch(scelta)
        {
        case 1:
            cout<<"aggiungi una stringa"<< endl;
            cin>>s;
            l=aggiungi(l,s);
            break;
        case 2:
            cout<<"di quale stringa eliminare le occorrenze?"<< endl;
            cin>> s;
            l=elimina(l,s);
            break;
        case 3:
            cout<<"stampo:"<< endl;
            stampa(l);
            break;
        case 4:
            cout<<"arrivederci"<< endl;
            break;
        default:
            cout<<"errore"<< endl;
            break;
        }

    }while(scelta!=4);


    return 0;
}


void menu()
{
    cout<<"1)inserisci stringa S\n2)elimina occorrenza\n3)stampa\n4)esci"<< endl;
}

nodo*aggiungi(nodo*p,char *a)
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

nodo*intesta(nodo*p,char *a)
{
    nodo*q=new nodo;
    copia(q->primo,a);
    q->next=p;
    return q;
}


nodo*elimina(nodo*p,char *a)
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

bool controllo(char *a,char *b)
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


bool compare (char *a,char *b)
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

void copia(char*a,char *b)
{
    int i=0;
    while(b[i]!='\0')
    {
        a[i]=b[i];
        i++;
    }
    a[i]='\0';
}

void stampa(nodo*p)
{
    while(p!=NULL)
    {
        cout<<"\n"<<p->primo<< endl;
        p=p->next;
    }
}




