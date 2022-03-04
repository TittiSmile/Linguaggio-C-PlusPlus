#include <iostream>
using namespace std;
int main ()
{
    int n,m;
    int i=0,j=0;
    int somma=0;
    int somma2=0;
    int diagonale=0;
    int diagonale2=0;
    cout << "Quante righe?    ";
    cin >> n;
    cout << "Quante colonne?    ";
    cin >> m;
    int mat [n][m];
    int mat_tras [m][n];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout << "Inserisci un valore per la coordinata ["<< i << "] ["<< j << "]:   ";
            cin >> mat [i][j];
        }
    }
   //in cout viene la matrice
    cout << "La matrice e' " << endl;
      for (int i=0;i<n;i++)
    {
        cout << "\n";
        for (int j=0;j<m;j++)
        {
            cout <<"\t "<< mat [i][j];
        }
    }
   
   // facciamo lo scambio con la matrice trasposta
 for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
           mat_tras[j][i]= mat [i][j];
        }
    }
    
    cout << "\n\nLa matrice trasposta e':"<< endl;
     for (int i=0;i<m;i++)
    {
        cout << "\n";
        for (int j=0;j<n;j++)
        {
          cout <<"\t"<< mat_tras[i][j];
        }
    }
     
     //calcolo diagonale principale
     for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            somma+=mat[i][j];
              if (i==j)
              {
                  diagonale+=mat[i][j];
              }
        }
    }
    //calcolo diagonale secondaria
         for (int i=0;i<n;i++)
    {
        
        for (int j=0;j<m;j++)
        {
            somma2+=mat[i][j];
               if (i+j==2)
               {
                   diagonale2+=mat[i][j];
               }
        }
    }
    
 
     
    cout << "\n\n\t\t***MATRICE***"<<endl; 
    cout << "La diagonale principale e'   "<<diagonale<< endl;
    cout << "La diagonale secondaria e'   "<< diagonale2<< endl;
    cout << "La somma dei valori  e'   "<< somma << endl;
    
    
    
    return 0;
}
