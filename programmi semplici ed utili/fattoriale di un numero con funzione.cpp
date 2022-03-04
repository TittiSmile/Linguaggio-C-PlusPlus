//programma che calcola il fattoriale con funzione 
#include <iostream>
using namespace std;

long double fattoriale (int n);

int main ()
{
    long double numero;
    char ripeti;
    do
    {
        
        cout << "Inserisci un numero per il calcolo del fattoriale " << endl;
        cin >> numero;
        fattoriale (numero);
        cout << "il fattoriale di " << numero << " e' " << fattoriale(numero) << endl << endl;
        cout << "Continuare? (S/N) "<< endl;
        cin >> ripeti;
                if (ripeti=='n' || ripeti=='N')
                {
                  cout << "Arrivederci" << endl;   
                } 
                
    } while (ripeti == 's' || ripeti == 'S');
    
    return 0;
}



long double fattoriale (int  n) //questa è una funzione ricorsiva ovvero,nella funzione c'è la chiamata a se stessa.
{
    if (n<=1)
    {
        return 1;
    }
    else if ( n>1)
    {
        return n*fattoriale(n-1);
    }
    
    
}
