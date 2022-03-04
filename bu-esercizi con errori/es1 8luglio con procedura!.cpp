#include <iostream>
using namespace std;
const int dim=3;
void unione (int a[dim],int b[dim]);
int main ()
{
    int a[dim];
    int b[dim];
    cout << "inserisci "<< dim << " numeri interi"<< endl;
    for (int i=0;i<dim;i++)
    {
        cin >> a[i];
    }
    cout << "inserisci "<< dim <<" numeri interi"<< endl;
    for (int j=0;j<dim;j++)
    {
        cin >> b[j];
    }
    
    unione (a,b);
    
    
    return 0;
}
void unione (int a[dim],int b[dim])
{
    int r=dim+dim;
    int c[r];
    int k=0;
    
    
    for (int i=0;i<dim;i++)
    {
        
            c[k]=a[i];
            k++;
    }
    
     for (int j=0;j<dim;j++)
    {
        
            c[k]=b[j];
            k++;
        
    }
    
    /*for (int i=0;i<dim;i++)
    {
        if (a[i]%2!=0)
        {
            c[k]=a[i];
            k++;
        }
    }
    
     for (int j=0;j<dim;j++)
    {
        if (b[j]%2!=0)
        {
            c[k]=b[j];
            k++;
        }
    }*/
    
    cout << "l'unione e' "<< endl;
    for (int i=0;i<k;i++)
    {
        cout << c[i];
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
