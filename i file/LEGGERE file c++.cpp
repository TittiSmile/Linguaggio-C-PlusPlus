#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
    FILE *pf;
    char parola[100];
    pf=fopen("D:\\Titti\\File scritti da me\\Block notes\\film da vedere.txt","r");
    //a differenza del C,nel C++,per LEGGERE un file di testo(quindi,si prende in considerazione il fatto che nel file ciao.txt
   // ci sia scritto qualcosa),bisogna scrivere il perscorso di quest'ultimo.


    //N.B. invece del '\\' potresti usare il singolo '/' . la formalità del '\\' è dovuta al fatto che il singolo '\'
    //può essere assegnato come operatore '\n' o '\t'...

    if(pf==NULL)
    {
        cout<<"Impossibile aprire il file"<< endl;
        //se,in questo caso,il file 'ciao.txt' non esiste, il compilatore darà il messaggio di errore
        return(1);
    }

    while(!feof(pf))   //fin quando non finisce il file pf...
    //se non mettessimo questo while ma utilizzassimo soltanto la fgets,il programma prenderebbe soltanto la prima riga!
    {
        fgets(parola,100,pf);
// in questo caso,la funzione fgets, funziona scrivendo 3 parametri:
//1-dove mettere la frase/riga che legge (in questo caso in 'parola')
//2-quanti caratteri della riga dovrà prendere (in questo caso 100)
//3-il file da dove leggere la riga(in questo caso 'pf')

        cout<<parola<< endl;//in questo caso,leggiamo tramite terminale ciò che è scritto nel file di testo (txt)
    }

    fclose(pf);



    //system("PAUSE");
    return 0;
}
///////////////////////////////////////////////////////////
//come si può notare,le differenze col C sono lievi (almeno per quanto riguarda la LETTURA DA FILE).


