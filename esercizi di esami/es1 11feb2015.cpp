#include <iostream>
#define M 7
#define N 3
using namespace std;

void posizione (int i,int j,int a[][M],int r, int c);

int main ()
{
    int n,m,i,j;
    int a [N][M]
    ={
        {2, -3, 1, 1, 2, 9, 10},
        {1, 3, -1, 1, 9,5 , -1},
        {0, -9, 5, 6, -8, 1, 0}
        
      };
   /* 
    do
    {
        cout << "inserisci un numero n maggiore di 10 "<< endl;
        cin >> n;
        if (n<10)
        {
            cout << "errore,riprovare"<< endl;
        }
        
    }while (n<10);
    
     do
    {
        cout << "inserisci un numero m maggiore di 10 "<< endl;
        cin >> m;
        if (m<10)
        {
            cout << "errore,riprovare"<< endl;
        }
        
    }while (m<10);
    
   */
  
   i=1;
   j=2;
   
   /*
    do
    {
        cout << "inserisci un numero i compreso tra 1 e "<< n-2 <<  endl;
        cin >> i;
        if (i<1 || i>n-2)
        {
            cout << "errore,riprovare"<< endl;
        }
        
    }while(i<1 || i>n-2);
    
     do
    {
        cout << "inserisci un numero j compreso tra 1 e "<< m-2 <<  endl;
        cin >> j;
        if (j<1 || j>m-2)
        {
            cout << "errore,riprovare"<< endl;
        }
        
    }while(j<1 || j>m-2);
    
    
    cout << "\tMATRICE A:"<< endl;
    for (int ii=0;ii<n;ii++)
    {
        for (int jj=0;jj<m;jj++)
        {
            cout << "Inserire l'elemento di coordinata ["<<ii<< "]["<<jj<< "]: ";
            cin >> a[ii][jj];
        }
    }
    */
    
    n=N;
    m=M;
    posizione (i,j,a, n, m);
    
    system ("PAUSE");
    return 0;
}


void posizione (int i,int j,int a[][M], int r, int c)   // non sono sicura della variabile M
{
     
    
     
    //&& (i<r-2) &&(j<c-2)
     
    while(true)
        {
            if ( (a[i+1][j]>a[i][j]) && (i<r) &&(j<c) )
            {
                cout << "mi sposto in *" << a[i+1][j]<< endl;
                i++;
            }
            else if ((a[i+1][j-1]>a[i][j]) && (i<r) &&(j<c) )
            {
                cout << "mi sposto in **"<< a[i+1][j-1] << endl;
                i++;
            }
            else if ((a[i][j-1]> a[i][j]) && (i<r) &&(j<c) )
            {
                cout << "mi sposto in ***" << a[i][j-1]<< endl;
                i++;
            }
            else if ((a[i-1][j-1]> a[i][j])&& (i<r) &&(j<c))
            {
                cout << "mi sposto in ****"<< a[i-1][j-1] << endl;
                i++;
                /*
                .
                .
                .
                .
                .
                */
            }
            else break;
        }
   
    
    
    
}














