#include <iostream>
using namespace std;
typedef struct LISTA
{
    int primo;
    struct LISTA *next;
}nodo;

void menu();
struct LISTA *nuovoelem(int a);
struct LISTA *intesta (struct LISTA *p,int a);
struct LISTA *incoda (struct LISTA *p,int a);
struct LISTA *ricerca (struct LISTA *p,int a);
struct LISTA *elimina (struct LISTA *p);
void stampa (struct LISTA *p);

int main ()
{
    int scelta,num;
    struct LISTA *lol=NULL;
    menu();
   do
   {
       do
    {
        cout<<"\t___Che operazione vuoi fare?___" << endl;
        cin>> scelta;
        if(scelta<1 || scelta>6)
            cout<<"Errore,riprovare"<< endl;
    }while(scelta<1 || scelta>6);

       switch(scelta)
       {
       case 1:
           cout<<"Digitare il numero da inserire in testa"<< endl;
           cin>> num;
           lol=intesta(lol,num);
        break;
       case 2:
           cout<<"Digitare il numero da inserire in coda"<< endl;
           cin>> num;
           lol=incoda(lol,num);
        break;
       case 3:
           cout<<"Digitare il numero da ricercare" << endl;
           cin>> num;
           lol=ricerca(lol,num);
        break;
       case 4:
           cout<<"Hai deciso di eliminare la lista"<< endl;
           lol=elimina(lol);
        break;
       case 5:
           cout<<"Stampa la lista" << endl;
           if(lol==NULL)
           {
               cout<<"Lista vuota!"<< endl;
           }
           else
           {
              stampa(lol);
           }

        break;
       case 6:
           cout<<"Arrivederci"<< endl;
        break;
       }
   }while(scelta!=6);


    return 0;
}

void menu()
{
    cout<<"\t\t***MENU***"<< endl;
    cout<<"\t\t1)Inserisci in testa\n\t\t2)Inserisci in coda\n\t\t3)Ricerca elemento\n\t\t4)Elimina\n\t\t5)Stampa\n\t\t6)Esci"<< endl;
}

struct LISTA *nuovoelem(int a)
{
 nodo*q=new nodo;
 q->primo=a;
 q->next=NULL;
 return q;
}

struct LISTA *intesta (struct LISTA *p,int a)
{
 nodo*q=nuovoelem(a);
 q->next=p;
 //p=q;        //N.B. di norma,devi utilizzare il 'return q'(ovvero l'elemento che ora è in cima alla lista). se decidi di fare
 //return p;  //'p=q' rendi la cima q uguale alla cima p(vuota ma successivamente con un valore). in pratica, scrivere
              // p=q; return p;     E    return q;  sono la STESSA COSA!!!
return q;
}


struct LISTA *incoda (struct LISTA *p,int a)
{
 nodo*q=nuovoelem(a);
 nodo*temp;
 if(p!=NULL)
 {
     for(temp=p; temp->next!=NULL; temp=temp->next);
     temp->next=q;
 }
 else
    p=q;
    return p;
}


struct LISTA *ricerca (struct LISTA *p,int a)
{
 struct LISTA *trovato=NULL;
 for(;p!=NULL && trovato==NULL;p=p->next)
 {
     if(p->primo==a)
     {
         trovato=p;
         cout<<"Elemento trovato" << endl;
     }
     else
     {
         cout<<"Elemento NON trovato"<< endl;
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
    return p;
}

void stampa (struct LISTA *p)
{
    while(p!=NULL)
    {
        cout<<"Lista:\n " <<p->primo<<"   *    "<<endl;
        p=p->next;
    }


}
