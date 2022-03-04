//programma di acquisizione array BASE.
#include <iostream>
using namespace std;
int main ()
{
    int vettore [5];
    int i=0;
    cout << "insersci max 5 valori "  << endl;
    for (int i=0; i<5;i++) 
    {
    cin >> vettore [i];
    }
    
    // visualizzazione numeri 
    cout << "i numeri sono:   " << endl;
    for (int i=0;i<5;i++)
    {
        cout << vettore [i] << endl;
    }
    
    //medesima sequenza al contrario
    
    cout << "la sequenza, vista al contrario,e':  " << endl;
    for (int i=4;i>=0;i--)
    {
        cout << vettore [i] << endl;
    }
    
    return 0;
}
