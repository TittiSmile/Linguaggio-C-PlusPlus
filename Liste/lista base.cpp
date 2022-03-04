#include <iostream>
using namespace std;

typedef struct LISTA
{
  int primo;
  struct LISTA *next;
}nodo;

void menu();
struct LISTA *nuovoelem (int a);
struct LISTA *intesta (struct LISTA *p,int a);
struct LISTA *incoda (struct LISTA *p,int a);
struct LISTA *elimina (struct LISTA *p);
void stampa (struct LISTA *p);


int main ()
{

int scelta,valore,num;
struct LISTA *lits=NULL; //nome lista
do
{

   menu();
   do
   {
       cout<<"\nScegliere l'operazione da compiere"<< endl;
       cin>>scelta;
           if (scelta<1 || scelta >5)
           {
               cout<<"Errore,riprovare"<< endl;
           }
   }while(scelta<1 || scelta >5);

           switch (scelta)
           {
           case 1:
               cout<<"|In testa|:\t Inserire numero"<< endl;
               cin>>num;
               lits=intesta(lits,num);
            break;
           case 2:
               cout<<"|In coda|:\t Inserire numero"<< endl;
               cin>>num;
               lits=incoda(lits,num);
            break;
           case 3:
               cout<<"|Elimina lista|:\t\n"<< endl;
               lits=elimina(lits);
               cout<<"Lista eliminata,addddios"<< endl;
            break;
           case 4:
               cout<<"|Stampa|:"<< endl;
               stampa(lits);
            break;
           case 5:
               cout<<"Arrivederci." << endl;
            break;

           }

}while(scelta!=5);



    return 0;
}

void menu()
{
    cout<<"\t***MENU***" << endl;
    cout<<"\tScegliere l'operazione da fare:\n\t1)Aggiungere elemento in testa\n\t2)Aggiungere elemento in coda\n\t3)Eliminare lista\n\t4)Stampare la lista\n\t5)Esci"<< endl;

}
struct LISTA *nuovoelem (int a)
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
 p=q;
 return p;
}

struct LISTA *incoda (struct LISTA *p,int a)
{
 nodo*q=nuovoelem(a);
 nodo* temp=NULL;
 if(p!=NULL)
 {
    for(temp=p; temp->next !=NULL; temp=temp->next)
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

struct LISTA *elimina (struct LISTA *p)
{

 nodo*temp=p;
 for(;temp!=NULL;p=temp) //scorro la lista per poi eliminarla forevah
 {
    temp=p->next;
    p->next=NULL;
    delete p;
 }
}

void stampa (struct LISTA *p)
{
    if(p!=NULL)
    {
        cout<< p->primo <<endl;
        stampa(p->next);
    }
     //metodo ricorsivo!!! per il metodo iterativo,avevi bisogno di un while

}





