#include <iostream>
#define dim 200
using namespace std;
void acquisisci_grandezza(int n,int m);
void acquisisci_matrice (int a[][200],int n,int m);
//void trasposta (int b[][200],int n,int m);
int main ()
{
    int riga,colonna;
    acquisisci_grandezza(riga,colonna);
    int matrice[dim][dim];
    acquisisci_matrice(matrice,riga,colonna);
    
    return 0;
}
void acquisisci_grandezza(int n,int m)
{
    do
    {
        cout <<"Quante righe?(MIN 2,MAX 200)    ";
        cin >> n;
        if (n<2 || n>200)
        {
            cout << "Errore. Riprovare"<< endl;
        }
    }while (n<2 || n>200);
    do    
       {
        cout << "Quante colonne?   ";
        cin >> m;
        if (m<2 || m>200)
        {
            cout << "Errore.Riprovare" << endl;
        }
       } while (m<2 || m>200);
    
}
void acquisisci_matrice (int a[][100],int n,int m)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout <<" Inserisci il valore di cooridinata ["<<i<<"] ["<<j<<"]   ";
            cin >> a[i][j]; 
        }
    }
    
    
}


