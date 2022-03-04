#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct NODO
{
    int primo;
    struct NODO *next;
}nodo;

struct NODO *Nuovo (int n);
struct NODO *InTesta(struct NODO *top,int n);
struct NODO *InCoda(struct NODO *top,int n);
int TrovaCarattere (struct NODO *top,int n);
int ContaOccorrenze (struct NODO *top,int n);
void Cancella (struct NODO *top);
void Stampa (struct NODO *top);

int main ()
{
 int scelta,n;
 nodo *top=NULL;
 nodo *p=NULL;
 nodo *q=NULL;
 
    
    
    system ("PAUSE");
    return 0;
}
struct NODO *Nuovo (int n)
{
    nodo *p=new nodo;
    p->primo=n;
    p->next=NULL;
    return p;
}




struct NODO *InTesta(struct NODO *top,int n)
{
    nodo *q=Nuovo(n);
    if(top!=NULL)
    {
        q->next=top;
    }
    return q;
}
struct NODO *InCoda(struct NODO *top,int n)
{
    if(top==NULL)
    {
        return top;
    }
    else if (top->primo==n)
    {
        return top;
    }
    else
    {
        return 0;
    }
}
int TrovaCarattere (struct NODO *top,int n)
{
}
int ContaOccorrenze (struct NODO *top,int n)
{
}
void Cancella (struct NODO *top)
{
}
void Stampa (struct NODO *top)
{
}










