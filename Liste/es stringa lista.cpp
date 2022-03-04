#include <iostream>
#define max 51
using namespace std;

typedef struct LISTA
{
    char primo[max];
    struct LISTA *next;
}nodo;

///N.B.! ho messo '*' anche al char (char*a) perchè si va a considerare una funzione basata su una stringa(array).
///se non metto '*' il programma non funziona perchè non riesce a passare il carattere nella stringa.
///esempio: funzione (char*s)     passa un vettore di caratteri (e quindi una stringa)
///         funzione(char*s)      passa solo un carattere
void menu();
nodo*intesta(nodo*p,char *a);
nodo*aggiungi (nodo*p,char *a);
nodo*elocc(nodo*p,char *a);   //elimina occorrenza

bool controllo(char *a,char *b);
bool compara(char *a,char *b);

void stampa(nodo*p);
void copia(char *a,char *b);


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
             cout<<"digitare la stringa"<< endl;
             cin>>s;
             l=aggiungi(l,s);
            break;
         case 2:
             cout<<"quale occorrenza eliminare?"<< endl;
             cin>> s;
             l=elocc(l,s);
            break;
         case 3:
             cout<<"stampo la lista"<< endl;
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
    cout<<"1)inserisci una stringa S\n2)elimina tutte le occorrenze di S in C\n3)stampa\n4)esci"<< endl;
}
nodo*intesta(nodo*p,char *a)
{
 nodo*q=new nodo;
 copia(q->primo,a);
 q->next=p;
 return q;

}


nodo*aggiungi (nodo*p,char *a)
{
    if(p==NULL || (controllo(p->primo,a)==true ))
    {
        p=intesta(p,a);
    }
    else
    //{
        p->next=aggiungi(p->next,a);
    //}
    return p;
}

nodo*elocc(nodo*p,char *a)
{
    /*
    nodo*tmp=p;
    if(p!=NULL)
    {
        if(p->primo==a)
        {
          p=elocc(p->next,a);
          delete tmp;
        }
        else
        {
         p->next=elocc(p->next,a);
        }
    }
    return p; /// una normale funzione elimina occorrenza
    */
    nodo*tmp=p;
        if(p!=NULL)
        {
            if(compara(p->primo,a)==1)
            {
                p=elocc(p->next,a);
                delete tmp;
            }
            else
            //{
                p->next=elocc(p->next,a);
            //}
        }
        return p;
}



bool controllo(char *a,char *b)
{
    bool flag=true;
    if(a[0]<b[0])
   // {
        flag=false;
    //}
    else if(a[0]==b[0])
    //{
        flag=controllo(a+1,b+1);
    //}
    return flag;

}


bool compara(char *a,char *b)
{
    int i=0;
    while(a[i]!='\0')
    {
        if(b[i]!=a[i])
        //{
            return false;
            i++;
        //}
    }
    return true;
}



void stampa(nodo*p)
{
    while(p!=NULL)
    {
        cout<<"\n"<<p->primo<< endl;
        p=p->next;
    }
}


void copia(char *a,char *b)
{
    int i=0;
    while(b[i]!='\0')
    {
        a[i]=b[i];
        i++;
    }
    a[i]='\0';

}




