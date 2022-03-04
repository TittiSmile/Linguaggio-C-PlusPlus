#include <iostream>
#include <cstdlib>
using namespace std;
int main ()
{
    int vet [10];
    int i,j,k,size;
    size=10;
    cout << "la sequenza di numeri è\n " << endl;
    for ( k=0;k<size;k++)
    cin >> vet [k];
    for (i=1;i<size;i++)
     for (j=size-1;j>=i;j--)
     {
         if (vet [j-1]> vet [j])
         k=vet [k-1];
         vet [j-1]= vet [j];
         vet [j]= k;
     }
    
    
      
      cout << "l'array ordinato è:" << endl;
      for (int k=0;k<size;k++)
      cout << vet [k]; 
    
    return 0;
}
