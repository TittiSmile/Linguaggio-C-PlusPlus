//programma che cambia colore al terminale
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main ()
{
    char parola [10]= "color ";
    cout << "Per scegliere il colore digitare un numero da 0 a 9 o una lettera da A fino a F" << endl;
    do 
    {
     cout << "Scegliere il colore dello sfondo" << endl;
     cin >> parola[6];
     if ((parola [6]<0 || parola [6]>9) || (parola [6]<'a' || parola [6]> 'f') ||  (parola [6]<'A' || parola [6]> 'F'))
     {
         cout << "errore! riprova." << endl;
     }
    } while (parola[6]<9 && parola [6]<'f');
    do
    {
    cout << "scegliere il colore del testo" << endl;
    cin >> parola [7];
     if ((parola [7]<0 || parola [7]>9) || (parola [7]<'a' || parola [7]> 'f') ||  (parola [7]<'A' || parola [7]> 'F'))
     {
         cout << "errore! riprova." << endl;
     }
    } while (parola[7]<9 && parola [7]<'f');
    
    
   
   
    parola [8]= '\0';
    system (parola);
    system ("pause");
    cout <<"Surprise MADDAFFAKKA!!";
    
    
    
    return 0;
}
