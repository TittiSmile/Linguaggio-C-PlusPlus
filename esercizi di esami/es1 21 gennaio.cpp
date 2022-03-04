#include <iostream>
#define N 150
using namespace std;
void righe_dispari(int a[][N],int x );
int main ()
{
    int n;
    do
    {
        cout << "Quante righe e colonne vuoi nella matrice quadrata?   ";
        cin >> n;
        if (n<2 || n>150)
        {
            cout << "Errore! Riprovare."<< endl;
        }
    }while (n<2 || n>150);
    
    int matrice [N][N];
    
   for (int i=0;i<n;i++)
   {
       for (int j=0;j<n;j++)
       {
           cout << "Inserisci l'elemento di coordinata ["<< i <<"] ["<< j << "]:   ";
           cin >> matrice [i][j];
       }
   }
   for (int i=0;i<n;i++)
   {
       for (int j=0;j<n;j++)
       {
          if (matrice[i][j]==0)
          {
              cout << "\nL'elemento di coordinate ["<< i << "] ["<< j <<"] e' nullo sulla diagonale" << endl;
          }
       }
   }
   righe_dispari(matrice,n);
   
return 0;
}

void righe_dispari(int a[][N],int x )
{
    int i=0,j=0;
    for (int i=0;i<x;i=i+2)
    {
        cout << "Righe dispari matrice["<<i << "]:\n ";
        {
            for (int j=0;j<x;j++)
            {
                cout <<"\t"<< a[i][j];
            }
        }
    }
}




