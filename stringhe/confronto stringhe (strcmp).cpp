//programma che usa strcmp(confronto tra stringhe). 
#include <iostream>
#include <string.h>     // se si utilizzano stringhe di caratteri,questa libreria � d'OBBLIGO!
using namespace std;
int main ()
{
    char nome [30];
    do 
    {
        cout << "Come ti chiami? (digita 'esci' per terminare il programma) " << endl;
        cin >> nome;
    }while(strcmp(nome, "esci") !=0);   //la costruzione strcmp �: strcmp(variabile data in input,variabile che si vuole confrontare). il ciclo continuer� fin quando il nome digitaro dall'utente � diverso da "esci".
    cout << "Hai digitato 'esci'.\nArrivederci. " << endl;
    return 0;
system ("pause");
}
