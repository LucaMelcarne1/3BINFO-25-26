#include <iostream>
using namespace std;
int main() {
	/*
	WHILE
		Ciclo pre-condizionale (fa il controllo prima di entrare nel ciclo).
		Può essere eseguito zero o più volte. Il ciclo si interrompe quando
		la condizione non si verifica più
		
		sintassi:
			while(condizione)
			{
				//istruzioni da eseguire nel ciclo
			}
	*/
	/*
	DO WHILE
		Ciclo post-condizionale (fa il controllo alla fine del ciclo e quindi esegue
		almeno una volta le istruzioni del ciclo).
		Può essere eseguito una o più volte.
		
		sintassi:
			do
			{
				//istruzioni da eseguire nel ciclo
			}while (condizione);
	*/
	
	//esempio WHILE
	int i = 0;
	do 
	{
  		cout << i << endl;
  		i++;
	}while (i < 5);
	
	//esempio DO WHILE
	int number;
	do 
	{
  		cout << "Enter a positive number: ";
  		cin >> number;
	}while (number > 0);

	
    return 0;
}
