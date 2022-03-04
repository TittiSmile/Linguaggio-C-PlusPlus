#include <iostream>
#include <time.h>
#include <stdlib.h>

#define righe 4
#define colonne 4
using namespace std;

void Matrice (int matrice [][colonne],int r,int c);
void scambiaColonne (int matrice [][colonne],int colonna1,int colonna2,int rr,int cc);
void random (int matrice [][colonne],int r,int c);

int main ()
{
    int matrice [righe][colonne];
    int a,b;
    
    random (matrice,righe,colonne);
    
    cout << "la matrice di partenza e' "<< endl;
    
    Matrice(matrice,righe,colonne);
   
    cout << "\ninserisci la prima colonna che vuoi scambiare   ";
     cin >> a;
     cout << "\ninserisci la seconda colonna che vuoi scambiare   ";
     cin >> b;
     
     scambiaColonne(matrice,a,b,righe,colonne);
     
     cout << "\nora la matrice e'  "<< endl;
     Matrice(matrice,righe,colonne);
     cout << endl;
     
    
    
    
    
    
    
    
    system ("PAUSE");
    return 0;
}

void Matrice (int matrice [][colonne],int r,int c)
{
    for (int i=0;i<righe;i++)
    {
        cout << "\n";
        for (int j=0;j<colonne;j++)
        {
            cout << "\t"<< matrice [i][j];
        }
    }
    
    
}
void scambiaColonne (int matrice [][colonne],int colonna1,int colonna2,int rr,int cc)
{
    int temp;
    for (int i=0;i<rr;i++)
    {
        temp= matrice [i][colonna1];
        matrice[i][colonna1]= matrice [i][colonna2];
        matrice [i][colonna2]=temp;
    }
    
     
}
void random (int matrice [][colonne],int r,int c)
{
    srand(time(NULL));
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            matrice [i][j]= rand()%100;
        }
    }
    
}





