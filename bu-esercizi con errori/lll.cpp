#include <iostream>
#include <cstring>
using namespace std;
int cnt_str(char *punt, char* punt2,int lung1,int lung2);
int main(){
    char stringa_1[101];
    char stringa_2[101];
    cout<<"Inserisci la prima stringa (MAX 100 caratteri):\n";
    cin.getline(stringa_1,101);
    cin.clear();
    cout<<"Inserisci la seconda stringa (MAX 100 caratteri):\n";
    cin.getline(stringa_2,101);

    if(strlen(stringa_2)>strlen(stringa_1)){
        cout<<"La seconda stringa � pi� lunga della prima, dunque non pu� esservi contenuta!\n";
        return 0;
    }
    int cnt;
    //cout<<strlen(stringa_1)<<"\n";            //DEBUG
    //cout<<strlen(stringa_2)<<"\n";            //DEBUG

    cnt=cnt_str(stringa_1, stringa_2, strlen(stringa_1), strlen(stringa_2));
    cout<<"\n\nLa seconda stringa � contenuta nella prima => "<<cnt<<" volte.\n";
    return 0;
}
