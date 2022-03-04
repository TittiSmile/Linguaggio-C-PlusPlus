#include <iostream>
#include <cstdlib>
using namespace std;
int main ()
{
    int vet [10];
    int a,b,c;
    int size;
    size=10;
    for(c=0;c<size;c++)
    vet [c]= rand();
    cout << "l'array di partenza e'  " << endl;
    for (c=0;c<size;c++)
    cout << vet [c] << "  ";
    for (a=1;a<size;a++)
      for (b=size-1;b>=a;b--)
      {
          if (vet [b-1]> vet [b])
          {
              c= vet [b-1];
              vet [b-1]= vet [b];
              vet [b]= c;
          }
      }
    cout << "\nl'array ordinato e'\n" << endl;
    for (c=0;c<size;c++)
    cout << vet [c] << "  ";
    
    
    
    return 0;
}
