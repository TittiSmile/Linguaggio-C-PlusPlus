#include <iostream>
using namespace std;
int funzione(int studenti);


int main ()
{
    int promossi=0,bocciati=0,studenti=0,res=0,i=0,a=0;

    /*cout<<"quanti studenti vuoi inserire?"<< endl;
    cin>> studenti;

    for(int i=0;i<studenti;i++)
    {
        cout<<"mettere una valutazione per ogni studente (1-promosso   2-bocciato)"<< endl;
        cin>>res;
    if(res==1)
        promossi++;
     else
        bocciati=bocciati+1;
    }
*/
//////////////////////////////////////////////////////////////////////////////////////
   /*cout<<"quanti studenti vuoi inserire?"<< endl;
    cin>> studenti;
    while(i<studenti)
    {
    cout<<"mettere una valutazione per ogni studente (1-promosso   2-bocciato)"<< endl;
    cin>>res;
    if(res==1)
        promossi++;
     else
        bocciati=bocciati+1;
        i++;
    }*/
/////////////////////////////////////////////////////////////////////////////////////////

/*cout<<"quanti studenti vuoi inserire?"<< endl;
cin>> studenti;
do
{
    for(int i=0;i<studenti;i++)
    {
        cout<<"mettere una valutazione per ogni studente (1-promosso   2-bocciato)"<< endl;
        cin>>res;
            if(res==1)
                promossi++;
             else
                bocciati=bocciati+1;
                i++;
    }
    if(res>2)
    {
        cout<<"selezione non valida"<< endl;
    }

}while(res>2);*/
////////////////////////////////////////////////////////////////////////////////////

/*<<"quanti studenti vuoi inserire?"<< endl;
cin>> studenti;

a=funzione(studenti);
if(a==1)
    promossi++;
else
    bocciati++;*/










    cout<<"il numero di studenti e': "<<studenti<< endl;
    cout<<"il numero di bocciati e': "<<bocciati<< endl;
    cout<<"il numero di promossi e': "<<promossi<< endl;

    return 0;
}




int funzione(int studenti)
{
    int res1=0;
    for(int i=0;i<studenti;i++)
    {
        cout<<"mettere una valutazione per ogni studente (1-promosso   2-bocciato)"<< endl;
        cin>>res1;
    }
    return res1;

}
