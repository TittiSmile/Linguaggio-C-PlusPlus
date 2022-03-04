#include <iostream>
#define n 100
using namespace std;

void funzione (char a[],char b[],int dim);
int main ()
{
    char a[n],b[2*n];
    int dim;
    
    cout << "Quanto vuoi lungha la stringa di caratteri?   ";
    cin >> dim;
    
    for (int i=0;i<dim;i++)
    {
        cout << "\ninserisci il carattere "<< i+1 << endl;
        cin >> a[i];
    }
    
    funzione (a,b,dim);
    
    cout << "il vettore di caratteri e' "<< endl;
    for (int i=0;i<2*dim;i++)
    {
        cout << b[i]<< "    \n";
    }
    
    
    
    system("PAUSE");
    return 0;
    
}
void funzione (char a[],char b[],int dim)
{
    int j=0;
    for (int i=0;i<dim;i++)
    {
        b[j+1]=a[i];
        b[j+1]=a[i];
    }
    
   
}
