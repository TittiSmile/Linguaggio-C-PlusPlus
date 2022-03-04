#include <iostream>
using namespace std;

struct lista{
    int primo;
    struct lista *next;
    
};


int main ()
{
    struct lista *n1=NULL;
    n1->primo=5;
    n1->next=NULL;

///visualizzazione

    while(n1->next>0)
    {
        cout<<"elemento:    "<< n1->primo<< endl;
        n1=n1->next;
    }
     
     
    
    
    
    
    
    return 0;
}






/*lista *primo=new lista;
     primo->n1=3;
     primo->next=0;  
     
     lista *n2=new lista;
     n2->n1=21;
     n2->next=0;
     
     lista *n3=new lista;
     n3->n1=22;
     n3->next=0;
     
     
     while(n3>0)
     {
         cout<< "numero   "<<n3->n1<< endl;
         n3= n3->next
;     }
     */
