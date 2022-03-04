#include <iostream>
#include <climits>
using namespace std;
int main ()
{
    const int dim=10;
    int lista [dim];
    int valore_min=INT_MAX;
    int valore_max=INT_MIN;
    cout << "inserisci 10 valori " << endl;
    for (int i=0; i<dim; i++)
    {
        cin >> lista [i];
    }
     cout << "l'array e' composto dai seguenti numeri:   " << endl;
     for (int i=0;i<dim; i++)
     cout << lista [i] << "\t" << endl;
     for (int i=0; i<dim; i++)
     {
         if (lista [i]< valore_min)
           valore_min=lista [i];
             else if  (lista [i]> valore_max)
               valore_max= lista [i];
     }  
               cout << "Il valore massimo e'   " << valore_max << endl; 
                  cout << "Il valore minimo e'  " << valore_min << endl;
       
    
    return 0;
}
