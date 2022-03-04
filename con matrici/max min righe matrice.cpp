/*Programma che legge una matrice A (M × N) e:
1. stampa l’elemento massimo con i suoi indici di riga e di colonna;
2. costruisce il vettore degli elementi massimi di ogni riga, e lo stampa;
3. costruisce il vettore degli elementi massimi di ogni colonna, e lo stampa;
4. verifica se la matrice e` diagonale (in questo caso M = N)
(una matrice si dice diagonale se Aij = 0 quando i 6= j);
5. verifica se la matrice e` simmetrica
(una matrice si dice simmetrica se Aij = Aji per ogni coppia di indici i e j);
6. calcola la matrice T (N × M) trasposta di A, e la stampa
(il generico elemento Tij della trasposta T di A e` pari ad Aji).*/

#include <iostream>
#include <climits>
using namespace std;
int main ()
{
    int n,m,max,maxc,maxr,diagonale=0,diagonale2=0,i,j;
    do
    {
     cout << "inserisci un numero di righe (minimo 2):    ";
     cin >> n;
        if (n<2)
        {
            cout << "\nsei un coglione! riprova."<< endl;
        }
    }while(n<2);
     do
    {
        cout << "inserisci il numero di colonne (minimo 2):    ";
        cin >> m;
        if (m<2)
        {
            cout << "errore."<< endl;
        }
    }while(m<2);
    int a [n][m];
     for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout << "inserisci l'elemento di coordinata ["<<i<<"]["<< j << "]:   ";
            cin >> a[i][j];
        }
    }
    //stampa la matrice
    for (int i=0;i<n;i++)
    {
        cout << "\n";
        for (int j=0;j<m;j++)
        {
            cout << "\t"<<a[i][j];
        }
    }
    
    //calcolo l'elemento massimo di TUTTA la matrice dandone le coordinate
    max= a[0][0];
    for (int i=1;i<n;i++)
    {
        for (int j=1;j<m;j++)
        {
            if (a[i][j]>max)
            {
                max=a[i][j];
                 cout << "\nl'elemento massimo e' "<<max<<" e ha coordinata ["<< i<<"][" << j<<"]" <<endl;
            }
        }
           
    }
    
    //calcolo della diagonale principale
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (i==j)
            {
                diagonale+=a[i][j];
            }
        }
    }
   cout << "la diagonale principale e' "<<diagonale << endl;
    
    //calcolo della diagonale secondaria
      for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            
            if (i+j==2)
            {
                diagonale2+=a[i][j];
                    cout << "la diagonale secondaria e' "<< diagonale2<< endl;
            }
        }
    }

    
    //calcolo la matrice transposta
    int b[m][n];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            b[j][i]=a[i][j];
        }
    }
       for (int i=0;i<n;i++)
    {
        cout << "\n";
        for (int j=0;j<m;j++)
        {
           cout << "\t"<<b[i][j];
        }
    }
   
   
    
    
    
    
   
    
    return 0;
}
