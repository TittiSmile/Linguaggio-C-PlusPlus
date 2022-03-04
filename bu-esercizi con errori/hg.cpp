#include <iostream>
#include <climits>
#define N 100
#define M 200
using namespace std;
int minimo (int a[][M],int n,int m);
int massimo (int a[][M],int n,int m);
void scambia (int a[][M],int n,int m);
int main ()
{
    int n,m;
    do
    {
        cout << "inserisci il numero di righe:   ";
        cin >> n;
        if (n<2 || n>100)
        {
            cout << "riprova"<< endl;
        }
    }while(n<2 || n>100);
    
    do
    {
        cout << "inserisci il numero di colonne:   ";
        cin >> m;
        if (m<2 || m>200)
        {
            cout<< " errore,riprova"<< endl;
        }
    }while(m<2 || m>200);
    int a[N][M];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout << "inserisci un valore per la coordinata ["<<i<<"]["<<j<<"]:   ";
            cin >> a[i][j];
        }
    }
    minimo(a,n,m);
    massimo (a,n,m);
    scambia()
    
    
    
    
    return 0;
}
int minimo (int a[][M],int n,int m)
{
    int somma;
    int min=INT_MAX;
    int rmin;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            somma+=a[i][j];
            if (somma<min)
            {
                min=somma;
                rmin=i;
            }
        }
    }
}







int massimo (int a[][M],int n,int m);
void scambia (int a[][M],int n,int m);






