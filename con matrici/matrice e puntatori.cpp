#include <iostream>
using namespace std;

int main ()
{ 



  
  int matrice [2][2];
  matrice [0][0]= 2;
  matrice [0][1]= 4;
  matrice [1][0]= 6;
  matrice [1][1]= 8; 
  /*
  la matrice viene rappresentata così:
  2 4 
  6 8
  */
  cout << "indirizzo della matrice---> " << matrice [0] << endl;
  cout << "elemento riga 0,colonna 0---> " << *matrice [0] << endl;   //ci dice dove inizia la riga
  cout << "elemento riga 0,colonna 1---> " << *(matrice[0]+1) << endl; // tramite puntatore abbiamo comunicato che ci serve l'elemento successivo alla coordinata [0][0]( considera anche i byte di differenza ovvero 4byte). quando scriviamo +1,il numero deve slittare di 4byte
  cout << "elemento riga 0,colonna 1 sommato di 1 --->" << *matrice[0]+1 << endl;
  cout << "elemento riga 1,colonna 0 --->" << *matrice [1] << endl;
  cout << "elemento riga 1,colonna 1 ---> " << *(matrice[1]+1) << endl;
  cout << "elemento riga 1,colonna 1 sommato di 1 --->" << *matrice[1]+1 << endl;
  cout <<"elementi che separano matrice[1] da matrice [0]---> "<<  matrice [1]-matrice[0] << endl;
  cout << "byte di differenza dalla matrice[1] alla matrice [0]---> " <<  (matrice [1]-matrice[0]) * sizeof (int) << endl; 
  // l'operatore sizeof serve a controllare quanti byte ha una determinata variabile. abbiamo mezzo int perchè la matrice è di tipo int. 
  //avremmo potuto mettere anche char,float, ecc
  // in questo caso,i byte di differenza sono 8 perchè 4 sono contenuti nella matrice [0][0] e altri 4 sono contenuti nella matrice [0][1]                                                                                                                          
  
  return 0;
}

