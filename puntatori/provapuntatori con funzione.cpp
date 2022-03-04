#include <iostream>
using namespace std;
int scambia (int *a,int *b);
int main ()
{
    int a=4;
    int b=2;
    cout << "a= "<< a << "\tb= "<<b<< endl;
    scambia (&a,&b);
    cout << "a= "<< a << "\tb= "<<b<< endl;
}
int scambia (int *a,int *b)
{
    int c=*a;
    *a=*b;
    *b=c;
}
