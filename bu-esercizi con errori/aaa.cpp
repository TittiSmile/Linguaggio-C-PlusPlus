#include <iostream>
using namespace std;

typedef struct LISTA
{
    int primo;
    struct LISTA *next;
}nodo;


int main ()
{
    int n;
    
    cout<<"quanti alunni vuoi inserire?"<< endl;
    cin>> n;
    
   for(int i=0;i<n;i++)
   {
       cout<< "inserisci "<< i+1<< " alunno "<< endl;
       cin>> al;
   }
   
    
}
