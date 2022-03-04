// programma che valuta se una parola è palindroma o no
#include <iostream>
#define dim 100
using namespace std;
int main ()
{
    char parola [dim], a,i=0;
    cout << "Inserisci una parola terminante da '.':    ";
    cin >> a;
    while (i<dim && a!='.')
    {
        parola[i]=a;
        i++;
        cin >> a;
    }
    
    int n=i;
    i=0;
    while (i<n/2 && parola[i]==parola[n-i-1])
    {
        i++;
    }
        if ( i== n/2)
        {
            cout << "La sequenza e' palindroma" << endl;
        }
    
            else 
            {
                cout << "La sequenza NON e' palindroma" << endl;
            }
    return 0;
}
