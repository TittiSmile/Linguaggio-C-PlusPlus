#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;

typedef struct LISTA
{
    char nome;
    struct LISTA *next;
}nodo;

void menu();
struct LISTA *nuovonome(char a);
struct LISTA *intesta (struct LISTA *p,char a);
struct LISTA *incoda (struct LISTA *p,char a);
struct LISTA *ricerca (struct LISTA *p,char a);
struct LISTA *elimina (struct LISTA *p);
void stampa (struct LISTA *p);

int main ()
{
 char scelta;
 char nome[100];
 struct LISTA *lol=NULL;
 struct LISTA *tmp=NULL;

menu();
do{
    cout<<"Inserie scelta"<< endl;
    cin>> scelta;

    switch(scelta)
    {
    case 'a':
        cout<<"Inserisci un nome in testa"<< endl;
        cin>>nome;
        for(int i=0;i<strlen(nome);i++)
        {
             lol=intesta(lol,nome[i]);
        }
        break;
    case 'b':
        cout<<"Inserisci un nome in coda"<< endl;
        cin>> nome;
        for(int i=0;i<strlen(nome);i++)
        {
             lol=incoda(lol,nome[i]);
        }
        break;
    /*case 'c':
        cout<<"Digitare nome da ricercare"<< endl;
        cin>> nome;
        tmp=lol;
        tmp=ricerca(lol,nome);
        if(tmp!=NULL)
        {
            cout<<"Trovato"<< endl;
        }
        else
        {
            cout<<"NON trovato" << endl;
        }
        break;*/
    case 'd':
        cout<<"Hai deciso di eliminare la lista"<< endl;
        lol=elimina(lol);
        break;
    case 'e':
        cout<<"Stampa la lista" << endl;
        stampa(lol);
        break;
    case 'f':
        cout<<"Arrivederci" << endl;
        break;
    default:
        cout<<"Scelta non valida." << endl;
        break;
    }
}while(scelta!='f');

    return 0;
}


void menu()
{
    cout<<"\t\t****MENU****"<< endl;
    cout<<"\t\ta)Inserisci in testa\n\t\tb)inserisci in coda\n\t\tc)Ricerca\n\t\td)Elimina\n\t\te)Stampa\n\t\tf)Esci"<< endl;

}

struct LISTA *nuovonome(char a)
{
 nodo*q=new nodo;
 q->nome=a;
 q->next=NULL;
 return q;
}


struct LISTA *intesta (struct LISTA *p,char a)
{
 nodo*q=nuovonome(a);
 q->next=p;
 return q;
}


struct LISTA *incoda (struct LISTA *p,char a)
{
 nodo*q=nuovonome(a);
 nodo*temp;
 if(p!=NULL)
 {
     for (temp=p; temp->next!=NULL; temp=temp->next)
     {
         temp->next=q;
     }
 }
 else
 {
     p=q;
 }
   return p;
}
struct LISTA *ricerca (struct LISTA *p,char a)
{
 nodo*trovato=NULL;
   for(;p!=NULL && trovato==NULL;p=p->next)
   {
       if(p->nome==a)
       {
           trovato=p;
       }
   }
    return trovato;
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
}



void stampa (struct LISTA *p)
{
    while(p!=NULL)
    {
        cout<<"LISTA:\n"<< p->nome<< endl;
        p=p->next;
    }
}

