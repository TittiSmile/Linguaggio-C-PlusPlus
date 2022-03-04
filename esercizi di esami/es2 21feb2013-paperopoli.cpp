//paperopoli 21feb2013
#include <iostream>
#include <climits>
#define R 500 //reparti-> 500
#define M 30  //medici-> 30
#define P 10  //pazienti-> 10
using namespace std;
void acquisisci (int *r,int *m,int *p,int a[][M][R]);
void stampa_ospedale (int *r,int *m,int *p,int a[][M][R]);
int min_pazienti (int *r,int *m,int *p,int a[][M][R]);
void pazienti (int *r,int *m,int *p,int a[][M][R]); 

int main ()
{
    int r1=3,m1=2,p1=1;
    int a1[10][30][500];
    int x=0;
    acquisisci (&r1,&m1,&p1,a1);
    stampa_ospedale(&r1,&m1,&p1,a1);
    x=min_pazienti(&r1,&m1,&p1,a1);
    cout << "Il reparto con meno pazienti e' "<<min_pazienti<< endl;
    pazienti (&r1,&m1,&p1,a1);
    
    
    
    
    system("PAUSE");
    return 0;
}

void acquisisci (int *r,int *m,int *p,int a[][M][R])
{
    int q=0;
    for (int i=0;i<*r;i++)
    {
        for (int j=0;j<*m;j++)
        {
            for(int k=0;k<*p;k++)
            {
                cout << "inserisci un numero per il reparto "<<i+1<<"\ndove lavora il medico "<<j+1<<"\nche cura il paziente "<<k+1<< endl;
                cin >> a[i][j][k];
                a[i][j][k]=q;
            }
        }
    }
    
}
void stampa_ospedale (int *r,int *m,int *p,int a[][M][R])
{
    
    for (int i=0;i<*r;i++)
    {
        for (int j=0;j<*m;j++)
        {
            for(int k=0;k<*p;k++)
            {
               cout << "Giorni rimasti al paziente  "<<k+1<<"  del medico "<<j+1<< " del reparto "<<i+1<< a[i][j][k]<< endl;     
            }
        }
     }   
    
}

int min_pazienti (int *r,int *m,int *p,int a[][M][R])
{
    int somma=0;
    int MIN=INT_MAX;
    for (int i=0;i<*r;i++)
    {
        for (int j=0;j<*m;j++)
        {
            for (int k=0;k<*p;k++)
            {
                somma+=a[i][j][k];
                if (somma<MIN)
                {
                    MIN=somma;
                }
            }
            somma=0;
        }
    }
    return MIN;
}

void pazienti (int *r,int *m,int *p,int a[][M][R])
{
    int temp;
    for (int i=0;i<*r;i++)
    {
        for (int j=0;j<*m;j++)
        {
            for (int k=0;k<*p;k++)
            {
                if (a[i][j][k]>0)
                {
                    temp++;
                }
                
            }
           
        }
         cout<<"nel reparto "<<i+1<<" sono ricoverati "<< temp+1 <<" pazienti"<< endl;
               temp=0;
    }
       
}

/*
 int     A[rep][med][paz];
    int*     punt=&A[0][0][0];
    
    *(punt+i*(med*paz)+j*paz+k)
*/


