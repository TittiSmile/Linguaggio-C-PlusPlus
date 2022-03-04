//esercizio che inverte gli elementi di una matrice;
#include <iostream>
#include <time.h>

#define  RIGHE 4
#define  COLONNE 4

using namespace std; 


void StampaMatrice (int matrice [][COLONNE],int righe,int colonne);
void ScambioColonne(int m[][COLONNE], int Col1 ,int Col2,int r, int c);
void RandMat(int matrice [][COLONNE],int righe,int colonne);
 
  
 int main ()
 {
    
     
    int matrice [RIGHE][COLONNE];
    int i,j;
    
    
    
    //genero matrice casuale
    RandMat(matrice,RIGHE,COLONNE);
   
     
     
     cout << "La matrice di partenza e' " <<  endl;
     StampaMatrice(matrice,RIGHE,COLONNE);
     
     cout<<"inserire la prima colonna da scambiare: ";
     cin>>i;
     cout<<endl<<"inserire la seconda colonna da scambiare: ";
     cin>>j;
    
    ScambioColonne(matrice, i ,j,RIGHE, COLONNE);
    
    cout << "La matrice ora e' " <<  endl;
     StampaMatrice(matrice,RIGHE,COLONNE);
     
     
     
     
     
     system("PAUSE");
     
     
     return 0;
 }


void StampaMatrice (int matrice [][COLONNE],int righe,int colonne)
{
    for (int i=0;i<righe;i++)
    {
        for (int j=0;j<colonne;j++)
        {
            cout << matrice [i][j] << "\t";
        }
        cout<<endl;
    }
}


void ScambioColonne(int m[][COLONNE], int Col1 ,int Col2,int r, int c)
{
     int temp;
       for (int i=0;i<r;i++)
    {
         temp=m[i][Col1];
         m[i][Col1]=m[i][Col2];
         m[i][Col2]=temp;
       
    }
     
     
     
}

void RandMat(int matrice [][COLONNE],int righe,int colonne)
{
     
     
     srand(time(NULL));
    for (int i=0;i<righe;i++)
    for (int j=0;j<colonne;j++)
    matrice [i][j]=rand()%100+1;
       
     
}
