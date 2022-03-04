#include <iostream>
///Il programma FUNZIONA tranne per la funzione'mk' che dà problemi. è strano perchè nell'esercizio'liste-operazioni
/// su un numero k', ho usato la medesima funzione per l'inserimento in coda e per la funzione 'mk' ma,nell'altro esercizio,
///funziona tranquillamente... I DON'T KNOWWW
using namespace std;
typedef struct LISTA
{
    int primo;
    struct LISTA *next;
}nodo;

void menu();
nodo*nelem(int a);
nodo*intesta(nodo*p,int a);
nodo*incoda(nodo*p,int a);
nodo*elk(nodo*p,int k);
nodo*mk(nodo*p,int k);
nodo*diversik(nodo*p,int k);
void stampa(nodo*p);


int main ()
{

    nodo*lol=NULL;
    int scelta,num,dim,k;

    cout<<"Quanto vuoi grande la tua lista?"<< endl;
    cin>> dim;

    for(int i=0;i<dim;i++)
    {
        cout<<"inserire "<<i+1<<" elemento" <<endl;
        cin>> num;
        lol=incoda(lol,num);
    }
    cout<<"digitare un numero k"<< endl;
    cin>> k;

    menu();
    do
    {
        cout<<"digita la tua scelta"<< endl;
        cin>> scelta;

        switch(scelta)
        {
        case 1:
            cout<<"elimino i numeri maggiori di "<<k<< endl;
            lol=elk(lol,k);
            break;
        case 2:
            cout<<"metto i minori di "<<k<<" prima dei maggiori di "<<k<<endl;
            lol=mk(lol,k);
            break;
        case 3:
            cout<<"i numeri diversi da "<<k<<" andranno in un'altra lista"<<endl;
            lol=diversik(lol,k);
            break;
        case 4:
            cout<<"stampo la lista"<< endl;
            stampa(lol);
            if(lol==NULL)
            {
                cout<<"Lista VUOTA!!"<< endl;
            }
            break;
        default:
            cout<<"la scelta inserita non è valida"<< endl;
            break;

        }

    }while(scelta!=3);



    return 0;
}


void menu()
{
    cout<<"1)elimina i numeri maggiori di k\n2)minori di k prima dei maggiori di k"<< endl;
    cout<<"3)numeri diversi da k in un'altra lista\n4)stampa"<<endl;
}

nodo*nelem(int a)
{
    nodo*q=new nodo;
    q->primo=a;
    q->next=NULL;
    return q;
}

nodo*intesta(nodo*p,int a)
{
    nodo*q=nelem(a);
    q->next=p;
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
            /*
            tmp=p->next;
            p->next=NULL;
            delete p;
            SERVE AD ELIMINARE L'INTERA LISTA!
            VISTO CHE IN QUESTO CASO TMP=P,ELIMINIAMO IL 'NODO' TEMPORANEO (OVVERO QUELLO CHE CONTIENE TUTTI I NUMERI>K)
            */
        }
    }
    return p;
}

nodo*mk(nodo*p,int k)
{
 nodo*tmp;
 if(p==NULL || p->next==NULL)
 {
     return p;
 }
 tmp=mk(p->next,k);
if(p->primo<k)
     {
         p->next=tmp;
         return p;
     }
else
     {
       //  tmp=incoda(tmp,p);
         return tmp;
     }
}


nodo*diversik(nodo*p,int k)
{
    nodo*l=NULL;
    if(p==NULL)
    {
        return p;
    }
    l=diversik(p->next,k);
        if(p->primo!=k)
        {
            l=intesta(l,p->primo);
            return l;
        }
}

void stampa(nodo*p)
{
    while(p!=NULL)
    {
        cout<<"\n\n"<<p->primo<< endl;
        p=p->next;
    }
}
