#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
char stringa1[101];
char stringa2[101];
int counter=0;
cout << "inserisci una stringa di max 100 caratteri" << endl;
cin.get(stringa1,100);
cout << "inserisci una seconda stringa max 100 caratteri" << endl;
cin.get (stringa2,100);
if (stringa2>stringa1)
{
    cout << "la seconda stringa � pi� grande della prima e non pu� essere contenuta in quest'ultima" << endl;
    counter++;
}
else
{
    cout << "la seconda stringa � contenuta  " << counter << "volte nella prima" << endl;
}
return 0;
}
