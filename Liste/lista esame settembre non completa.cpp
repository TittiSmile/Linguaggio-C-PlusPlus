#include <iostream>
using namespace std;

typedef struct LISTA
{
    int primo;
    struct LISTA *next;
}nodo;

void menu();
struct LISTA *nelem(int a);
struct LISTA *intesta(struct LISTA *p,int a);
struct LISTA *incoda(struct LISTA *p,int a);
struct LISTA *ricerca(struct LISTA *p,int a);
struct LISTA *pari (struct LISTA *p,int a);
struct LISTA *elimina(struct LISTA *p);
void stampa (struct LISTA *p);
struct LISTA *primi (struct LISTA *p,int a);
struct LISTA *rewerse(struct LISTA *p);


int main ()
{
    int scelta;
    int n;
    struct LISTA *lol=NULL;

    menu();


    return 0;
}

void menu()
{
    cout<<"***MENU***"<<endl;
    cout<<"1)in testa\n2)In coda\n3)ricerca\n4)parita'\n5)elimina\n6)stampa\n7)primi\n8)rewerse"<<endl;

}


struct LISTA *nelem(int a);
struct LISTA *intesta(struct LISTA *p,int a);
struct LISTA *incoda(struct LISTA *p,int a);
struct LISTA *ricerca(struct LISTA *p,int a);
struct LISTA *pari (struct LISTA *p,int a);
struct LISTA *elimina(struct LISTA *p);
void stampa (struct LISTA *p);
struct LISTA *primi (struct LISTA *p,int a);
struct LISTA *rewerse(struct LISTA *p);

