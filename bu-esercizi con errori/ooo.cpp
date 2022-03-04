#include <iostream>

using namespace std;

#define lim_Mag 100
#define lim_Scaf 50
#define lim_Beni 80

void acquisizione(int matrice[lim_Mag][lim_Scaf][lim_Beni]);
void inizializzazione(int matrice[lim_Mag][lim_Scaf][lim_Beni]);
void show(int matrice[lim_Mag][lim_Scaf][lim_Beni]);
void ricerca(int matrice[lim_Mag][lim_Scaf][lim_Beni]);

int main()
{
    int matrx[lim_Mag][lim_Scaf][lim_Beni];

    cout<<"Nella città di Paperopoli sono presenti 100 magazzini, 50 scaffali per magazzino e una disponibilità di 80 beni.\n Inserisci il tipo di bene e il suo quantitativo per ogni scaffale di ogni magazzino\n\n\n";

    inizializzazione(matrx);
    acquisizione(matrx);
    ricerca(matrx);
    show(matrx);

    return 0;
}

void acquisizione(int matrice[lim_Mag][lim_Scaf][lim_Beni])
{
    int q = 0;

    for(int i = 0; i<lim_Mag; i++)
            for(int k = 0; k<lim_Scaf; k++)
                for(int j = 0; j<lim_Beni; j++){
                    cout<<"Magazzino: "<<i+1<<" Scaffale: "<<k+1<<" Oggetto: "<<j+1<<" - inserisci il numero di unità: ";

                    do {
                    cin>>q;
                    if ( ((q>=0)&&(q<=10)) ) { matrice[i][k][j] = q;}
                    else cout<<"Devi inserire valori compresi tra 0 e 10: ";
                    } while(!((q>=0)&&(q<=10)));
                }
}

void inizializzazione(int matrice[lim_Mag][lim_Scaf][lim_Beni])
{
    for(int i = 0; i<lim_Mag; i++)
            for(int k = 0; k<lim_Scaf; k++)
                for(int j = 0; j<lim_Beni; j++)
                        matrice[i][k][j] = 0;
}

void show(int matrice[lim_Mag][lim_Scaf][lim_Beni])
{
    double media = 0;

    for(int i = 0; i<lim_Mag; i++) {
            media = 0;
            for(int k = 0; k<lim_Scaf; k++) {
                    media += matrice[i][k][1];
            }

        media = media/lim_Scaf;
        cout<<"\nNel magazzino "<<i<<" è presente una media negli scaffali del bene 1 di "<<media<<"\n";
    }
}

void ricerca(int matrice[lim_Mag][lim_Scaf][lim_Beni])
{
    int counter = 0;

    for(int k = 0; k<lim_Scaf; k++)
                if(matrice[2][k][79]!= 0) counter++;

    if(counter)cout<<"Nel Magazzino 3, sono presenti "<<counter<<" scaffali con almeno un unità del bene 80";
    else cout<<"Non sono presenti scaffali nel magazzino 3 con almeno un unità del bene 80";
}
