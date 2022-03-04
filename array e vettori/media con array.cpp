//programma che calcola la media di una classe (con ARRAY)
#include <iostream>
using namespace std;
int main ()
{
    int voto[30];
    int alunni,somma;
    float media;
    cout <<"Programma che calcola la media dei voti degli alunni\n" << endl;
    do
    {
        cout <<"Quanti alunni ci sono? " << endl;
        cin >> alunni;
        if (alunni<15 || alunni>30)
        {
            cout << "errore! gli alunni sono un minimo di 15 e un massimo di 30.\n " << endl;
        }
    } while (alunni<15 || alunni>30);
    
    
    for (int i=0;i<alunni;i++)
        {
            do 
             {
              cout << "inserisci il voto del " << i+1 << " alunno.  " << endl;
              cin >> voto [i];
              somma=somma+voto[i];
              if (voto [i]<1 || voto[i]>10)
              {
                  cout << "errore! il voto e' compreso tra 1 e 10.\n" << endl;
              }

            } while (voto[i]<1 || voto [i]>10);
        }
    media= somma/alunni;
    cout << "la media dei voti degli alunni e' " << media << endl;
    
    return 0;
}
