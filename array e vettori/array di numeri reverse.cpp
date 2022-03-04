#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"quanto vuoi grande l'array?"<< endl;
    cin>> n;
    int ar [n];
    for(int i=0;i<n;i++)
    {
        cout<<"inserisci "<< i+1<< " elemento"<< endl;
        cin>>ar[i];
    }

    cout<<"Numeri in ordine"<< endl;
    for (int i=0;i<n;i++)
    {
        cout<< ar[i]<< endl;
    }

    cout<<"ecco la i numeri al contrario!" << endl;
    for (int i=n-1; i>=0;i--)
    {
       cout<< ar[i] << endl;
    }

    return 0;
}
