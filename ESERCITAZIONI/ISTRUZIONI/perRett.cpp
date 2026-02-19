#include <iostream>

using namespace std;

int main() {

	//PROGRAMMA
	int peri,alte,base,area;
	cout<<"inserisci il perimetro:";
	cin >> peri;//input perimetro
	cout<<"inserisci l'alte:':";
	cin>> alte;//input altezza
	
	base=(peri-(alte*2))/2;
	area=base*alte;
	cout<<"l'area del rettangolo è:" <<area;
    
    return 0;
}
