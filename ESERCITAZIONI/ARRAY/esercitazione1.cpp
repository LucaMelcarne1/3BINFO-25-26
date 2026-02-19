#include <iostream>
using namespace std;
int main() {
	const int DIM1= 5;
	const int DIM2= 10;
	const int DIM3= 7;
	int i;
	/*
		1) Leggi un array di 5 elementi e somma gli elementi.
		2) Leggi un array di 5 elementi e stampa il minimo
		3) Leggi un array di 5 elementi e stampa il massimo
		4) Leggi un array di 10 elementi e stampa gli elementi con indice pari.
		5) Leggi un array di 10 elementi e stampa gli elementi con indice dispari.
		6) Leggere e memorizzare in un array sette numeri, dopo averli letti contare 
		   quante volte è stato memorizzato lo zero.
	*/ 
	int array1[DIM1];// array1 utilizzato per gli es 1, 2, 3;
	int array2[DIM2];// array2 utilizzato per gli es 4,5;
	int array3[DIM3];// array3 utilizzato per l' es 6;
	cout <<"Leggi un array di 5 elementi (es1,es2,es3): "<<endl;
	for (i=0;i<DIM1;i++)
	{
		cout<<"Inserisci elemento con indice " <<i <<": ";
		cin >>array1[i];
	}
	
	
	cout <<"Leggi un array di 10 elementi (es4,es5): "<<endl;
	for (i=0;i<DIM2;i++)
	{
		cout<<"Inserisci elemento con indice " <<i <<": ";
		cin >>array2[i];
	}
	
	cout <<"Leggi un array di 7 elementi (es6): "<<endl;
	for (i=0;i<DIM3;i++)
	{
		cout<<"Inserisci elemento con indice " <<i <<": ";
		cin >>array3[i];
	}
	
	//esercizio 1
	int somma=0;
	for(i=0;i<DIM1;i++)
	{
		somma=somma+array1[i];
	}
	cout <<"La somma degli elementi e': "<<somma<<endl;
	
	
	//esercizio 2 
	int min=array1[0];
	for (i=1;i<DIM1;i++)
	{
		if (min>array1[i])
		{
			min=array1[i];
		}
	}
	cout <<"Il minimo e': "<<min<<endl;
	
	//esercizio 3
	int max=array1[0];
	for (i=1;i<DIM1;i++)
	{
		if (max<array1[i])
		{
			max=array1[i];
		}
	}
	cout <<"Il massimo e': "<<max<<endl;
	
	//esercizio 4
	for (i=0;i<DIM2;i+=2)
	{
		cout<<"ELEMENTO CON INDICE "<<i<< ": "<<array2[i]<<endl;
	}
	
	//esercizio 5
	for (i=1;i<DIM2;i+=2)
	{
		cout<<"ELEMENTO CON INDICE "<<i<< ": "<<array2[i]<<endl;
	}
	
	//esercizio 6
	int cont=0;
	for (i=0;i<DIM3;i++)
	{
		if(array3[i]==0)
		{
			cont++;
		}
	}	
	cout <<"Il valore zero e' stato letto "<<cont<<" volte."<<endl;
    return 0;
}
