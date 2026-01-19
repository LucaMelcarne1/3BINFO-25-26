#include <iostream>
using namespace std;

/*VERSIONE 1:
Leggi due numeri da tastiera, controlla se il num1 è maggiore 
o minore del num2 e stampa il messaggio. 
VERSIONE 2:
Leggi due numeri da tastiera, controlla se il num1 è maggiore, 
minore o uguale al num2 e stampa il messaggio.
*/

int main() {
	int num1,num2; //dichiaro le due variabili num1 e num2
	
	//leggo il primo numero
	cout<<"Leggi il primo numero ";
	cin >>num1;
	
	//leggo il secondo numero
	cout<<"Leggi il secondo numero ";
	cin >>num2;
	
	
	/*
	nella condizione che segue confronta num1 e num2:
	- se num1 è maggiore di num2 stampa "primo numero maggiore del secondo"
	- altrimenti "primo numero minore del secondo".
	N.B. non gestisce il caso in cui i due numeri sono uguali: stamperà 
		 "primo numero minore del secondo" 
	*/
	if (num1>num2){
		cout<<"Primo numero maggiore del secondo";
	}else
	{
		cout<<"Primo numero minore del secondo";
	}
    
    /*
    	esegui il programma per almeno 3 volte e inserisci i seguenti numeri:
    	1) 5 e 13
    	2) 7 e 2
    	3) 14 e 14
	*/
    return 0;
}
