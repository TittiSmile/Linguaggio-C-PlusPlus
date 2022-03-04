//programma che dà in output l'anagramma di una parola
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
using namespace std;
int main ()
{
    char parola [50];
    int i=0,t=0,j,k,variabile,lunghezza;
    cout << "Programma che da' in output l'anagramma di una parola.\nDigitare una parola" << endl;
    cin >> parola;
    lunghezza= strlen (parola);
    srand (time(NULL));
   
    while (t<lunghezza)
    {
       while (i<lunghezza)
       {
           j= rand () % lunghezza;
           k= rand () % lunghezza;
           cout << "j= " << j << "\nk= " << k<< endl;
           variabile=parola[j];
           parola [j]= parola [k];
           parola [k]= variabile;
           i++;
            cout << "\nL'anagramma e' " << parola << endl;
       }
       t++;
    }
    
    
    return 0;
}
