#include <iostream>
#define MAX 100
using namespace std;

void acquisisci(int *n,int *m,int a[][MAX],int b[][MAX]);
void trasposta (int *n,int *m,int a[][MAX],int b[][MAX]);

int main ()
{
    int n1,m1;
    int a[MAX][MAX],b[MAX][MAX];
    acquisisci(&n1,&m1,a,b);
    trasposta(&n1,&m1,a,b);
    
    
    system("PAUSE");
    return 0;
}

void acquisisci(int *n,int *m,int a[][MAX],int b[][MAX])
{
     do
     {
         cout << "inserisci numero n di righe maggiori di 2"<< endl;
         cin >> *n;
         if (*n<2 || *n>MAX)
         cout << "errore"<< endl;
     }while (*n<2||*n>MAX);
     
      do
     {
         cout << "inserisci numero m di colonne maggiori di 2"<< endl;
         cin >> *m;
         if (*m<2 ||*m>MAX)
         cout << "errore"<< endl;
     }while (*m<2||*m>MAX);
     
     cout<<"\n\t***matrice A***"<< endl;
     for (int i=0;i<*n;i++)
     {
         for (int j=0;j<*m;j++)
         {
             cout << "inserisci elemento di coordinata ["<<i<<"]["<<j<<"]:   ";
             cin >> a[i][j];
         }
     }
     
      cout<<"\n\t***matrice B***"<< endl;
     for (int i=0;i<*n;i++)
     {
         for (int j=0;j<*m;j++)
         {
             cout << "inserisci elemento di coordinata ["<<i<<"]["<<j<<"]:   ";
             cin >> a[i][j];
         }
     }
     
}





void trasposta (int *n,int *m,int a[][MAX],int b[][MAX])
{
    bool trp=true;
    for (int i=0;i<*n;i++)
    {
        for (int j=0;j<*m;j++)
        {
            if(a[i][j]!=b[j][i])
            {
                trp=false;
                cout << "\n\nla matrice a non e' la trasposta di b"<<endl;
                cout<<"a["<<i<<"]["<<j<<"] "<<a[i][j]<< " e' diverso da b["<<j<<"]["<<j<<"] "<<b[j][i]<<endl;
            }
            
        }
    }
  
    if(trp)
    cout <<"la matrice a e' la trasposta di b"<< endl;
    
    
    //questa funzione non va bene,mi salva i valori della matrice b nella matrice a e la matrice b resta vuota
}
