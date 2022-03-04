#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
    int *array;
    int a;
    cout << "inserisci la grandezza dell'array "<< endl;
    cin >> a;
    array=(int*)malloc(a*sizeof(int));  /////////////////////////////////bisogna ricordare che in C++ non si usa 'malloc' ma si usa 'new'
    for (int i=0;i<a;i++)
    {
        cout<< "inserisci l'elemento "<<i+1<< endl;
        cin>> array[i];
    }
    cout<<"elementi acquisiti "<< endl;
    cout<<" elemento\t\tindirizzo\t\tvalore\t\t"<< endl;
    for (int i=0;i<a;i++)
    {
        cout<<i<<"\t\t\t"<<&array[i]<<"\t\t"<<array[i]<<endl;
    }
    free(array);
    //probabilmente,in C++,l'allocazione dinamica non funziona come in C.
    //infatti,vedi SU!!!!
    
    
    system("PAUSE");
    return 0;
}
