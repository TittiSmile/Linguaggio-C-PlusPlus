//ordinamento di un vettore (ordina i valori del vettore dal più picolo al più grande)
#include <iostream>
using namespace std;
int main ()
{
  int numero[10];
  int n,i,j,variabile;
  cout << "Quanti numeri vuoi inserire?"<< endl;
  cin >> n;
  for (int i=0;i<n;i++)
  {
    cout << "Inserire il " << i+1 << " numero:  " ; 
    cin >> numero [i];   
  } 
  
  for (int i=0;i<n-1;i++)
  {
      for (int j=i+1;j<n;j++)
      {
          if (numero [i] > numero [j])  
          {
              variabile = numero [i];
              numero [i]= numero [j];
              numero [j] = variabile;
          }
      }
  }
    
    cout <<"I numeri ordinati in senso CRESCENTE sono: "  << endl;
    for (int i=0;i<n;i++)
    {
        cout << numero [i] << " " ;
    }
    
    
    return 0;
}
