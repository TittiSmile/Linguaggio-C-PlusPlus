#include <stdio.h>
#include <stdlib.h>

int main ()
{
    
    float *p1,*p2;
    //float a,b;
    /*p1=&a;
    p2=&b;*/
    p1=(float*)malloc(sizeof(float));
    p2=(float*)malloc(sizeof(float));
    /*printf("inserisci il valore di 'a':   ");
    scanf("%f",&a);
    printf("inserisci il valore di 'b':   ");
    scanf("%f",&b);
    printf("il valore di a e': %f",*p1);
    */
   // printf("i valori digitati sono:\nvalore1: %f\t\tindirizzo di memoria1: %f\nvalore2:  %d\t\tindirizzo di memoria2:%d",*p1,p1,*p2,p2);
   puts("inserisci il primo valore:  ");
   scanf("%f",p1);
   puts("inserisci secondo valore:  ");
    scanf("%f",p2);
    printf("valore1: %f \t\tindirizzo1: %p\n\nvalore2: %f\t\tindirizzo2: %p",*p1,p1,*p2,p2);
    
    return 0;
}
