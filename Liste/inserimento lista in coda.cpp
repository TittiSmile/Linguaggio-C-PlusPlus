#include <iostream>
using namespace std;

typedef struct LISTA
{
    int primo;
    struct LISTA *next;
}nodo;

int main ()
{
    nodo*p=new nodo; //creo un nodo con un solo elemento
    p->primo=4;
    p->next=NULL;
    
    nodo*q=new nodo;
    
 if (p==NULL)
 {
     nodo*p=new nodo;
     p->primo=4;
     p->next=NULL;
 }
 
 else
 {
 nodo*q;
     for(q=p; q->next!=NULL; q=q->next)
    {
        q->next=new nodo;
        q->next->primo=44;
        q->next->next=NULL;
 
    }
  
}
    while (q!=NULL)
    {
        cout<< q->primo << endl;
        q=q->next;
    }
    
    
    return 0;
}
