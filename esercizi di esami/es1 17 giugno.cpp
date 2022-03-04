#include <iostream>
using namespace std;
void inserimento (int matrice[100][200],int a,int b);
int somma (int matrice [100][200],int a,int b);
float media (int matrice [100][200],int a);
int main ()
{
    int n,m;
    do
    {
        cout << "Di quante righe vuoi la tua matrice? (minimo 2,massimo 100)   ";
        cin >> n;
        if (n<2 || n>100)
        {
            cout << "Errore! Riprovare.";
        }
    } while (n<2 || n>100);
    do
    {
        cout << "Di quante colonne vuoi la tua matrice? (minimo 2,massimo 200)   ";
        cin >> m;
        if (m<2 || m>200)
        {
            cout << "Errore! Riprovare.";
        }
    }while (m<2 || m>200);
    int A[100][200];
    
    inserimento(A,n,m);
    int abu;
    abu=somma(A,n,m);
    int mud;
    mud=media(A,m);
    cout << "\n\nLa matrice e' " << endl;
       for (int i=0;i<n;i++)
    {
        cout << "\n";
        for (int j=0;j<m;j++)
        {
             cout << A[i][j] << "\t";
        }
    } 
    if (abu==-1)
    {
        cout << "\nNon esistono indici nulli " << endl;
    }
    else 
    {
        cout << "\nLa somma degli elementi alla riga " << abu+1 << " e' nulla." << endl;
    }
    cout << "La media dei valori positivi nelle colonne dispari e' " << mud << endl;
    
    
    
    return 0;
}

void inserimento (int matrice[100][200],int a,int b)
{
    for (int i=0;i<a;i++)
    {
        for (int j=0;j<b;j++)
        {
            cout << "Inserisci l'elemento di coordinate ["<<i<< "] ["<<j<<"]:   ";
            cin >> matrice[i][j];
        }
    }
    
}

int somma (int matrice [100][200],int a,int b)
{
    int som=0;
    int i=0;
    while (i<a)
    {
        for (int j=0;j<a,j<b;j++)
        {
            som+=matrice[i][j];
        }
        if (som<0)
        {
            return i;
        }
        else 
        {
            som=0;
            i++;
        }
    }
    if (i>=a)
    {
        return -1;
    }
    
}

float media (int matrice [100][200],int b)
{
    int med;
    int index;
    int i=0;
    for (int i=0;i<b;i++)
    {
        //s+=matrice[i][j];
        if (matrice[i]>0)
        {
         index++ ;  
        med+=matrice[i][i];
        }
        if (index !=0)
        {
            med/=index;
        }
      else return -1;
    }
}
