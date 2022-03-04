#include <iostream>

using namespace std;



struct Tnodo{
   int val;
   Tnodo* next;
};


typedef Tnodo* pnodo; 

pnodo crea_nodo(int n){
  Tnodo* nodo=new Tnodo;
  nodo->val=n;
  nodo->next=NULL;
  return nodo;
}

pnodo inserisci_in_testa(int n, pnodo pn){
  pnodo head=crea_nodo(n);    
  if(pn!=NULL){
      head->next=pn;       
  }
  return head;  
}

pnodo inserisci_in_coda(int n, pnodo pn){
  if(pn==NULL){
    return crea_nodo(n);     
  }
  else{
      pn->next=inserisci_in_coda(n, pn->next);
      return pn;
  }  
}


pnodo ricerca_valore(int n, pnodo pn){
  if(pn==NULL){
    return NULL;     
  }
  else if(pn->val==n){
      return pn;
  } 
  else{
      return ricerca_valore(n, pn->next);
  }
}


pnodo cancella_nodo(int n, pnodo handler){
	pnodo handler1;
	if(handler==NULL)
		return NULL;
	else
		if(handler->val==n){
			handler1=handler->next;
			delete(handler);
			return handler1;
		}
		else{
			handler->next=cancella_nodo(n, handler->next);
			return handler;
		}
	
}

void stampa(pnodo handler){
	if (handler==NULL){
		cout << endl;
		return;
	}
	else{
		cout << handler->val<< " ";
		stampa(handler->next);
		return;	
	}
}


int main(){
  int scelta,n; 
  pnodo pn=NULL;
  
  do{
     cout << "inserire una opzione:\n";
     cout << "1 - inserisci in testa\n";
     cout << "2 - inserisci in coda\n";
     cout << "3 - ricerca valore\n";
     cout << "4 - cancella nodo\n";
     cout << "5 - stampa\n";
     cout << "6 - esci\n";
     cin >> scelta;
     cin.ignore(); 
     switch(scelta){
        case 1:
		   cout << "Inserisci valore:\n";
		   cin >> n;  
                   pn=inserisci_in_testa(n,pn);  
                   break;  
        case 2:
		   cout << "Inserisci valore:\n";
		   cin >> n;  
                   pn=inserisci_in_coda(n,pn);  
                   break;  
        case 3:               
		   cout << "Inserisci valore:\n";
		   cin >> n;  
                   if(ricerca_valore(n,pn)!=NULL){
			cout << "presente\n";
		   } 
		   else{
		        cout << "non presente\n";
                   } 
                   break;  
        case 4:
		   cout << "Inserisci valore:\n";
		   cin >> n;  
                   pn=cancella_nodo(n,pn);    
                   break;      
        case 5:
                   stampa(pn);  
                   break;      
        case 6:
                   cout << "Arrivederci\n";  
                   break;                                         
        default:
                   cout << "valore non consentito\n";     
     }                       
  }while(scelta!=6);

  return 0;
	
}
