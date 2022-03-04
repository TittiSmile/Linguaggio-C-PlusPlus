#include <iostream>
#include <cstdlib>
using namespace std;
#define dim 20
void unione (int a[dim],int b[dim]);
int main ()
{
    int a [dim];
    int b [dim];
    cout << "inserire una sequenza di numeri interi " << endl;
    for (int i=0;i<dim;i++)
    {
        cin >> a [i];
    }
    cout << "inserire una seconda sequenza di numeri interi " << endl;
    for (int j=0;j<dim;j++)
    {
        cin >> b [j];
    }
     return 0;
}
void unione (int a [dim], int b [dim])
{
int l=0,k=0;
l=dim+dim;
int L [l];
for (int i=0;i<dim;i++)
{
    if (a[i]%2==0)
    {
        L[l]=a[i];
        k++;
    }
}
for (int j=0;j<dim;j++)
{
    if (b[j]%2==0)
    {
        L[l]= b[j];
        k++;
    }
}
cout << "l'unione è:\n" << endl;
for (int i=0;i<dim; i++)
{
    cout << L[i] << endl;
}
}







