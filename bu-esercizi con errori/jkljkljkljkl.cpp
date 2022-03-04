#include <iostream>
#include <cstring>

#define lim 205

using namespace std;

int stringa(char str_1 [], char str_2[])
{
    int counter_string = 0;
    int j = 0;

    for(int k = 0; str_1[k]; k++){

            j = 0;

            while( (str_2[j] == str_1[k+j]) && (str_2[j]) ) j++;

            if( (str_2[j] != str_1[k]) && (j != strlen(str_2)) ) j = 0;

            if(j == strlen(str_2)) counter_string++;
        }

    return counter_string;

}

int main()
{
    char string_1[lim], string_2[lim];
    int risultato;


    cout<<"Inserire prima stringa (max 200 caratteri): ";
    cin.getline(string_1, lim, '\n');

    cout<<"Inserire seconda stringa (max 200 caratteri): ";
    cin.getline(string_2, lim, '\n');


    risultato = stringa(string_1, string_2);

    cout<<"\n\nLa stringa_2 è presente "<<risultato<<" volte nella stringa_1\n\n";

    return 0;
} 


