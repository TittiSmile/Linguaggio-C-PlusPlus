//stringhe e matrici
#include <iostream>
#define max_alunni 3
#define max_materie 4
using namespace std;
int main ()
{
    int pagella [max_alunni][max_materie];
    string alunni[max_alunni]= {"Franco","Sbirulo","Cacca" };
    string materie[max_materie]= {"Italiano","Matematica","Storia","Inglese"};
    for (int i=0;i<max_alunni;i++)
    {
     cout << "Inserisci il voto dell'alunno  " << alunni [i]<<" ";    // i è il contatore degli alunni
      for (int j=0;j<max_materie;j++)
      {
          cout << "per la materia: " << materie[j] << endl; // j è il contatore per le materie
          cin >> pagella [i][j];                                             // nel cin verrà chiesto il voto dell'alunno x per la materia y. 
      }
      
    }
    
    
    
    return 0;
}



/* 
        |Italiano| |Matematica| |Storia| |Inglese|

|Franco|    
|Sbirulo|
|Cacca|

questa è la rappresentazione della matrice pagella dove le righe sono rappresentate dai nomi degli alunni e le colonne sono rappresentate dalle materie.
*/
