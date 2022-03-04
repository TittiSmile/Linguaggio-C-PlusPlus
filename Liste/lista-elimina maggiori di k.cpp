#include <iostream>
using namespace std;

typedef struct LISTA
{
    int primo;
    struct LISTA*next;
}nodo;

nodo*nelem(int a);
nodo*incoda(nodo*p,int k);
nodo*elk(nodo*p,int a);
void stampa(nodo*p);

int main()
{
    nodo*l=NULL;
    int dim,n,k;
    cout<<"Quanti elementi nella lista?"<< endl;
    cin>> dim;

    for(int i=0;i<dim;i++)
    {
       cout<<"inserire "<<i+1<<" elemento"<< endl;
        cin>>n;
        l=incoda(l,n);
    }

    cout<<"La lista e' "<< endl;
    stampa(l);


    cout<<"inserisci un  numero k"<< endl;
    cin>> k;


    cout<<"elimino tutti i numeri maggiori di "<<k<< endl;
    l=elk(l,k);

    stampa(l);


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
       if (p==NULL)
       {
           p=nelem(a);
       }
       else
       {
           p->next=incoda(p->next,a);
       }
       return p;
}

nodo*elk(nodo*p,int k)
{
    nodo*tmp;
    if(p==NULL)
    {
        return p;
    }
    else
    {
        p->next=elk(p->next,k);
        if(p->primo>k)
        {
            tmp=p;
            p=p->next;
            delete tmp;
        }
    }
    return p;
}




void stampa(nodo*p)
{
    while(p!=NULL)
    {
        cout<<"\n\n"<<p->primo<<endl;
        p=p->next;
    }
}
