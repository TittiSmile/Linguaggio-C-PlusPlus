//struct o anche note come record.
#include <iostream>
using namespace std;
struct identita
{
    string nome ; // scrivere char nome []  � equivalente alla scrittura string nome. la differenza � che il primo � un vettore di caratteri,il secondo � una stringa vera e propria. in programmi come questi,� preferibile usare string.
    float altezza;
    int anni;
    
};
int main ()
{
    identita id;
    id.nome = "Titti";
    id.altezza= 1.55;
    id.anni=19;
    cout <<"Nome:   "<< id.nome << endl;
    cout << "Altezza:   " << id.altezza << endl;
    cout <<"Anni:   " << id.anni << endl;

    
    return 0;
}
