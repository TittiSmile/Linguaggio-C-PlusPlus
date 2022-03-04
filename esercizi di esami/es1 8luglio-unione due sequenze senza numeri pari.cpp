#include <iostream>
using namespace std;
int main ()
{
    int n;
    int m;
    int i;
    int r;
    int temp;
    int k;
    int z;
    int j;
 
        cout << "Quanti numeri vuoi inserire nella 1 sequenza?   ";
         cin >> n;
        cout << "Quanti numeri vuoi inserire nella 2 sequenza?   ";
         cin >> m;
           int v1 [n];
           int v2 [m];
           
  
    cout << "Inserisci " << n << " interi" << endl;
        for (int i=0;i<n;i++)
        {
            cin >> v1[i];
        }
    cout << "Inserisci " << m << " interi" << endl;
        for (int i=0;i<m;i++)
        {
            cin >> v2 [i];
        }
   
     r=n+m;
    int c[r];
    
    for (k=0, i=0; k<n,i<n;i++,k++)
    {
        c[k]=v1[i];
    }
        for ( k=n, j;k<r,j<m;k++,j++)
        {
            c[k]= v2[j];
        }
        
                for (int k=0;k<r;k++)
                {
                    for (int z=0; z<r;z++)
                    {
                        if (c[k] < c[z])
                        {
                            temp=c[k];
                            c[k]= c[z];
                            c[z]=temp;
                        }
                    }
                }
                
                
    
   cout << "Le sequenze insieme sono: " << endl;
       for (int k=0;k<r;k++)
       {
           cout << c[k] << " ";
       }
    
    return 0;
}
    
    









