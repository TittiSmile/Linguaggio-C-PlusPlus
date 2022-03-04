#include <iostream>
using namespace std;
#define dim 21
int main ()
{
    char str1[dim];
    cout << "inserisci una frase di max 20 caratteri" << endl;
    cin >> str1;
    do
    {
       str1[0]-=32;
    }
    while (str1[0]>='a' && str1[0]<='z');
    cout << str1 << endl;
    
    
    return 0;
}
