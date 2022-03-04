#include <iostream>
using namespace std;
int main ()
{
    int n,m,o;
    cout << "Inserisci la grandezza della prima sequenza:  ";
    cin >> n;
    cout << "Inserisci la grandezza della seconda sequenza:  ";
    cin >> m;
    o=n+m;
    
    char v1[n];
    char v2[m];
    char v3[o];
    cout << "Inserisci una sequenza di "<<n<< " caratteri in ordine alfabetico!!" << endl;
    for (int i=0;i<n;i++)
    {
            if (v1[i]>= 'A' && v1[i]<= 'Z' )
            {
                v1[i]+=32;        // equivale a scrivere A[i]= A[i]+32;
                  
            }
            
            do 
            {
            cin.get (v1[i]);
            }while (v1[i]== ' ' || v1[i]== '\n');
    }
     cout << "Inserisci una sequenza di "<<m<< " caratteri" << endl;
    for (int i=0;i<m;i++)
    {
        if (v2[i]>= 'A' && v2[i] <= 'Z' )
        {
            v2[m]+=32;
        }
           do 
            {
            cin.get (v2[i]);
            }while (v2[i]== ' ' || v2[i]== '\n');
    }
    int in=0,im=0;
    for (int i=0;i<o;i++)
    {
        if (im==m|| v1[in]<=v2[im] && in<n )
        {
            v3[i]= v1[in];
            in++;
        }
        else 
        {
            v3[i]=v2[im];
            im++;
        }
        
    }
    cout << "Le sequenze unite sono:    " << endl;
    for (int i=0;i<o;i++)
    {
        cout << v3[i] << " ";
    }
    
    
    
    
    
    return 0;
}
