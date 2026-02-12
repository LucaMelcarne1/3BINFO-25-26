#include <iostream>
using namespace std;
int main() {
	const int N =5; //è una costante e indica la dimensione dell'array
	
	int numeri[N]; //dichiaro un array "numeri" di dimensione N (5)
	
	//LETTURA DELL'ARRAY
	/*
		L'array parte dall'indice 0 (contatore i)
		Nel nostro caso avrà dimensione 5: 
			-l'array va dall'indice 0 a 4 (0 - 1 - 2 - 3 - 4)
 	*/
	for (int i=0;i<N;i++)
	{
		cout <<"Inserisci l'elemento con indice "<< i <<": "; 
		cin >> numeri[i];
	}
	
	//MANIPOLAZIONE DELL'ARRAY 
	/*
		In questa sezione viene implementata la richiesta dell'esercizio.
		Esempio: incrementa di 1 tutti gli elementi dell'array
	*/
	for (int i=0;i<N;i++)
	{
		numeri[i]=numeri[i]+1; //incremento di 1 ogni singolo elemento dell'array
	}
	
	
	//STAMPA ARRAY
	
	for (int i=0;i<N;i++)
	{
		cout << numeri[i]<< " ";
	}
	
	/*
		Quando utilizzo un array (LETTURA/MANIPOLAZIONE/STAMPA) devo scorrere l'array
		con un ciclo FOR.
	*/
    return 0;
}
