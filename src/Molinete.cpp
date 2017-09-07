#include "Molinete.h"

Molinete::Molinete() {

	personasQueEntraron = 0;
	personasQueSalieron = 0;
	maximaCantidadDePersonasDentro = 0;
}

Molinete::Molinete(int personasQueYaEstanDentro) {

	if (personasQueYaEstanDentro > 0) {

		personasQueEntraron = personasQueYaEstanDentro;
	
	} else {

		personasQueEntraron = 0;
	}
	
	personasQueSalieron = 0;
	maximaCantidadDePersonasDentro = personasQueEntraron;
}


void Molinete::dejarEntrar() {

	personasQueEntraron++;
	
	if (contarPersonasDentro() > maximaCantidadDePersonasDentro) {
		maximaCantidadDePersonasDentro = contarPersonasDentro();
	}
}

void Molinete::dejarSalir() {

	if (existenPersonasDentro()) {

		personasQueSalieron++;
	}
}

int Molinete::contarPersonasDentro() {

	return personasQueEntraron - personasQueSalieron;
}

bool Molinete::existenPersonasDentro() {

	return (contarPersonasDentro() > 0);
}

int Molinete::contarTotalDePersonasQueEntraron() {

	return personasQueEntraron;
}

int Molinete::calcularMaximaCantidadDePersonasDentro() {

	return maximaCantidadDePersonasDentro;
}
