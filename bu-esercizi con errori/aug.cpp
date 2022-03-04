//esercizio 1 11/2/13
#include <iostream>
#define dim 100
using namespace std;
int max_d(int a[][dim],int c);
int main ()
{
    int n;
    int vero;
    do
  {
      cout << "Inserisci un numero di righe e colonne per la matrice quadrata\n(Nel caso fossi ignorante,matice quadrata vuol dire che hanno uguale numero di righe e colonne ^-^)."<< endl;
      cin >> n;
      if (n<2)
      {
          cout << "Errore! Brutto stronzo,metti almeno 2." << endl;
      }
  }while (n<2);
    int matrice[dim][dim];
    int i,j;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout << "Inserisci la matrice di coordinata ["<<i<<"][" << j <<"]  :";
            cin >> matrice[i][j];
        }
    }
    cout << "\n\tLa matrice che hai inserito e' "<< endl;
     for (int i=0;i<n;i++)
    {
        cout << "\n";
        for (int j=0;j<n;j++)
        {
            
            cout <<"\t"<<matrice[i][j];
        }
    }
    max_d(matrice,n);
    
    
    return 0;
}
int max_d(int a[][dim],int c)
{
    int vero;
    for (int i=0;i<c;i++)
    {
        for (int j=0;j<c;j++)
        {
          if (a[i][i]>a[i][j])
          {
              vero=1;
          }
          else 
          {
              vero= 0;
          }
        }
    }
}






