#include <stdio.h>
#include <stdlib.h>

int main ()
{
    
    FILE *fp;
    char variabile;
    fp=fopen("testo.txt","a");
    if (fp==NULL)
    {
        printf("Impossibile aprire il file");
    }
    
    fprintf(fp,"Funziona,ne gioisco!\n");
    
    //se volessi leggere la frase sopra sul terminale...
    fp=fopen("testo.txt","r");
     
     if (fp==NULL)
    {
        printf("Impossibile aprire il file");
        
    }
    
    while (!feof(fp))
    {
   
       variabile=fgetc(fp);
       printf("%c",variabile);
    }
    
    
    fclose(fp);
    
    
    system("PAUSE");
    return 0;
}
