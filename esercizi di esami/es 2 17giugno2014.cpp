/*programma che calcola la tavola pitagorica di numeri da 3 a 10*/
#include <iostream>
#define N 100
using namespace std;
void acquisisci (int *n);
int tavola (int *n,int m[][N]);


int main ()
{
  int numero;
  int mat [N][N];
  acquisisci(&numero) ;
  tavola(&numero,mat);
   
   
    system("PAUSE");
    return 0;
}

void acquisisci (int *n)
{
    do
        {
        
         cout << "inserisci un numero compreso tra 3 e 10"<< endl;
         cin >> *n;
         if (*n<3 || *n>10)
         cout << "Errore"<< endl;
         
        }while (*n<3 || *n>10);
}

int tavola (int *n,int m[][N])
{
   int i,j;
   for (int i=0;i<*n;i++)
   {
       for (int j=0;j<*n;j++)
       {
           m[i][0]=i;
           m[0][i]=i;
           
       }
       
   }
   
   for (int i=1;i<*n;i++)
   {
       for (int j=1;j<*n;j++)
       {
           m[i][j]=m[0][j]*m[i][0];
       }
       
   }
   
   for (int i=0;i<*n;i++)
   {
       cout << "\n"<< endl;
       for (int j=0;j<*n;j++)
       {
          cout << "\t"<<m[i][j];
       }
       
   }
   cout << "\n\n\n";
   
   return m[i][j];
   
   
   
   
}


