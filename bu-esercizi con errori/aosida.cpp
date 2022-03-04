#include <iostream>
using namespace std;
int funzione (int a[],int m);
int main ()
{
    int n;
    do 
    {
        cout << "inserisci un numero maggiore o uguale di 2 "<< endl;
        cin >> n;
        if (n<2)
        {
          cout << "Non sai leggere,brutto stronzo? Riprova.\n"<< endl;  
        }
    }while (n<2);
    int a [n][n];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout << "inserisci un numero di coordinate ["<< i << "] ["<<j<<"]:   ";
            cin >> a[i][j];
        }
    }
    
    
    return 0;
}
