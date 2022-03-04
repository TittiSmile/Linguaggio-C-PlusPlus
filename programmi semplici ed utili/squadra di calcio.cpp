/*"squadra di calcio". il programma simula un campionato di calcio di massimo 30 giornate dove si perde,si
vince o si pareggia. alla fine il programma stima tutte le vittorie/pareggi/sconfitte e calcola la prima vittoria.*/
#include <iostream>
#define max 30
using namespace std;
int main ()
{
int punteggio[max];
int vittoria=0,sconfitta=0,pareggio=0,totale=0, partita, i=0;
cout << "Sei il proprietario di una squadra di calcio.\nVuoi sapere quante vittorie,sconfitte e pareggi ha fatto la tua squadra.\n\t\t\t***Divertiti!***\n\n" << endl;
    do
    {
      cout << "Partite giocate:   " << endl;
      cin >> partita;
       if (partita<1 || partita>30)
       {
         cout << "!ERRORE! puoi fare un minimo di 1 partita e un massimo di 30.\n" << endl;
       }
    } while (partita<1 || partita>max);
    cout << "Inserire punteggio:\n0-SCONFITTA\n1-PAREGGIO\n3-VITTORIA\n" << endl;
    for (int i=0;i<partita;i++)
    {
        do
        {
           cout << "Punteggio giornata numero " << i+1 << endl;
            cin >> punteggio[i];
             if (punteggio[i]<0 || punteggio[i]>3 || punteggio [i]==2)
             {
              cout << "!ERRORE! i punteggi possono essere 0, 1 e 3.\n" << endl;
             }
        } while (punteggio [i] !=0 && punteggio[i]!=1 && punteggio[i]!=3);
    
      switch (punteggio[i])
      {
         case 0:
              sconfitta++;
             break;
         case 1:
              pareggio++;
              break;
         case 3:
              vittoria++;
              break;
      }
    }
    
    for (int i=0; i<partita;i++)
    {
        totale=totale+punteggio[i];
    }
      i=0;
       while (punteggio [i] !=3 && i<partita)
       {
         i++;
       }
    
           if (i==partita)
           {
             cout << "Nessuna vittoria " << endl;
           }
             else
              {
               cout << "Prima vittoria fatta nella giornata " << i+1 << endl;
              }

    
    cout << "Hai totalizzato " << totale << " punti" << endl;
return 0;    
} 
