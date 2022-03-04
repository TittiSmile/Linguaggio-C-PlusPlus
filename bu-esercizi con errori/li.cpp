#include <iostream>
using namespace std;
int main ()
{
    int n,m,l;
    cout << "inserire la dimensione delle sequenze" << endl;
    cin >> n >> m;
    int a [n];
    int b [m];
    cout << "inserisci " << n << " numeri" << endl;
    for (int i=0; i<n; i++)
    {
      cin >> a [i];
    }
    cout << "inserisci " << m << " numeri" << endl;
    for (int j=0; j<m; j++)
    {
        cin >> b [j];
    }
    l=n+m;
    int c [l];
    for (int k=0; k<n;k++)
    for (int i=0; i<n;i++)
    c[k]= a[i];
    for (int k=0; k<l;k++)
    for (int j=0;j<m;j++)
    c[k]= b[j];
    
    int lol;
    for (int k=0; k<l;k++)
    {
        for(int z=0; z<l; z++)
        {
            if (c[k]< c[z])
            {
                lol=c[k];
                c[k]=c[z];
                c[z]=lol;
            }
        }
    }
    for (int k=0; k<l;k++)
    {
        cout << c[k] << " " <<  endl;
    }
    return 0;
}
