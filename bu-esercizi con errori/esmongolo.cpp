#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout << "Quante righe e colonne?   ";
    cin >> n;
    int matrice [150][150];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout << "inserisci l'elemento "<< i << j << ":   ";
            cin >> matrice [i][j];
        }
    }
    cout << "la matrice e' " << endl;
     for (int i=0;i<n;i++)
    {
        cout << "\n";
        for (int j=0;j<n;j++)
        {
            
            cout<<"\t"<< matrice [i][j];        }
    }
    
    
    return 0;
}
