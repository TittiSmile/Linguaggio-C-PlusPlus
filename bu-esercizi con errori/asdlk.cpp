/*Si progetti ed implementi in C/C++ un algoritmo che, preso in input un numero intero n>=2 :

1. acquisisca da standard input gli elementi di un vettore A di caratteri di lunghezza n e contenente parole separate da uno spazio;
2. invochi una funzione che restituisca 1 (oppure 'true') se ogni parola di A inizia con lo stesso carattere, altrimenti 0 (oppure 'false').
*/
#include <iostream>
using namespace std;
int funzione (char a[],int n);
int main ()
{
    int n;
    int i;
    do
    {
        cout << "inserisci un numero intero maggiore o uguale di 2:   ";
        cin >> n;
        if (n<2)
        {
            cout <<"\terrore,riprova.   "<<endl;
        }
    }while(n<2);
    char a [n];
    cout << "inserisci una parola di dimensione "<<n<<" separata da uno spazio:    ";
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    cout << "hai inserito il vettore di caratteri "<< endl;
    for (int i=0;i<n;i++)
    {
        cout <<"\t" <<a[i]<<" ";
    }
    if (funzione (a,n))
    {
        cout << "\n\nogni parola del vettore inizia con  la stessa lettera.";
    }
    else
    {
        cout << "\n\nNON tutte le parole iniziano con la stessa lettera";
    }
    
    
    return 0;
}
int funzione (char a[],int n)
{
    int x=0;
    for (int i=0;i<n;i++)
    {
        if (a[i]!= ' ' && a[i] != '\n' && a[i] != '\t' )
        {
            x=i;
        }
    }
    
    for (int i=x+1;i<n-1;i++)
    {
      if ((a[i]== ' ' || a[i]== '\n'|| a[i]== '\t') &&  a[i+1]!= a[x] )
      {
          return 0;
      } 
    } 
    return 1;
    
}








