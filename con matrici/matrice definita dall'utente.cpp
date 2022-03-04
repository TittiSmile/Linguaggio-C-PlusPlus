#include <iostream>
#define max 10
using namespace std;
int main ()
{
 int matrice [max][max];
 int righe,colonne,i,j; 
 do
 {
 cout << "inserire il numero di righe " << endl;
 cin >> righe;
 cout << "inserire il numero di colonne " << endl;
 cin >> colonne;
     if ((righe <1 || righe >10) || (colonne <1 || colonne >10))
     {
         cout << "errore! (min 1 max 10)" << endl;
     }
} while ((righe <1 || righe >10) || (colonne <1 || colonne >10)); // si dovrebbero fare due cicli do while ma mi rompevo i coglioni (:


for (int i=0;i<righe;i++)
{
    for (int j=0;j<colonne;j++)
    {
        cout << "inserire i valori con coordinate [" << i<<"] [" << j<< "]"<<  endl;
        cin >> matrice [i][j];
    }
}

 for (int i=0;i<righe;i++)
{
    for (int j=0;j<colonne;j++)
    {
        cout << "la matrice inserita e'  " <<  matrice [i][j] << endl;
       
    }
}

 
 
return 0;
}
