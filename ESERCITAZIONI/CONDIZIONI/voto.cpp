#include <iostream>
using namespace std;

int main(){
	//leggi il voto di una verifica e stampare se è suff. o ins.
	float voto; 
	
	//input
	cout<<"Inserisci il voto: ";
	cin>>voto;
	
	//se voto >=6 suff. altrimenti insufficiente.
	if(voto>=6){
		cout<<"Il voto e' sufficiente";
	}else{
		cout <<"Il voto e' insufficente";
	}
	 
	
	return 0;
}

