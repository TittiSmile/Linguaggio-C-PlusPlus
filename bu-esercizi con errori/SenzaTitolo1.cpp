#include <iostream>
using namespace std;
int main ()
{
    int sequenza,n;
    cout << "inserisci una sequenza" << endl;
    cin >> sequenza;
    cout << "inserisci un numero n" << endl;
    cin >> n;
   for (int i=0; i<sequenza; i++)
   {
    int n[i];
    cin >> n[i];
    int sequenza[i];
    if (sequenza[i]==n[i])
    cout << "n è nella sequenza";
   }
    
    return 0;
}
