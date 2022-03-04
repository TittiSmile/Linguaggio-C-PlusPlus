#include <iostream>

using namespace std;
int main()
{

    int n, m, r;
    int i, j, k;

    cout << "Inserisci le lunghezze delle due sequenze" << endl;
    cin >> n >> m;

    int A[n], B[m];

    cout << "Inserisci " << n << " interi" << endl;

    for (i=0; i<n; i++)
        cin >> A[i];

    cout << "Inserisci " << m << " interi" << endl;

    for (j=0; j<m; j++)
        cin >> B[j];

    r = n+m;

    int C[r];

    for (k=0, i=0; k<n, i<n; k++, i++)
        C[k] = A[i];

    for (k=n, j=0; k<r, j<m; k++, j++)
        C[k] = B[j];

    int app;

    for (k=0; k<r; k++)
        for (int z=0; z<r; z++)
            if (C[k] < C[z]) {
                app = C[k];
                C[k] = C[z];
                C[z] = app;
            }

    for (k=0; k<r; k++)
        cout << C[k] << " ";

    cout << endl;

    return 0;
}
