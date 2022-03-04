#include <iostream>
using namespace std;


typedef struct LISTA
{
    char primo;
    struct LISTA *next;
}nodo;

void menu();
struct LISTA *nelem (char a);
struct LISTA *intesta (struct LISTA *p, char a);
struct LISTA *incoda (struct LISTA *p, char a);
struct LISTA *ricerca (struct LISTA *p, char a);
int noccor (struct LISTA *p, char a);
struct LISTA *elocc (struct LISTA *p,char a);
struct LISTA *elimina (struct LISTA *p);
void stampa(struct LISTA *p);
struct LISTA *rewerse (struct LISTA *p);


int main ()
{
    char scelta;
    char c;
    struct LISTA *lol=NULL;

    menu();
    do
    {
        cout<<"\n\t*Inserire scelta*"<< endl;
        cin>> scelta;

        switch(scelta)
        {
        case 'a':
            cout<<"Inserisci carattere in testa"<< endl;
            cin>> c;
            lol=intesta(lol,c);
            break;
        case  'b':
            cout<<"Inserisci carattere in coda"<< endl;
            cin>> c;
            lol=incoda(lol,c);
            break;
        case  'c':
            cout<<"Ricerca carattere"<< endl;
            cin>> c;
            lol=ricerca(lol,c);

            if(ricerca(lol,c))
            {
                cout<<"trovato"<< endl;
            }
            else

            {
                cout<<"NON trovato"<< endl;
            }
            break;
        case  'd':
            cout<<"Che occorrenza vuoi contare?"<< endl;
            cin>> c;
            cout<<"Il numero di occorrenze e' "<< noccor(lol,c)<<endl;;
            break;
        case  'e':
            cout<<"Che occorrenza eliminare?"<< endl;
             cin>> c;
             lol=elocc(lol,c);
            break;
        case  'f' :
            cout<<"Elimina lista carattere"<< endl;
            lol=elimina(lol);
            break;
        case  'g' :
            cout<<"Stampa lista"<< endl;
            stampa(lol);
            if(lol==NULL)
            {
                cout<<"LISTA VUOTA!"<< endl;
            }
            break;
        case  'h' :
            cout<<"Rewerse della lista"<< endl;
            lol=rewerse(lol);
            break;
        case  'i' :
            cout<<"Arrivederci."<< endl;
            break;
        default:
            cout<<"Scelta errata."<< endl;
            break;
        }

    }while(scelta != 'i');
    return 0;
}





void menu()
{
    cout<<"|MENU|"<< endl;
    cout<<"a)In testa\nb)In coda\nc)Ricerca\nd)Numero occorrenze carattere\ne)Elimina occorrenze carattere"<< endl;
    cout<<"f)Elimina lista\ng)Stampa la lista\nh)Rewerse lista\ni)Esci."<< endl;
}



struct LISTA *nelem (char a)
{
     nodo*q=new nodo;
     q->primo=a;
     q->next=NULL;
     return q;
}


struct LISTA *intesta (struct LISTA *p, char a)
{
     nodo*q=nelem(a);
     q->next=p;
     return q;
}



struct LISTA *incoda (struct LISTA *p, char a)
{
     /* nodo*q=nelem(a);
      nodo*temp;

      if(p!=NULL)
      {
          for(temp=p;temp->next!=NULL;temp=temp->next)
              temp->next=q;

      }
      else
        p=q;

    return p;*/ //non va con l'iterativa
   nodo*q;
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



struct LISTA *ricerca (struct LISTA *p, char a)
{
  nodo*trovato=NULL;
  for(;p!=NULL && trovato==NULL;p=p->next)
  {
      if(p->primo==a)
        trovato=p;
}
/////////////////N.B. non so perchè,quando ricerca i caratteri e li trova,elimina la lista
  return trovato;
}



int noccor (struct LISTA *p, char a)
{
    int flag=0;

    if(p!=NULL)
    {
        if(p->primo==a)
        {
            flag=1+noccor(p->next,a);
        }
        else
        {
            flag=noccor(p->next,a);
        }
    }


    return flag;
}



struct LISTA *elocc (struct LISTA *p,char a) //elimino l'ultima occorrenza
{
    //in realtà è la cancellazione della prima occorrenza perchè non so farla con l'ultima lol è RICORSIVA
  nodo*flag;
  if(p!=NULL)
  {
      if(p->primo==a)
      {
          flag=p;
          p=p->next;
          delete flag;
      }
      else
      {
          elocc(p->next,a);
      }
  }

return p;
}




struct LISTA *elimina (struct LISTA *p)
{
    nodo*temp;
    for(;p!=NULL;p=temp)
    {
        temp=p->next;
        p->next=NULL;
        delete p;
    }

return p;

}



void stampa(struct LISTA *p)
{
    while(p!=NULL)
    {
        cout<<"Lista: "<< p->primo<< endl;
        p=p->next;
    }
}


struct LISTA *rewerse (struct LISTA *p)
{
  if(p==NULL)
        return 0;

  rewerse(p->next);
   cout<<p->primo<< endl;
}


