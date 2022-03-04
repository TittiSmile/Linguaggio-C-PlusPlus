#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct NODO
{
  int primo;
  struct NODO *next;  
}nodo;


struct NODO *NuovoElemento (int n);
struct NODO *InTesta (struct NODO *top,int n );
struct NODO *InCoda (struct NODO *top,int n);
void CancellaLista (struct NODO *top);
struct NODO *RicercaElemento(struct NODO *top,int m);
void StampaLista(struct NODO *top);


int main ()
{
  nodo *top=NULL;      

int n,x;
cout<<"Quanti elementi vuoi inserire? "<< endl;
cin>>n;
for (int i=0;i<n;i++)
{
    cout<<"dammi l'elemento "<< i+1 << " da inserire"<< endl;
    cin>> x;
    
}
    top=InCoda(top,x);
    StampaLista(top);
    
    system ("PAUSE");
    return 0;
}


struct NODO *NuovoElemento (int n)
{
    nodo *tmp=new  nodo;
    tmp->primo=n;
    tmp->next=NULL;
    return tmp;
}
struct NODO *InTesta (struct NODO *top,int n )
{
    //e=head
    nodo *head=NuovoElemento(n);
    head->next=top;
    return head;
}
struct NODO *InCoda (struct NODO *top,int n)
{
    //e=head
    nodo *tmp,*head;
    head=NuovoElemento(n);
    if(top!=NULL)
    {
        for(tmp=top; tmp->next!= NULL; tmp=tmp->next)
        {
            tmp->next=head;
        }
    }
    else
    {
        top=head;
    }
    return top;
}
void CancellaLista (struct NODO *top)
{
    nodo *tmp;
    for(;tmp!=NULL; top=tmp)
    {
        tmp=top->next;
        top->next=NULL;
        delete(top);
    }    
}
struct NODO *RicercaElemento(struct NODO *top,int m)
{
    nodo *res=NULL;
    for(;top!=NULL && res==NULL; top=top->next)
    {
        if(top->primo==m)
        {
            res=top;
        }
    }
    return res;
}
void StampaLista(struct NODO *top)
{
    while(top!=NULL)
    {
        cout<<"elemento: "<<top->primo <<endl;
        top=top->next;
    }
    
}








