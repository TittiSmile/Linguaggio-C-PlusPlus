#include <iostream>
using namespace std;

int main ()
{
    int anno,scelta;


  do
  {
    cout<<"che anno vuoi verificare?"<< endl;
    cin>> anno;

       if(anno>0)
   {

       if(anno%4==0)
       {
           cout<<"anno bisestile"<< endl;
       }
       else
       {
           cout<<"anno NON bisestile"<< endl;
       }
   }
   else
   {
       cout<<"errore"<< endl;
   }


      cout<<"vuoi continuare? (1-si   2-no)"<< endl;
      cin>> scelta;
  }while(scelta!=2);


cout<<"arrivederci"<< endl;
    return 0;

}
