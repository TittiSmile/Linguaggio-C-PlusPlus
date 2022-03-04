#include <iostream>
#define N 100
#define M 100
using namespace std;
void unione (int a[N],int b[M]);
int main ()
{
    int n,m;
    cout << "quanti valori per la prima sequenza? "<< endl;
    cin >> n;
    cout << "quanti valori per la seconda sequenza? "<< endl;
    cin >> m;
    int a[n];
    int b[m];
    cout << "inserisci "<< n << " numeri interi"<< endl;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    cout << "inserisci "<< m <<" numeri interi"<< endl;
    for (int j=0;j<m;j++)
    {
        cin >> b[j];
    }
    
    unione (a,b);
    
    
    return 0;
}
void unione (int a[N],int b[M])
{
    int r=N+M;
    int c[r];
    int k=0;
    
      for (int i=0;i<N;i++)
    {
        if (a[i]%2!=0)
        {
            c[k]=a[i];
            k++;
        }
    }
    
     for (int j=0;j<M;j++)
    {
        if (b[j]%2!=0)
        {
            c[k]=b[j];
            k++;
        }
    }
    
    //se si vogliono fare uscire tutti i numeri! (non solo quelli dispari come sopra)
    /*for (int i=0;i<dim;i++)
    {
        
            c[k]=a[i];
            k++;
    }
    
     for (int j=0;j<dim;j++)
    {
        
            c[k]=b[j];
            k++;
        
    }*/
    
  
    
    cout << "l'unione e' "<< endl;
    for (int i=0;i<k;i++)
    {
        cout << c[i]<<"  ";
    }
    
    
}
















/*int main ()
{
 
   cout << "inserisci la grandezza della prima sequenza:   ";
   cin >> n;
   int a[n];
   cout << "inserisci una sequenza di "<<n << " numeri interi"<<endl;
   for (int i=0;i<n;i++)
   {
       cin >> a[i];
   }
   
   cout << "Inserisci la grandezza della seconda sequenza:   ";
   cin >> m;
   int b[m];
   cout << "inserisci una sequenza "<<m<<" numeri interi"<< endl;
     for (int j=0;j<m;j++)
        {
           cin >> b[j];
        }
        
   unione (&a,&b);
        
    
    return 0;
}

void unione (int *a[],int *b[])
{
    int r;
    r= n+m;
    int k;
    int c[r];
    for (int i=0;i<n;i++)
    {
        if (a[i]%2!=0)
        {
           c[r]=a[i];
           k++; 
        }
    }
    for (int j=0;j<m;j++)
    {
        if (b[j]%2!=0)
        {
            c[r]=b[j];
            k++;
        }
    }
    cout << "l'unione e' "<< endl;
    for (int i=0;i<r;i++)
    {
        cout << c[i];
    }
    
    
    
}*/
