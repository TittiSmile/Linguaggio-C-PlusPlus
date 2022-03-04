#include <stdio.h>
#define MAX 20

int main()
{
char a[MAX];
FILE *fp;
char c;

printf("dammi il nome del file\n" );
scanf("%s",a);

fp=fopen(a,"r");
if(fp!=NULL)
{
    for(c=fgetc(fp);c!=EOF;c=fgetc(fp))
    {
        printf("%c",c );
        fclose(fp);
    }

}
    else
    {
        printf("\nimpossibile aprire il file");
    }



return 0;

}
