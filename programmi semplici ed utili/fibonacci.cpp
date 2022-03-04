// sequenza di FIBONACCI
#include <iostream>
using namespace std;
int main ()
{
    long double n1=0,n2=1,nvolte,somma=0;
    char ripeti;
    
    do{
    
         do
        {
        cout << "\nProgramma per calcolare la sequenza di Fibonacci\nQuanti passi vuoi eseguire?" << endl;
        cin >> nvolte;
        cout << "0,1";
            for (int i=1;i<=nvolte-2;i++)
            {
                somma=n1+n2;
                n1=n2;
                n2=somma;
                cout <<"," <<somma;
            }
        }while(nvolte<3);
    
        cout << "\nContinuare? (digitare s/n):   " << endl;
        cin >> ripeti;
                if (ripeti== 'n'|| ripeti== 'N')
                    {
                        cout << "Arrivederci. " << endl;
                    }
    } while(ripeti == 's' || ripeti == 'S' );
    return 0;
}
