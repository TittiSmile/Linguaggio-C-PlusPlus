#include <iostream>
using namespace std;

typedef struct NODO
{
    int primo;
    struct NODO *next;
}nodo;

void inTesta (nodo *&p, nodo *nuovo);
void stampa (nodo *p);
void elimina (nodo *&p);

int main ()
{
    nodo *p=NULL;
    nodo *nuovo=NULL;
    nodo *temp=NULL;
    
    nuovo=new nodo;
    
    nuovo->primo=5;
    nuovo->next=p;
    p=nuovo;
    
    for(int i=0;i<10;i++)
    {
        nuovo=new nodo;
        nuovo->primo=i;
        inTesta(p,nuovo);
    }
    stampa(p);
    
    elimina(p);
    
    cout<<"lista dopo distruzione:"<< endl;
    stampa(p);
    cout<<"\n\ne' stata eliminata correttamente"<< endl;
    
    
    system("PAUSE");
    return 0;
}
void inTesta (nodo *&p, nodo *nuovo)
{
    nuovo->next=p;
    p=nuovo;
}
void stampa (nodo *p)
{
    while(p!=NULL)
    {
        cout<<p->primo << endl;
        p=p->next;
    }
}
void elimina (nodo *&p)
{
    nodo *tmp=p;
  
    while(p!=NULL)
    {
        tmp=p->next;
        delete p;
        p=tmp;
    }
    cout<<"eliminata!"<< endl;
}






