#include <iostream>
#define MAX 100
using namespace std;

int main ()
{
   int a[MAX];
   //se vuoi usare l'operatore 'new' sarebbe: 'int *a=new int [MAX]'
   int num;

   cout<<"Quanti numeri vuoi nel tuo vettore?"<< endl;
    cin>> num;
    for(int i=0;i<num;i++)
    {
        cout<<"Inserisci "<< i+1<< " valore"<< endl;
        cin>>a[i];
    }


    return 0;
}
