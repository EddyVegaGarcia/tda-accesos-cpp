#include "Molinete.h"

Molinete::Molinete() {

	personasDentro = 0;
}

void Molinete::dejarEntrar() {

	personasDentro++;
}

void Molinete::dejarSalir() {

	if (existenPersonasDentro()) {

		personasDentro--;
	}
}

int Molinete::contarPersonasDentro() {

	return personasDentro;
}

bool Molinete::existenPersonasDentro() {

	return (personasDentro > 0);
}
