#include <iostream>
using namespace std;

int main(){
	//LEGGI IL DIAMETRO E CALCOLA AREA E PERIMETRO
	float diametro,raggio,area,perimetro;
    const float PI = 3.14; //const perchè il suo valore non cambia mai
    cout << "Inserisci il diametro del cerchio: ";
    cin >> diametro;

    raggio = diametro / 2;
    perimetro = PI * diametro;
    area = PI * raggio * raggio;

    cout << "Perimetro: " << perimetro << endl;
    cout << "Area: " << area;

    return 0;
	
	return 0;
}
