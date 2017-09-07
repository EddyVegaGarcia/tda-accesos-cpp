#include <iostream>
#include "Molinete.h"

using namespace std;

int main() {

	cout << ".:: Accesos ::." << endl;

	Molinete entrada;

	char opcion;

	do {

		cout << "Comando? (E: entrar, S: salir, T: total, X: terminar): ";
		cin >> opcion;
		opcion = toupper(opcion);

		switch (opcion) {

			case 'E' : entrada.dejarEntrar();
				break;

			case 'S' : entrada.dejarSalir();
				break;

			case 'T' : cout << "Total de personas en el interior: "
							<< entrada.contarPersonasDentro()
							<< endl
							<< "Máxima cantidad dentro: "
							<< entrada.calcularMaximaCantidadDePersonasDentro()
							<< endl;
				break;

			default:
				opcion = 'X';
		}

	} while (opcion != 'X');

	return 0;
}
