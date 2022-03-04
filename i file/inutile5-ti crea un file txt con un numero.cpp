/*
  Scrive un intero su file
*/

#include<stdlib.h>
#include<stdio.h>

int main() {
  FILE *fd;
  int x=-32;


		/* apre il file in scrittura */
  fd=fopen("scrivi.txt", "w");
  if( fd==NULL ) {
    //perror("Errore in apertura del file");
    //exit(1);
    printf("errore in apertura del file"); // il coso scritto su,può essere scritto anche con printf??? credo di sì.
  }


		/* scrive il numero */
  fprintf(fd, "%d\n", x);



		/* chiude il file */
  fclose(fd);

  return 0;
}
