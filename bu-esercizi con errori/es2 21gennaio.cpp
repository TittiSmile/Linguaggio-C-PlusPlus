#include <iostream>
using namespace std;
void scaffali(int mag[m][s][b],int m,int s,int b);
void media (int mag [][2][2],int m,int s,int b);
int main ()
{
    const int m=2,s=2,b=2;
    int magazzino [m][s][b];
    int i,j,k;
    for (int i=1;i<m;i++)
    {
        for (int j=1;j<s;j++)
        {
            for (int k=1;k<b;k++)
            {
                do
                  {
                    cout<< "Inserisci il bene di coordinata ["<< i << "]["<<j<<"]["<<k<<"]:   ";
                    cin >> magazzino[i][j][k];
                    if (magazzino[i][j][k]<0 || magazzino[i][j][k]>10)
                    {
                        cout << "Errore! Il bene deve essere compreso tra 0 e 10."<< endl;
                    }
                  }while (magazzino[i][j][k]<0 || magazzino[i][j][k]>10);
            }
        }
    } 
    
     for (int i=1;i<m;i++)
    {
        for (int j=1;j<s;j++)
        {
            for (int k=1;k<b;k++)
            {
               if (magazzino[i][j][k]>0 || magazzino[i][j][k]<10)
               {
                   cout << "Nello scaffale "<< j << " del magazzino "<< i <<" ci sono "<< magazzino[i][j][k]<< " unita' di bene "<< k << endl;
               }
               else
               {
                   cout << "Lo scaffale "<< j << " del magazzino "<<i << " ha 0 unita' di bene "<< k << endl; 
               }
            }
        }
    } 
    scaffali( magazzino[m][s][b], m, s, b);
     media ( magazzino[2][2][2], m, s, b);
    
    return 0;
}
void scaffali(int mag[][2][2],int m,int s,int b)
{
     for (int i=3;i<m;i++)
    {
        for (int j=1;j<s;j++)
        {
            for (int k=1;k<b;k++)
            {
               if (mag [i][j][k]!=0)
               {
                   cout << "Nel magazzino [3]["<<j << "]["<<k<<"] ha un bene pari a 2"<< endl;
               }
            }
        }
    } 
}

void media (int mag [][2][2],int m,int s,int b)
{
    int somma=0;
    float media;
     for (int i=3;i<m;i++)
    {
        for (int j=1;j<s;j++)
        {
            somma=0;
            for (int k=1;k<b;k++)
            {
              somma+=mag[i][j][k];  
            }
        }
    } 

media=(float) somma/2;
}
