#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;


int main ()
{
    ofstream scrivo("D:\\Titti\\prova.txt",ios::app);//N.B. esistono le classi ofstream,ifstream,fstream. La prima serve per operazioni di sola SCRITTURA sui files; la seconda serve per operazioni in LETTURA; la terza per operazioni in SCRITTURA e LETTURA. 
     // la dicitura 'ios:app' è tipica del C++. essa può essere (nei casi BASE): ios::out,ios::in,ios::app. Servono,rispettivamente, per: l'apertura di un file in SCRITTURA,apertura di un file in LETTURA,apertura di un file append(capace di aggiornare il file).
    if(!scrivo)
    {
        cout<<"ci sono dei problemi."<< endl;
        return(1);
    }
    scrivo<<"sei una merda!"<< endl;
    cout<<"il file e' stato scritto nel blocknote correttamente."<< endl;
    
    
    
    return 0;
}
