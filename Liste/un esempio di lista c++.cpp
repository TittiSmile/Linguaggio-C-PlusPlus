#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct NODO
{
    int primo;
    struct NODO *next;
}nodo;


int main ()
{
    nodo *p=NULL;
    nodo *q=NULL;
    nodo *temp=NULL;
    int n,scelta,x;
    
    do
    {
            
        cout<<"\t\t*******************MENU***********************"<< endl;
        cout<<"1) Crea elemento inserendolo in testa"<< endl;
        cout<<"2) Inserisci in coda"<< endl;
        cout<<"3) Cancella un elemento"<< endl;
        cout<<"4) Stampa l'intera lista"<< endl;
        cout<<"5) Cerca un elemento"<< endl;
        cout<<"0) Esci dal programma"<< endl;
        cin>> scelta;
        
        
        switch(scelta)
        {
            
            case 1:
                q=new nodo;
                cout<<"inserisci il dato:    ";
                cin>> n;
                q->primo=n;
                q->next=NULL;
                if(p==NULL)
                {
                    p=q;
                }
                else
                {
                    temp=p;
                    while(temp->next != NULL)
                    {
                       temp= temp->next;
                    }
                    temp->next=q;
                }
                break;
            case 2:
                q=new nodo;
                cout<<"inserisci il dato:     ";
                cin>>n;
                q->primo=n;
                q->next=NULL;
                p=q->next->next;
                break;
            case 3:
                temp=p;
                cout<<"inserisci elemento da eliminare:     ";
                cin>> x;
                while(temp->next != NULL && temp->primo != x)
                {
                    q=temp;
                    temp= temp->next;
                }
                if( temp->primo==x)
                {
                    q->next=temp->next;
                    delete(temp);
                    cout<<"eliminato"<< endl;
                }
                else
                {
                    cout<<" elemento non trovato "<< endl;
                }
            case 4:
                temp=p;
                while (temp->next != NULL)
                {
                    cout<< temp->primo<< endl;
                    temp=temp->next;
                }
                
                
                
            
        }
        
        
    }while( scelta != 0);
    
    
    
    system ("PAUSE");
    return 0;
}


