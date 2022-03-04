#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    char a [100];
    char b [100];
    int flag=1,contatore=0;
     int s1=strlen (a);
     int s2=strlen (b);
     
         
             cout << "inserisci una parola di max 100 lettere"<< endl;
             cin >> a;
             cout << "inserisci un'altra parola di max 100 lettere"<< endl;
             cin >> b;
             if (a>b)
             {
                 cout << "\terrore! la stringa 1 deve essere magiore della stringa 2"<< endl;
             }
     
         
    
     for (int i=0;i<s1-s2+1;i++)
     {
         flag=1;
         for (int j=0;j<s2;j++)
         {
             if (a[j+i]!= b[j])
             {
                 flag=0;
                 break;
             }
               if (flag==1)
                 {
                   contatore++;    
                 }    
         }
     
     }
    
    cout << "la seconda parola e' contenuta "<< contatore << " volte nella prima"<< endl;
    
    
 return 0;   
}
