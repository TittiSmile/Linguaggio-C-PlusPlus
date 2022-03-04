#include <iostream>
#include <string.h>
#define dim 100
using namespace std;


int main ()
{
    char a[100];
    char b[100];
    cout<<"inserisci una prima stringa di caratteri "<< endl;
    cin.getline(a,100);
    cout<<"inserisci una seconda stringa di caratteri "<< endl;
    cin.getline(b,100);
    cout<<"la prima stringa e':   "<<a<< endl;
    cout<<"la seconda stringa e':   "<<b<< endl;
    int x=strlen(a);
    int y=strlen(b);
    
    if(x<y)
    cout<<a<< endl;
    
    bool temp=true;
    for (int i=0;i<x-y+1;i++)
    {
        for (int j=0;j<y;j++)
        {
            if (a[i+j]!= b[j])
            {
                temp=false;
                break;
            }
                else if (temp)
                    for (int j=0;j<y;j++)
                        {
                            a[i+j]='-';
                        }
                        temp=true;
        }
    }
    cout<<"\nla nuova stringa e'"<<a<< endl;
    
   
    
    
    system ("PAUSE");
    return 0;
}




//1         ciao a tutti
//2         ciao
//output    ---- a tutti

