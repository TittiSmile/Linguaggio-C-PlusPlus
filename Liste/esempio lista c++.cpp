#include <iostream>
#include <stdlib.h>
using namespace std;


typedef struct NODO
{
    int primo;
    struct NODO *next;
}nodo;

nodo *crea_nodo();
nodo *in_coda(nodo *q);

int main ()
{ 
  int volte;
   
   nodo *p=NULL;
   nodo *q=NULL;
  
  
   /* //inserimento prima in TESTA poi in CODA
     //primo elemento 
      p=new nodo;
      p->primo=1;
      p->next=NULL;
   
   //secondo elemento
   q=new nodo;
   q->primo=2;
   q->next=NULL;
   p->next=q;
   
   //terzo elemento
   q=new nodo;
   q->primo=3;
   q->next=NULL;
   p->next->next=q;
   
   //quarto elemento
   q=new nodo;
   q->primo=4;
   q->next=NULL;
   p->next->next->next=q;
   
   //inserimento in TESTA
   q=new nodo;
   q->primo=11;
   q->next=p;
   p=q;*/
   in_coda(q);
  
     
      
  
  
     
   
   
   
   //stampa lista!
   q=p;
   while(q != NULL)
   {
       cout<< q->primo << endl;
       q=q->next;
   }    
    system ("PAUSE");
    return 0;
}
nodo *crea_nodo()
{
    nodo *q=new nodo;
    cout<<"inserisci il valore del nuovo elemento"<<endl;
    
    cin>>q->primo;
    q->next=NULL;
    return q;
}
nodo *in_coda(nodo *q)
{
    if(q==NULL)
    {
        return crea_nodo();
    }
    else
    {
        q->next=in_coda(q->next);
    return q;
    }
}

