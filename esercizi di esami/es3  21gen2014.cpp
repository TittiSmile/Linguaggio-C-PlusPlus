#include <iostream>
#define MAX 100
using namespace std;

void acquisisci(int *n,int *m,int a[MAX]);
int medio (int *n,int *m,int a[MAX]);

int main ()
{
    int n1,m1,v[MAX];
    acquisisci (&n1,&m1,v);
    
    
    
    system("PAUSE");
    return 0;
}

void acquisisci(int *n,int *m,int a[MAX])
{
    do
    {
        cout << "inserisci un numero n maggiore di 1"<< endl;
        cin >> *n;
        if (*n<1 || *n>MAX)
        cout << "errore"<< endl;
    }while(*n<1 || *n>MAX);
    
    
    do
    {
        cout << "inserisci un multiplo di "<< *n << endl;
        cin >> *m;
        if (*m%*n !=0)
        cout << "errore"<< endl;
    }while(*m%*n !=0);
    
    for (int i=0;i<*m;i++)
    {
        cout << "inserisci un valore per il numero "<< i << ":   ";
        cin >> a[i];
    }
    
    
}

int medio (int *n,int *m,int a[MAX])
{
    
}





