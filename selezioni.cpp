#include <iostream>
using namespace std;
int main() {
	int eta,giorno;
	cout<<"Quanti anni hai? ";
	cin >>eta;
	
	//if indica una condizione (V o F)--> se si verifica esegue le istruzioni presenti dopo la {
	if(eta>=18){
		cout<< "Sei maggiorenne";
	}else{ //arrivato qui vuol dire che la condizione eta>18 è falsa.
		cout<< "Sei minorenne";
	}
	cout <<endl;
	
    return 0;
}
