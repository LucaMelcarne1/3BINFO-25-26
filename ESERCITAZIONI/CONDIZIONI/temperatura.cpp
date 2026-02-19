#include <iostream>
using namespace std;

int main(){
	/*
	LEGGI LA TEMPERATURA E STAMPA 
	-"ACCENDI IL COND" SE è >20 
	- ALTRIMENTI "ACCENDI TERMOSIFONI"
	*/
	float temp; 
	
	//input
	cout<<"Inserisci la temperatura: ";
	cin>>temp;
	
	
	if(temp>=20){
		cout<<"Accendi il condizionatore";
	}else{
		cout <<"Accendi i termosifoni";
	}
	 
	return 0;
}

