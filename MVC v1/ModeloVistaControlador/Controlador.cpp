#include "Controlador.h"

VectorPersonas Controlador::crearVector(int tam) {
	return VectorPersonas(tam);
}

bool Controlador::ingresarPersonaAlFinal(VectorPersonas& vector, Persona persona) {
	return vector.agregarFinal(persona) ? 1 : 0;
}

bool Controlador::eliminarUltimaPersona(VectorPersonas& vector) {
	return vector.eliminarFinal() ? 1 : 0;
}

bool Controlador::eliminarPersonaPorNombre(VectorPersonas& vector, string nombre) {
	return vector.eliminarPorNombre(nombre) ? 1 : 0;
}

string Controlador::toStringVector(VectorPersonas vec) {
	return vec.toString();
}

Persona Controlador::personaPorNombre(VectorPersonas vec, string a) {
	for (int i = 0; i < vec.getCan(); i++) {
		if (vec.getVector()[i].getNombre() == a) {
			return vec.getVector()[i];
		}
	}
	return Persona();
}
