#include <iostream>
using namespace std;
int main ()
{
	int matrice [2] [3]= {{3,7,5}, {99,6,11} };
	for (int i=0; i<2;i++)                              //in questo caso,i= numero delle righe (orizzontali) e j=numero di colonne (verticali).
	{
	    
	    for (int j=0;j<3;j++)
	    {
	        cout << matrice [i] [j] << "\t";
        }
        cout << endl;
    }
	
	return 0;
	
	 
}
