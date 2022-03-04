#include <iostream>
#include <stdio.h>
using namespace std;

int main ()
{
    int num,a,i=0,max=-3200,min=+3200,somma=0;
    cout<<"quanti numeri vuoi inserire?"<< endl;
    cin>>num;
    do
    {
        cout<<"inserisci numero "<< endl;
        cin>>a;
        if(a > max)
            max = a;
        if(a < min)
            min= a;
        i++;

    }while(i<num);

    for(int i=1;i<num;i++)
    {
       somma+=a;
    }

cout<<"il massimo e': "<<max<< endl;
cout<<"il minimo e': "<<min<< endl;
cout<<"somma "<<somma<< endl;




    return 0;
}
