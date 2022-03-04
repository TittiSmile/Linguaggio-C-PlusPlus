// programma che calcola i numeri primi senza array
#include <iostream>
using namespace std;
int main ()
{
    int n,i=2;
    cout << "Programma che verifica se il numero inserito e' primo o no.\nInserire un numero" << endl;
    cin >> n;
    if (n==1 || n==2 || n==3)
    {
        cout << "primo" << endl;
    }
    for (int i=2;i<n;i++)
    {
      
    }
     if (n%2==0)
          {
              cout << "Il numero NON e'  primo "<< endl;
          }
                  else if (i<=n/2)
                  {
                   cout << "Il numero e'  primo "<< endl;
                  }
                  
return 0;
}
