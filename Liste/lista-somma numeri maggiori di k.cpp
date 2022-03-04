#include <iostream>
using namespace std;
typedef struct LISTA
{
    int primo;
    struct LISTA *next;
}nodo;

nodo*nelem(int a);
nodo*incoda(nodo*p,int a);
int sommacon(nodo*p,int k);
void stampa(nodo*p);

int main ()
{
    nodo*l=NULL;
    int dim,n,k;

    cout<<"quanti numeri nella lista? "<< endl;
    cin>>dim;
    for(int i=0;i<dim;i++)
    {
        cout<<"inserisci "<<i+1<<" elemento"<< endl;
        cin>>n;
        l=incoda(l,n);
    }
    cout<<"la lista e'"<< endl;
    stampa(l);

    cout<<"inserisci un numero k"<< endl;
    cin>>k;

    cout<<"la somma di tutti i numeri maggiori di "<<k<<" e' "<<sommacon(l,k)<< endl;


    return 0;
}


nodo*nelem(int a)
{
    nodo*q=new nodo;
    q->primo=a;
    q->next=NULL;
    return q;
}

nodo*incoda(nodo*p,int a)
{
    if(p==NULL)
    {
        p=nelem(a);
    }
    else
    {
        p->next=incoda(p->next,a);
    }
    return p;
}

int sommacon(nodo*p,int k)
{
    int s=0;
    if(p==NULL)
    {
        return 0;
    }
    else
    {
        s=sommacon(p->next,k);
        if(p->primo>k)
            {
                s=s+p->primo;
            }
                return s;
    }
}


void stampa(nodo*p)
{
    while(p!=NULL)
    {
        cout<<"\n\n"<<p->primo<<endl;
        p=p->next;
    }
}
