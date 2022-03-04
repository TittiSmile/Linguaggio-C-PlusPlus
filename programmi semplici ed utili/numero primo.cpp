#include <iostream>
using namespace std;
int main ()
{
    int n;
    int ris;
    cout<<"inserisci un numero"<< endl;
    cin>> n;

    ris=n%2;
    if(ris==0)
    {
        cout<<"NON primo"<< endl;
    }
    else
    {
        cout<<"primo"<<endl;
    }


    return 0;
}
