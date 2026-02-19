#include <iostream>
using namespace std;

int main(){
	//LEGGI UN NUMERO E STAMPA IL PRECEDENTE E IL SUCCESSIVO
	int num,precedente,successivo;
	//inserimento numero
	cout<<"Inserisci il primo numero: ";
	cin>>num;
	precedente = num-1;
	successivo=num+1;
	cout<<"Il numero precedente è: " <<precedente<<endl;
	cout<<"Il numero successivo è: " <<successivo;
	return 0;
}
