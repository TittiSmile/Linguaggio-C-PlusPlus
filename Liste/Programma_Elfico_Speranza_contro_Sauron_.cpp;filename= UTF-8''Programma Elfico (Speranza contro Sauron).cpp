/*
sia C una lista di stringhe (array di 51 caratteri) si realizzi:
-una funzione insert che presi come argomenti la lista C e una stringa S inserisce
 in ordine lessicografico S in C e ritorna la lista aggiornata
-una funzione con gli stessi argomenti che cancella tutte le occorrenze di S qualora presenti in C
-una funzione di stampa che ritorni a video gli elementi di C (uno per riga)

*/

#include <iostream>
#include <cstdlib>
#define maxlen 51
using namespace std;

struct lista
{
	char s[maxlen];
	struct lista *next;
};

struct lista *aggiungi(struct lista *,char *);
struct lista *elimina(struct lista *,char *);

bool compare(char *, char *);//funzione per verificare se due stringhe sono uguali
bool controllo(char *,char *);

void copia(char *,char *);//funzione per la copia delle stringhe
void menu();
void dealloca(struct lista *);
void stampa(struct lista *);

int main()
{
	struct lista *top=NULL;
	char s[maxlen];
	int i=0;

	do
	{
		menu();
			cout <<"inserire la scelta"<<endl;
				cin >> i;
		switch(i)
		{
			case 1: cout <<"inserire la stringa da inserire"<<endl; cin >> s; top=aggiungi(top,s);break;
			case 2: cout <<"inserire la stringa da eliminare le occorrenze"<<endl;cin >>s; top=elimina(top,s);break;
			case 3:cout <<"la lista inserita e'"<<endl; stampa(top);break;
			case 4:cout <<"arrivederci"<<endl;
			default: cout <<"Errore reinserire la scelta"<<endl;break;
		}
	}while(i!=4);

cout <<"Il programma terminera' con successo"<<endl;
dealloca(top);
return 0;
}


void menu()
{
	cout <<"1)inserire una nuova stringa in ordine lessicografico"<<endl;
	cout <<"2)eliminare le occorrenze di s"<<endl;
	cout <<"3)per stampare la lista"<<endl;
	cout <<"4)per uscire"<<endl;
return;
}
void copia(char *a,char *s)
{
	int i=0;
	while(s[i]!='\0')
	{
		a[i]=s[i];
		i++;
	}
	a[i]='\0';
}
struct lista *in_testa(struct lista *top,char *s)
{
	struct lista *tmp=new lista;
	copia(tmp->s,s);
	tmp->next=top;
	top=tmp;

return top;
}
bool controllo(char *a,char *s)
{
  bool flag=true;

if(a[0]<s[0])
		flag=false;
	else
		if(a[0]==s[0])
			flag=controllo(a+1,s+1);

return flag;
}
struct lista *aggiungi(struct lista *top,char *s)
{
	if(top==NULL||(controllo(top->s,s)==true))
	{
		top=in_testa(top,s);
	}
	else
		top->next=aggiungi(top->next,s);

return top;
}
bool compare(char *a, char *s)
{
	int i=0;
	while(a[i]!='\0')
	{
		if(s[i]!=a[i])
			return false;
				i++;
	}
return true;
}
struct lista *elimina(struct lista *top, char *s)
{
	if(top!=NULL)
	{
		if(compare(top->s,s)==1)
		{
			struct lista *tmp;
			tmp=top;
			top=elimina(top->next,s);
			delete tmp;
		}
		else
			top->next=elimina(top->next,s);
	}
return top;
}
void stampa(struct lista *top)
{
	if(top!=NULL)
	{
		cout <<top->s<<endl;
		stampa(top->next);
	}
return;
}
void dealloca(struct lista *top)
{
	if(top!=NULL)
	{
		dealloca(top->next);
		delete top;
	}
return;
}
