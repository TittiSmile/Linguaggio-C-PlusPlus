/*Paola Festa, nella traccia, ha scritto:
Si progetti ed implementi in C/C++ un algoritmo che, preso in input un numero intero 2 = n = 150,
1. acquisisca da standard input gli elementi di un vettore bidimensionale A (matrice) di dimensione n × n;
2. verifichi che sulla diagonale principale di A non ci siano elementi nulli (a ii = 0, i = 1, . . . , n);
3. invochi una procedura che fornisca su standard output tutte le righe dispari di A.*/
#include <iostream>
#define N 150
using namespace std;
void dispari (int a[][N], int n);
int main ()
{
    int n,i,j;    
    do
    {
        cout << "inserisci un numero compreso tra 2 e 150"<< endl;
        cin >> n;
    }while (n<2 || n>150);
    int a [n][n];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout << "inserisci un numero per la coordinata ["<< i << "]["<<j<< "]:   ";
            cin >> a[i][j];
        }
    }


   for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
             if (a[i][j]==0)
            {
                cout << "il valore contenuto nella coordinata ["<<i<<"]["<<j<<"] e' nullo sulla diagonale"<< endl;
            }
    
        }
    }
    dispari(a,n);
    return 0;
}
void dispari (int a[][N],int n)
{
    int i,j;
    for (int i=1;i<n;i+=2)
    {
        cout << a[i]<< endl;
        for (int j=0;j<n;j++)
        {
            cout <<a[i][j]<< endl;
        }
    }
}




