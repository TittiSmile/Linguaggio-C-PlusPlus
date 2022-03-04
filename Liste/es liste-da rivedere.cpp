#include <iostream>
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
nodo*ricerca(nodo*p,int a);
nodo*elimina(nodo*p);
int occorrenza(nodo*p,int a);
nodo*elocc(nodo*p,int a);
void stampa(nodo*p);
nodo*rewerse(nodo*p);
int somma(nodo*p);
nodo*ordine(nodo*p,nodo*tmp);
nodo*crescente(nodo*p);

int main ()
{
    nodo*l=NULL;
    int dim,num,scelta;

menu();
    do
    {

        cout<<"\n\tDigitare la scelta"<< endl;
         cin>> scelta;
         switch(scelta)
        {
            case 1:
                cout<<"inserisci numero in testa"<< endl;
                cin>> num;
                l=intesta(l,num);
                break;
            case 2:
                cout<<"inserisci numero in coda"<< endl;
                cin>> num;
                l=incoda(l,num);
                break;
            case 3:
                cout<<"digitare numero da ricercare"<< endl;
                cin>> num;
                l=ricerca(l,num);
                break;
            case 4:
                cout<<"Elimino la lista"<< endl;
                l=elimina(l);
                break;
            case 5:
                cout<<"di quale numero vuoi contare le occorrenze?"<< endl;
                cin>> num;
                cout<<"le occorrenze di "<<num<<" nella lista sono:"<<occorrenza(l,num) << endl;
                break;
            case 6:
                cout<<"Quale occorrenza vuoi eliminare?"<< endl;
                cin>> num;
                l=elocc(l,num);
                cout<<"sono state eliminate le occorrenze di "<<num<<endl;
                break;
            case 7:
                cout<<"Stampo la lista"<< endl;
                stampa(l);
                if(l==NULL)
                {
                    cout<<"Lista VUOTA!"<< endl;
                }
                break;
            case 8:
                cout<<"Stampo al contrario"<< endl;
                rewerse(l);
                if(l==NULL)
                {
                    cout<<"Lista VUOTA!"<< endl;
                }
                break;
            case 9:
                cout<<"metto in ordine crescente la lista"<< endl;
                l=crescente(l);
                break;
            case 10:
                cout<<"arrivederci"<< endl;
                break;
            default:
                cout<<"Scelta non valida"<< endl;
                break;

         }



    }while(scelta!=10);


    return 0;
}





void menu()
{
    cout<<"1)inserisci in testa\n2)inserisci in coda\n3)ricerca\n4)elimina lista\n5)cerca occorrenza"<< endl;
    cout<<"6)elimina occorrenza\n7)stampa\n8)stampa rewerse\n9)somma elementi lista\n10)metti in ordine crescente"<< endl;

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

nodo*ricerca(nodo*p,int a)
{
    nodo*trovato;
    for(;p!=NULL && trovato==NULL;p=p->next)
    {
        if(p->primo==a)
        {
            trovato=p;
        }
    }
    return trovato;
}

nodo*elimina(nodo*p)
{
    nodo*tmp;
    for(;p!=NULL;p=tmp)
    {
        tmp=p->next;
        p->next=NULL;
        delete p;
    }
    return p;
}

int occorrenza(nodo*p,int a)
{
    int flag=0;
    if(p!=0)
    {
        if(p->primo==a)
        {
            flag=1+occorrenza(p->next,a);
        }
        else
        {
            flag=occorrenza(p->next,a);
        }
    }
    return flag;
}

nodo*elocc(nodo*p,int a)
{
    nodo*tmp=p;
    if(p!=NULL)
    {
        if(p->primo==a)
        {
            p=elocc(p->next,a);
            delete tmp;
        }
        else
        {
            p->next=elocc(p->next,a);
        }
    }
    return p;
}

void stampa(nodo*p)
{
    while(p!=NULL)
    {
        cout<<"\n\n"<< p->primo<< endl;
        p=p->next;
    }
}

nodo*rewerse(nodo*p)
{
    if(p==NULL)
    {
        return 0;
    }
    rewerse(p->next);
    cout<<"\n\n"<<p->primo<< endl;
}

int somma(nodo*p)
{
    int s=0;
    if(p==NULL)
    {
        return 0;
    }
    else
    {
        s=somma(p->next);
        s=s+p->primo;
        return s;
    }
}

nodo*ordine(nodo*p,nodo*tmp)
{
    if(p==NULL || p->primo > tmp->primo)
    {
        tmp->next=p;
        p=tmp;
    }
    else
    {
        tmp->next=ordine(p->next,tmp);
    }
    return p;
}

nodo*crescente(nodo*p)
{
    nodo*tmp;
    nodo*nlista=NULL;
    while(p!=NULL)
    {
        tmp=p;
        p=p->next;
        nlista=ordine(nlista,tmp);
    }
    return nlista;
}



