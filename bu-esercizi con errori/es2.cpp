#include <iostream>
using namespace std;
#define lim_mag 100
#define lim_scaf 50
#define lim_beni 80
void a (int matrice  [lim_mag] [lim_scaf] [lim_beni] );
void b (int matrice  [lim_mag] [lim_scaf] [lim_beni] );
void c (int matrice  [lim_mag] [lim_scaf] [lim_beni] );
void d (int matrice  [lim_mag] [lim_scaf] [lim_beni] );

int main ()
{
    int matr  [lim_mag] [lim_scaf] [lim_beni] ;
    cout << "inserire i beni di ogni scaffale del magazzino\n" << endl;
    a (matr);
    b (matr);
     c (matr);
     d (matr);
      return 0;
}
void a (int matrice  [lim_mag] [lim_scaf] [lim_beni] )
{
    int q=0;
    for (int i=0;i<lim_mag; i++)
      for (int j=0; j<lim_scaf;j++)
        for (int k=0;k<lim_beni;k++)
      cout << "magazzino " << i+1 << "scaffale " << j+1 << "bene " << k+1 << "inserisci il numero di unità-" << endl;
      do
      {
          cin>> q;
         if ((q>=0) && (q<=10)) 
          { 
           int matrice [i] [k] [j]=q;
          }
          else 
          {
              cout << "devi inseriere un numero tra 10 e 0" << endl;
          }
      }while ((q>=0)&& (q<=10)) ;
          
      
}
void b (int matrice  [lim_mag] [lim_scaf] [lim_beni] )
{
 for (int i=0;i<lim_mag; i++)
     for (int j=0; j<lim_scaf;j++)
       for (int k=0;k<lim_beni;k++)
      matr [i][j][k]==0;
 }
 void c (int matrice  [lim_mag] [lim_scaf] [lim_beni] )
 {
     float media;
     for (int i=0;i<lim_mag; i++)
     media=0;
     {
          for (int j=0; j<lim_scaf;j++)
          {
              media+=matrice [i][j][1];
          }
     }  
    media=media/lim.scaf;
    cout << "nel magazzino " << i << " c'è la media negli scaffali con 1 bene di " << media << endl; 
 }
 void d (int matrice  [lim_mag] [lim_scaf] [lim_beni] )
 {
   int counter;
   for (int k=0; k<lim_scaf; k++)
   if (matrice[2] [j] [79] != 0) 
   counter++
   {
       cout<< "nel magazzino 3 ci sono " << counter << "scaffali " << endl;
   }
   else
    {
        cout << "non ci sono scaffali con un bene pari a 80 " << endl;
    }
 
 
 
 }     
      









