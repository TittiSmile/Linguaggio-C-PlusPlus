#include <iostream>
using namespace std;

typedef struct NODO
{
    int primo;
    struct NODO *next;
}nodo;


int main ()
{
    nodo *p=NULL;     //lista di base
    nodo *ultimo=NULL; //nodo da aggiungere alla lista (in questo caso in coda)
    nodo *temp=NULL;   //nodo temporaneo 
    
    for (int i=0;i<10;i++)
    {
         temp=new nodo;
         temp->primo=i;
         temp->next=NULL;
         
       if (p==NULL)
        {
           temp->primo=i;
            temp->next=NULL;
        }
      else
        {
            ultimo=p;
                while (ultimo->next != NULL)
                {
                    ultimo=ultimo->next;
                }
        }
    }
   
    
    
   
    
    temp=p;
    while(temp->next!= NULL)
    {
        cout<< temp->primo<< endl;
        temp=temp->next;
    }
    
    
    
    
    system ("PAUSE");
    return 0;
}
