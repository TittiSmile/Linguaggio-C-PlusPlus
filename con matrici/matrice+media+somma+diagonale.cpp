#include <iostream>
using namespace std;
int main ()
{
    int m[3][3];    // abbiamo scelto una matrice quadrata ovvero con righe e colonne di ugual grandezza
    int i,j;
    int n;
    int somma=0;   
    int diagonale=0; //diagonale principale (da sinistra a destra)
    int diagonale2=0; // diagonale secondaria (da destra a sinistra)
    float media;
    cout << "\t\tINSERIAMO LA MATRICE" << endl;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout << "Inserisci l'elemento di posizione [" << i << "] [" << j << "] :   ";
            cin >> m[i][j];
        }
    }
    
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            somma+=m[i][j];
            if (i==j)
            {
                diagonale+=m[i][j];
            }
        }
    }
   
    for (int i=0;i<3;i++)
    {
        
        for (int j=0;j<3;j++)
        {
            
            if (i+j==2)
            {
                diagonale2+=m[i][j];
            }
        }
    }
    
    for (int i=0;i<3;i++)
     {
          for (int j=0;j<3;j++)
          {
              n++;
          }
     }
     media=(float)somma/n;
       cout << "\n\nLa matrice e' " << endl;
       for (int i=0;i<3;i++)
    {
        cout << "\n";
        for (int j=0;j<3;j++)
        {
             cout << m[i][j] << "\t";
        }
    } 
     cout << "\nLa somma e' " << somma << endl;
     cout << "La diagonale principale e' " << diagonale << endl;
     cout << "La media e' " << media << endl;
      cout << "La diagonale secondaria e' " << diagonale2 << endl;
    return 0;
}
