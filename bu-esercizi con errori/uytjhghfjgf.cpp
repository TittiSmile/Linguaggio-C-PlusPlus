#include <iostream>
using namespace std;

int diagonale_nulla (int[][10], int);

int main () {

// dichiarazione e lettura matrice
cout << "inserire grandezza matrice NxN" << endl << "N=?" << endl;
int n=0;
cin >> n;
int A[n][10];
int i, j;
cout << "inserire elementi matrice NxN" << endl;
for (i=0; i<=n-1; i++)
{
for (j=0; j<=n-1; j++)
{
cin >> A[i][j];
}
}

// verifica elementi nulli in diagonale principale e stampa del risultato
if (diagonale_nulla(A, n)==0)
{
cout << "NON CI SONO elementi nulli nella diagonale principale della tua matrice" << endl;
}
else
{
cout << "CI SONO elementi nulli nella diagonale principale della tua matrice" << endl;
}

// stampa diagonale tua per verifica
cout << "la diagonale messa e'" << endl;
for (i=0; i<=n-1; i++)
{
for (j=0; j<=n-1; j++)
{
cout << A[i][j];
}
cout << endl;
}
return 0;
}



// funzione ricorsiva usata nel main
int diagonale_nulla (int a[][10], int x) {
if (x>=0) {
if (a[x][x]==0) {
return 1;
}
else {
diagonale_nulla (a, x-1);
}
}
else {
return 0;
}

}


