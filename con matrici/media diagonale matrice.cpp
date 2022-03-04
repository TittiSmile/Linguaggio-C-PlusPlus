#include <iostream>
using namespace std;
void matrice (int mat[][100],int n);
int riga (int mat [][100],int n);
int media (int mat [][100],int n);

int main ()
{
    int A[100][100];
    int d=0;
    do
    {
        cout << "quanto vuoi grande la matrice? (max 100,min 2)"<< endl;
        cin >> d;
        if (d<0 || d>100)
        {
            cout<< "errore!"<< endl;
        }
    }while (d<0 || d>100);
    
    matrice (A,d);
    int s;
    s=riga(A,d);
    if (s==-1)
    {
        cout << "non esistono righe con somma nulla"<< endl;
    }
    else 
    {
        cout << "l'elemento nella riga "<< s+1<< " e' nullo"<< endl;
    }
    cout <<"la media della diagonale e' "<< media(A,d);
    
    
    
    
    
    
    
  return 0;
}
void matrice (int mat[][100],int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout << "Inserisci l'elemento di posizione "<< i << j << ":   ";
            cin >> mat [i][j];
        }
    }
    
    
}

int riga (int mat [][100],int n)
{
    int i=0;
    int somma=0;
    
    while (i<n)
   {
         for (int j=0;j<n;j++)
        {
            somma+=mat[i][j];
        }
        if (somma==0)
        {
            return i;
        }
        else 
        {
            somma=0;
            i++;
        }
   }
    
    if (i>=n)
    {
        return -1;
    }
    
}

int media (int mat [][100],int n)
{
    float Media=0;
    int somma=0;
    
    for (int i=0;i<n;i++)
    {
        somma+=mat[i][i];
    }
    Media=(float)somma/n;
    return Media;
    
}





