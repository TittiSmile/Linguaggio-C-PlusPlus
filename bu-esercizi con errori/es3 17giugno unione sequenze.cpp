#include <iostream>
using namespace std;
int main ()
{
    int n,m;
    int i=0,j=0;
    int temp;
    cout << "Quanto e' grande la prima sequenza?   ";
    cin >> n;
    cout << "Quanto e' grande la seconda sequenza?   ";
    cin >> m;
    int a[n];
    int b[m];
    for (int i=0;i<n;i++)
          {
                  cout << "\nInserisci il valore "<< i+1<< " della PRIMA sequenza\n(i valori devono essere in senso crescente!)" << endl;
                   cin >> a[i];
          }
          

    for (int j=0;j<m;j++)
           {
               cout << "nInserisci il valore "<< j+1<< " della SECONDA sequenza\n(i valori devono essere in senso crescente!)" << endl;
               cin >> b[j];
            }
        
       int r;
       r=n+m;
       int c[r];
       
       for (int i=0;i<n;i++)
       {
           c[i]=a[i];
       }
       for (int i=0, j=n;j<m;i++,j++)
       {
           c[j]=b[i];
       }
       for (int i=0;i<r;i++)
       {
           for (int j=i+1;j<r;j++)
           {
               if (c[j]>c[i])
               {
                   temp=c[i];
                   c[i]=c[j];
                   c[j]=temp;
               }
           }
       }
       for (int i=0;i<r;i++)
       {
           cout << c[i] << " ";
       }
     
    return 0;
}
