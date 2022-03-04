#include <stdio.h>

int main ()
{
    
    int i=0;
    int b[10];  
    for (i=0;i<10;i++)
    {
        printf("inserisci  %d  elemento:   ",i+1);
        scanf("%d",&b[i] );
    }
    
    /* 
    è l'equivalente in C++ di:
    for (int i=0;i<10;i++)
    {
      cout<<"inserisci "<< i+1<< "elemento"<< endl;
      cin >> b[i];
    }
    
    */
    return 0;
}
