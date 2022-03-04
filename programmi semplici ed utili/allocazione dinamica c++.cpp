#include <iostream>
using namespace std;

int main ()
{
    int *var;
    int n;
    cout<<"inserisci la grandezza dell'array"<< endl;
    cin>> n;
    var=new int [n];  ///////// uso di allocazione dinamica in C++ (equivalente di malloc in C)
    for (int i=0;i<n;i++)
    {
        cout<<"inserisci l'elemento "<<i+1<<":   ";
        cin>> var[i];
    }

    cout<<"elementi acquisiti:\n\n";
    for (int i=0;i<n;i++)
    {
        cout<<"\t******************"<< endl;
        cout<<"Elemento: \t"<<i+1<<"\n\nindirizzo di memoria\t"<<&var[i]<<"\n\nvalore effettivo\t"<<var[i]<< endl<<endl<<endl;

    }
    delete [] var; //viene liberata la memoria usata nell'heap! (equivalente di 'free()' in C)






    return 0;
}
