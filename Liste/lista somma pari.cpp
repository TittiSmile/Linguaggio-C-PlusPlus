#include <iostream>
using namespace std;

typedef struct LISTA
{
    int primo;
    struct LISTA *next;
}nodo;

struct LISTA *nelem(int a);
struct LISTA *intesta (struct LISTA *p,int a);
struct LISTA *incoda (struct LISTA *p,int a);

int main()
{
    bool flag=true;
    int num;
    struct LISTA *lol=NULL;

    cout<<"inserisci in testa"<< endl;
    cin>> num;
    lol=intesta(lol,num);
    cout<<"inserisci in coda"<<endl;
    cin>>num;
     lol=incoda(lol,num);
     /*cout<<"inserisci in coda"<< endl;
     cin>>num;
     lol=incoda(lol,num);*/

    cout<<"verifico somma pari"<<endl;

   if (lol!=NULL)
    {

        if((lol->primo+lol->next->primo)%2!=0)
        {
            flag=false;
            cout<<"false"<< endl;
        }
        else
        {
            cout<<"true"<< endl;
        }
    }


    return 0;
}



struct LISTA *nelem(int a)
{
 nodo*q=new nodo;
 q->primo=a;
 q->next=NULL;
 return q;
}

struct LISTA *intesta (struct LISTA *p,int a)
{
 nodo*q=nelem(a);
 q->next=p;
 return q;
}
struct LISTA *incoda (struct LISTA *p,int a)
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
