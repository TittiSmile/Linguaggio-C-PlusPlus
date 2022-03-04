//esercizio che inverte gli elementi di una matrice;
#include <iostream>
using namespace std; 
int const RIGHE= 4;
int const COLONNE= 4;


void StampaMatrice (int matrice [RIGHE][COLONNE],int righe,int colonne)
{
    for (int i=0;i<righe;i++)
    {
        for (int j=0;j<colonne;j++)
        {
            cout << matrice [righe][colonne] << endl;
        }
    }
}
 void Scambio(int &a,int&b)
 {
     int temp;
     temp=a;
     a=b;
     b=temp;
 }
 
 void InvertiColonna(int matrice [RIGHE][COLONNE],int righe,int ColonnaDaInvertire)
 {
     int inizio=0;
     int fine= righe-1;
     while (inizio<fine)
     {
       Scambio( matrice [inizio++][ColonnaDaInvertire], matrice[fine--][ColonnaDaInvertire]);  
     }
 }
 
 void InvertiInteraMatrice (int matrice[RIGHE][COLONNE],int righe,int colonne)
 {
     for (int i=0;i<colonne;i++)
     {
         InvertiColonna(matrice,RIGHE,COLONNE);
     }
 }
 
  int matrice [RIGHE][COLONNE]= {{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4} };
 int main ()
 {
    
     
     cout << "La matrice di partenza e' " << matrice[RIGHE][COLONNE] << endl;
     //cout << "La matrice di partenza e' " << endl;
     StampaMatrice(matrice,RIGHE,COLONNE);
     
     
     int ColonnaDaInvertire=0;
     cout << "Quale colonna vuoi scambiare? (da 1 a " << COLONNE << ") ---> " << endl;
     cin>> ColonnaDaInvertire;
     
     InvertiColonna (matrice,RIGHE,ColonnaDaInvertire-1);
     cout << "La colonna invertita e' " << endl;
     StampaMatrice(matrice,RIGHE,COLONNE);
     
     cout << "Ritorno alla matrice di partenza " << endl;
     InvertiColonna (matrice,RIGHE,ColonnaDaInvertire-1);
     StampaMatrice(matrice,RIGHE,COLONNE);
     
     cout << "Inverto tutte le matrici " << endl;
     InvertiInteraMatrice(matrice,RIGHE,COLONNE);
     StampaMatrice(matrice,RIGHE,COLONNE);
     
     
     
     
     
     return 0;
 }






/*
da così:         a così:
1 1 1 1           4 4 4 4 
2 2 2 2           3 3 3 3 
3 3 3 3           2 2 2 2 
4 4 4 4           1 1 1 1
*/
