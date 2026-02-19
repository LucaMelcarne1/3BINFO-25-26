#include <iostream>
using namespace std;
int main() {
	/*
		Lo switch ci permette di effettuare un controllo su una variabile.
		Il corpo dell'istruzione switch è costituito da una serie di case 
		etichette e da un'etichetta facoltativa default 
	*/
	
	int giorno;
	cout<<"Inserisci il giorno della settimana: ";
	cin >>giorno;
	switch(giorno) //fa il controllo sulla variabile giorno e controlla 
	{
		case 1: //variabile giorno =1 -> stampa lunedì
			cout<<"lunedi'";
			break;
		case 2: //variabile giorno =2 -> stampa martedì
			cout<<"martedi'";
			break;
		case 3:
			cout<<"mercoledi'";
			break;
		case 4:
			cout<<"giovedi'";
			break;
		case 5:
			cout<<"venerdi'";
			break;
		case 6:
			cout<<"sabato";
			break;
		case 7:
			cout<<"domenica";
			break;
		default: // variabile giorno <1 o >7 -> stamperà scelta sbagliata
			cout<<"scelta sbagliata";
			break;
	}
    return 0;
}
