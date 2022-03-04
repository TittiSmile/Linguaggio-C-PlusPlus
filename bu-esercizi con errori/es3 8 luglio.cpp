#include <iostream>
#include <climits>
using namespace std;
int main ()
{
    const int dim=100;
    int n,m;
    cout << "inserisci il numero di colonne   ";
    cin >> n;
    cout << "inserisci il numero di righe   "; 
    cin >> m;
    int a[n][m];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout << "inserisci l'elemento di coordinata ["<< i <<"] [" <<j << "]:   ";
            cin >> a [i][j];
        }
    }
    
    





    return 0;
}
