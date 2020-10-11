/*
    Name: Adriana del Pilar Correa
    Author: Adriana del Pilar Correa
    Date: 05/08/20
    Description: Swith y Do-While
*/
#include <iostream>
using namespace std;

int main() {
    float costo;
	int Edad, interruptor;
	string sexo;
	
	cout << "Ingrese el Sexo (H/M):";
	cin >> sexo;
	cout << "Ingrese la Edad:";
	cin >> Edad;
	cout << "Ingrese el Costo";
	cin >> costo;

	
	if (sexo=="H") {
		interruptor = 1;
	} else {
		interruptor = 2;
	}	
	
	costo= 0;
	
	switch (interruptor) {
	case 1:
		if (Edad<25) {
		    costo = 1000;
	    } else {
		    costo = 700;
	    }	
	    break;
	case 2:
		if (Edad<21) {
		    costo = 500;
	    }
	    break;
	}
	
	cout << endl << "EDAD: " << Edad << endl;
	cout << "SEXO : " << sexo << endl;
	cout << "COSTO : " << costo << endl;
	
	return 0;
	}
