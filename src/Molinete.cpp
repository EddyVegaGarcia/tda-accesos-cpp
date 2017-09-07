#include "Molinete.h"

Molinete::Molinete() {

	personasQueEntraron = 0;
	personasQueSalieron = 0;
}

void Molinete::dejarEntrar() {

	personasQueEntraron++;
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
