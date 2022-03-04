#include <iostream>
using namespace std;
int main ()
{
  int l;
  bool uguale;
  cout << "quanto e' lunga la stringa?" << endl;
  cin >> l;
  int n[l];
  cout << "inserisci una sequenza" << endl;
  for (int i=0; i<l; i++)
  {
      cin >> n[i];
      if (n[i] == n [i-1]) 
      {
       uguale==true;
      }
      
  }
    if (uguale==false)
     cout << "i numeri sono diversi" << endl;
     else 
     cout << "i numeri sono uguali" << endl;

return 0;


}



