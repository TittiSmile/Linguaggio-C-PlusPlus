#include <iostream>
using namespace std;
int main ()
{
    // è importante sapere che: scrivere solo il puntatore senza *,vuol dire dare in output solo l'indirizzo (un valore esadecimale). 
    int a=5;
    int b=3;
    int *p;
    int *q;
    p=&a;     //in questo modo si assegna alla variabile p l'indirizzo di memoria di a (e dunque il valore che contiene,in questo caso 5). scrivere *p=&a è ERRORE! scrivere int *p=&a NON è errore poichè si dichiara sia il puntatore che l'uguaglianza
    q=&b;
    cout << "a= "<<a<<"\nb= "<<b<< "\n*p= "<<*p<<"\n*q= "<<*q;
    a+=2; // equivale a scrivere *p+=2
    *q+=3; // equivale a scrivere b+=3
    cout << "\na= "<<a <<"\n*q= "<<*q<< endl; 

    
    
    return 0;
}
