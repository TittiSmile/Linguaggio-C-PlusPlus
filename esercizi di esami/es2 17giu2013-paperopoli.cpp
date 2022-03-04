#include<iostream>
#include <climits>
#define P 500 // 500 piattaforme
#define C 30 // 30 container
#define S 10 // 10 scatole
using namespace std;

void acquisisci(int p,int c,int s,int a [][C][P]);
void stampa (int p,int c,int s,int a [][C][P]);
int container_pieno (int p,int c,int s,int a [][C][P]);
float medio_scatole (int p,int c,int s,int a [][C][P]);

int main ()
{
    int p=3,c=2,s=1;
    int x=0;
    int a[10][30][500];
    acquisisci(p,c,s,a);
    stampa(p,c,s,a);
    x=container_pieno(p,c,s,a);
    cout<<" la piattaforma piu' piena e' quella di indice "<<x<< endl;
    medio_scatole(p,c,s,a);
    
    
    system ("PAUSE");
    return 0;
}
void acquisisci(int p,int c,int s,int a [][C][P])
{
   for (int i=0;i<p;i++)
    
    {
        for (int j=0;j<c;j++)
        {
            for(int k=0;k<s;k++)
            {
                cout << "inserisci il numero giorni di spedizione per la piattaforma "<<i+1<<"\ndel container "<<j+1<<"\ndella scatola "<<k+1<< endl;
                cin >> a[i][j][k];
                
            }
        }
    }
}

void stampa (int p,int c,int s,int a [][C][P])
{
     for (int i=0;i<p;i++)
   {
       cout<<"______PIATTAFORMA "<<i+1<< "______" <<endl<<endl; 
       
       for (int j=0;j<c;j++)
       {
          for (int k=0;k<s;k++) 
          {
             cout<<"giorni di spedizione della scatola "<<k+1<<" del container "<< j+1<<":   "<< a[i][j][k]<<endl;
          }
       }
   } 
    
}
int container_pieno (int p,int c,int s,int a [][C][P])
{
    int MAX=INT_MIN;
    int max_ind=0;
    int somma=0;
    for (int i=0;i<p;i++)
    {
        for (int j=0;j<c;j++)
        {
            for (int k=0;k<s;k++)
            {
                somma+=a[i][j][k];
                if (somma>MAX)
                MAX=somma;
                max_ind=i;
            }
        }
    }
    somma=0;
    return max_ind;
}

float medio_scatole (int p,int c,int s,int a [][C][P])
{
    float media=0.0;
    int temp=0;
    
    for (int i=0;i<p;i++)
    {
        for (int j=0;j<c;j++)
        {
            for (int k=0;k<s;k++)
            {
               //media+=a[i][j][k];
               if (a[i][j][k]>0)
               {
                   temp++;
               }
            }
        }
    }
    media=(float)temp/(float)c;
    cout<<"il la media delle scatole e' "<<media<< endl;
    temp=0;
    return media;
    
}



