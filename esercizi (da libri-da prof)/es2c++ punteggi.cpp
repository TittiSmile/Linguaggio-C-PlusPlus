#include <iostream>
using namespace std;

int main ()
{
    int anni,scelta;
    do
    {

    cout<<"inserire l'eta' per avere un punteggio"<< endl;
    cin>> anni;

    if((anni <=15) || (anni >=60 && anni<=75) || (anni>=80)  )
        {
            cout<<"il tuo punteggio e' 20"<< endl;
        }
    else if((anni>=16 && anni<=35) || (anni>=49 && anni<=59)  )
        {
            cout<<"il tuo punteggio e': 10"<< endl;
        }
    else
        {
            cout<<"il tuo punteggio e' 30"<<endl;
        }

           cout<<"continuare? (1-si   2-no)"<< endl;
           cin>> scelta;

    }while(scelta!=2);

cout<<"arrivederci"<< endl;
    return 0;
}
