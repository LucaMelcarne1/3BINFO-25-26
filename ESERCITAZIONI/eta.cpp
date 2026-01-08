#include <iostream>
using namespace std;

int main() {
	int eta; //dichiaro la variabile eta
	
	cout<<"Leggi la tua eta': ";
	cin >>eta; //chiedo in input l'età
	
	if (eta>=18){
		cout<<"Sei maggiorenne";
	}else
	{
		cout<<"Sei minorenne";
	}
    
    return 0;
}
