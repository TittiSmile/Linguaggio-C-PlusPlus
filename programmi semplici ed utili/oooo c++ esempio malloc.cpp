#include <iostream>
#include <stdlib.h>
using namespace std;
int main ()
{
    int *p1,*p2;
    int a,b;
    p1=(int*)malloc(a*sizeof(int));
    p2=(int*)malloc(b*sizeof(int));
    p1=&a;
    p2=&b;
    cout<<"inserire il valore di 'a':   "<< endl;
    cin>> a;
    cout<<"inserire il valore di 'b':   "<< endl;
    cin>>b;
   // cout<<"la loro somma e':   "<< *p1+*p2<< endl;
    
   // free(p1);
    //free(p2);
    
    
    return 0;
}
