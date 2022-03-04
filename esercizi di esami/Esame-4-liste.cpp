#include <iostream>

using namespace std;

struct lista
{
    int info;
    struct lista *next;
};

void input(int *);
struct lista *coda(struct lista *, int);
struct lista *testa(struct lista *, int);
bool ricerca(struct lista *, int);
bool pari(struct lista *);
void dealloca(struct lista *);
void stampa(struct lista *);
struct lista *primi(struct lista *);
bool primo(int);
struct lista *revers(struct lista *);

int main()
{
    struct lista *top=NULL;
    int scelta=0,x;
    while(scelta!=9)
    {
        cout <<"1)Inserimento in coda"<<endl;
        cout <<"2)Inserimento in testa"<<endl;
        cout <<"3)Ricerca di un valore"<<endl;
        cout <<"4)Verifica di somma pari"<<endl;
        cout <<"5)Cancellare la lista"<<endl;
        cout <<"6)Stampare la lista"<<endl;
        cout <<"7)Riduzione lista a numeri primi"<<endl;
        cout <<"8)Reverse della lista"<<endl;
        cin >>scelta;
        switch(scelta)
        {
        case 1:
            input(&x);
            top=coda(top,x);
            break;
        case 2:
            input(&x);
            top=testa(top,x);
            break;
        case 3:
            if(top!=NULL)
            {
                input(&x);
                if(ricerca(top,x)==true)
                    cout <<"Valore trovato"<<endl;
                else
                    cout <<"Valore non trovato"<<endl;
            }
            else
                cout <<"La lista e' vuota"<<endl;
            break;
        case 4:
            if(top!=NULL)
            {
                if(pari(top)==true)
                    cout <<"La somma dei numeri e' pari"<<endl;
                else
                    cout <<"La somma dei numeri non e' pari"<<endl;
            }
            else
                cout <<"La lista e' vuota"<<endl;
            break;
        case 5:
            if(top!=NULL)
            {
                dealloca(top);
                top=NULL;
            }
            else
                cout <<"La lista e' gia' vuota"<<endl;
            break;
        case 6:
            if(top!=NULL)
            {
                stampa(top);
                cout <<"NULL"<<endl;
            }
            else
                cout <<"La lista e' vuota"<<endl;
            break;
        case 7:
            if(top!=NULL)
                top=primi(top);
            else
                cout <<"La lista e' vuota"<<endl;
            break;
        case 8:
            if(top!=NULL)
                top=revers(top);
            else
                cout <<"La lista e' vuota"<<endl;
            break;
        }
    }
    dealloca(top);
    return 0;
}

void input(int *x)
{
    cout <<"Inserire intero:";
    cin >>*x;
}

struct lista *coda(struct lista *top, int x)
{
    if(top==NULL)
    {
        top=new struct lista;
        top->info=x;
        top->next=NULL;
    }
    else
        top->next=coda(top->next,x);
    return top;
}

struct lista *testa(struct lista *top, int x)
{
    struct lista *tmp=NULL;
    tmp=new struct lista;
    tmp->info=x;
    tmp->next=top;
    return tmp;
}

bool ricerca(struct lista *top, int x)
{
    bool b=false;
    while(top!=NULL)
    {
        if(top->info==x)
        {
            b=true;
            break;
        }
        top=top->next;
    }
    return  b;
}

bool pari(struct lista *top)
{
    int somma=0;
    while(top!=NULL)
    {
        somma=somma+top->info;
        top=top->next;
    }
    if(somma%2==0)
        return true;
    else
        return false;
}

void dealloca(struct lista *top)
{
    if(top!=NULL)
    {
        dealloca(top->next);
        delete top;
    }
}

void stampa(struct lista *top)
{
    if(top!=NULL)
    {
        cout <<top->info<<"->";
        stampa(top->next);
    }
}

struct lista *primi(struct lista *top)
{
    if(top!=NULL)
    {
        top->next=primi(top->next);
        if(primo(top->info)==false)
        {
            struct lista *tmp;
            tmp=top->next;
            delete top;
            top=NULL;
            top=tmp;
        }
    }
    return top;
}

bool primo(int x)
{
    int i=1,j=0;
    while(i<=x)
    {
        if(x%i==0)
            j++;
        i++;
    }
    if(j==2)
        return true;
    else
        return false;
}

struct lista *revers(struct lista *top)
{
    struct lista *tmp=NULL;
    while(top!=NULL)
    {
        tmp=testa(tmp,top->info);
        top=top->next;
    }
    return tmp;
}
