/*Si progetti ed implementi in C++ un algoritmo che, presi in input 2 numeri interi, n>=2 ed m>=2:
acquisisca da standard input gli elementi di vettore bidimensionale A di dimensione n*m e di un vettore bidimensionale B 
di dimensione m*n
invochi una procedura che verifichi se A è la matrice trasposta di B.
In caso affermativo la procedura deve fornire su standard output il messaggio "true"; altrimenti su standard output, la procedura 
deve fornire la lista degli elementi differenti e dei rispettivi indici di posizione delle matrici A e B.
NOTA: B è la matrice trasposta di A se B[i][j] = A[j][i] ? [i]={1, ..... , m} & ? [j]={1,....,n}*/

#include <iostream>
using namespace std;
void trasposta (int *punt1,int *punt2,int x,int y);
int main ()
{
    int n,m;
    do
    {
        cout << "inserisci un numero n maggiore di 2 (righe):   ";
        cin >> n;
        cout << "inserisci un numero m maggiore di 2 (colonne):   ";
        cin >> m;
        if (n<2 || m<2)
         {
             cout << "errore: n ed m devono essere maggiori di due! "<< endl;
         }
    }while (n<2 || m<2);
    int a[n][m];
    int b [m][n];
    int *p=&a[0][0];
    int *q=&b[0][0];
    cout << "Prima matrice(a):\n";
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout << "inserisci l'elemento di coordinata ["<<i<<"]["<<j<<"]:   ";
            cin >> *(p+i*m+j);
        }
    }
    cout << "Seconda matrice(b):\n";
     for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout << "inserisci l'elemento di coordinata ["<<i<<"]["<<j<<"]:   ";
            cin >> *(p+i*m+j);
        }
    }
    trasposta (p,q,n,m);
 
    return 0;
}
void trasposta (int *punt1,int *punt2,int x,int y)
{
    bool c=true;
    int contatore=0;
    for(int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {
            if (*(punt1+i*y+j) != *(punt2+j*x+i))
            {
                c=false;
                if (contatore==0)
                {
                    cout << "b non e' la matrice trasposta di a!"<< endl;
                }
                contatore++;
                cout <<"a: ["<< i<<"]["<< j<<"]= "<< *(punt1+i*y+j)<< " e' diverso da ["<< i <<"]["<< j <<"]="<< *(punt2+j*x+i)<< endl;
                
            }
        }
    }
    if (c)
    {
        cout << "b e' la trasposta di a"<< endl;
    }
}




