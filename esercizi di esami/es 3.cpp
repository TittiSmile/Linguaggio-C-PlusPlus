#include <iostream>
#define N 100
using namespace std;
int palindroma (int parola[],int n,int m);
int main ()
{
    int n,m;
    string a[m];
    char pali;
    do 
    {
        cout << "Insersci un numero n maggiore di 1"<< endl;
        cin >> n;
        if (n<1)
        cout << "errore"<< endl;
    }while(n<1);
    
    do
    {
        cout << "inserisci un numero m multiplo di "<< n << endl;
        cin >> m;
        if (m%n !=0)
        cout << "errore"<< endl;
    }while (m%n !=0);
    
    
// che controllo si può usare per verificare che m non sia maggiore del numero inserito?    
       cout << "inserisci una parola di max "<< m << " lettere:"<< endl;
        cin >> a[m];
       
    
   pali=palindroma (parola,n,m);
    
    
    
    system ("PAUSE");
    return 0;
}
int palindroma (char  parola[],int n,int m)
{
       int i=0;  
    /*
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
    
    sequenza di codice per verificare una sequenza palindroma 
    */ 
}







