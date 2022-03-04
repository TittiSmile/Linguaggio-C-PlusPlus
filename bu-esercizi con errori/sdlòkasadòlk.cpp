/*Si progetti ed implementi in C/C++ un algoritmo che, preso in input un numero intero n>=2 :

1. acquisisca da standard input gli elementi di un vettore intero bidimensionale A di dimensione n x n;
2. invochi una procedura che restituisca 'true' (oppure 1) se ogni elemento A[i][i] della diagonale principale 
di A è il massimo tra gli elementi della colonna a cui appartiene , flase (oppure 0) altrimenti. */
/* 
1 2  la diagonale principale contiene i numeri 1 e 4. in questo caso la funzione dà come risultato 0 perchè 1 non è il massimo della sua colonna
3 4
*/

#include <iostream>
#define N 100
using namespace std;
int max(int m[N][N],int d);
int main ()
{
    int n;
    int i,j;
    do 
    {
        cout << "inserisci un numero maggiore o uguale di 2 (determina la matrice quadrata):   ";
        cin >> n;
        if (n<2)
        cout << "sei una merda, riprova."<< endl;
    }while (n<2);
    int matrice  [N][N];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout << "inserisci l'elemento di coordinata ["<<i<<"][" << j<< "]:   ";
            cin >> matrice[i][j];
        }
    }
    
       max(matrice,n);
   return 0; 
}

int max(int m[][N],int a)
{
    int diagonale=0,i,j;
    for (int i=0;i<a;i++)
    {
        for (int j=0;j<a;j++)
        {
            /*if (i==j)
            {
                diagonale+=m[i][j];
            }*/
        }
    }
    if (m[i][i]<m[i][j])
    {
     return 1;   
    }
    else
    {
        return 0;
    }
    
}





