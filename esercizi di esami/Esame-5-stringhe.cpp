/*
sia C una lista di stringhe (array di 51 caratteri) si realizzi:
-una funzione insert che presi come argomenti la lista C e una stringa S inserisce in ordine lessicografico S in C e
 ritorna la lista aggiornata
-una funzione con gli stessi argomenti che cancella solo l'ultima occorrenza di S in C,qualora presente
-una funzione di stama che ritorni a video gli elementi di C(uno per riga)
*/

#include <iostream>
#define MAXLEN 51

using namespace std;

struct lista
{
    char stringa[MAXLEN];
    struct lista *next;
};

struct lista *inserto(struct lista *, char *);
void copia(char *, char *);
int compare(char *, char *);
int lunghezza(char *);
struct lista *ultimaoccorrenza(struct lista *, char *);
struct lista *elimina(struct lista *,struct lista *);
void stampa(struct lista *);
void dealloca(struct lista *);

int main()
{
    struct lista *C=NULL;
    int scelta=0;
    char S[MAXLEN];
    while(scelta!=4)
    {
        cout <<"1)Inserire stringa in ordine lessicografico"<<endl;
        cout <<"2)Eliminare ultima occorrenza di una stringa"<<endl;
        cout <<"3)Stampare la lista"<<endl;
        cout <<"4)Uscire"<<endl;
        cin >>scelta;
        switch(scelta)
        {
        case 1:
            cout <<"Inserire stringa:";
            cin >>S;
            C=inserto(C,S);
            break;
        case 2:
            if(C!=NULL)
            {
                cout <<"Inserire stringa:";
                cin >>S;
                C=ultimaoccorrenza(C,S);
                break;
            }
            else
                cout <<"La lista e' vuota"<<endl;
        case 3:
            if(C!=NULL)
                stampa(C);
            else
                cout <<"La lista e' vuota"<<endl;
        }
    }
    dealloca(C);
    return 0;
}

struct lista *inserto(struct lista *C, char *S)
{
    struct lista *tmp,*pre,*succ;
    pre=C;
    succ=C;
    tmp=new struct lista;
    copia(tmp->stringa,S);
    tmp->next=NULL;
    if(C==NULL || compare(C->stringa,S)==0 || compare(C->stringa,S)==1)
    {
        tmp->next=C;
        C=tmp;
    }
    else
    {
        while(succ!=NULL)
        {
            if(compare(succ->stringa,S)!=2)
                break;
            pre=succ;
            succ=succ->next;
        }
        if(succ==NULL)
            pre->next=tmp;
        else
        {
            pre->next=tmp;
            tmp->next=succ;
        }
    }
    return C;
}

void copia(char *C, char *S)
{
    int i=0;
    while(S[i]!='\0')
    {
        C[i]=S[i];
        i++;
    }
    C[i]='\0';
}

int compare(char *C, char *S)
{
    int i=0,b,l1,l2;
    while(C[i]!='\0' && S[i]!='\0')
    {
        if(S[i]<C[i])
        {
            b=1;
            break;
        }
        if(S[i]>C[i])
        {
            b=2;
            break;
        }
        if(S[i]==C[i])
            b=0;
        i++;
    }
    if(b==0)
    {
        l1=lunghezza(S);
        l2=lunghezza(C);
        if(l1<l2)
            b=1;
        if(l1>l2)
            b=2;
    }
    return b;
}

int lunghezza(char *S)
{
    int i=0;
    while(S[i]!='\0')
        i++;
    return i;
}

struct lista *ultimaoccorrenza(struct lista *C, char *S)
{
    struct lista *flag1,*flag2=NULL;
    flag1=C;
    while(flag1!=NULL)
    {
        if(compare(flag1->stringa,S)==0)
            flag2=flag1;
        flag1=flag1->next;
    }
    C=elimina(C,flag2);
    return C;
}

struct lista *elimina(struct lista *C,struct lista *flag)
{
    if(C!=NULL)
    {
        if(C==flag)
        {
            struct lista *tmp;
            tmp=C->next;
            delete C;
            C=NULL;
            C=tmp;
        }
        else
            C->next=elimina(C->next,flag);
    }
    return C;
}

void stampa(struct lista *C)
{
    if(C!=NULL)
    {
        cout <<C->stringa<<endl;
        stampa(C->next);
    }
}

void dealloca(struct lista *C)
{
    if(C!=NULL)
    {
        dealloca(C->next);
        delete C;
    }
}
