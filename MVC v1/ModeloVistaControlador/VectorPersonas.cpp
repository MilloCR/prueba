#include "VectorPersonas.h"
VectorPersonas::VectorPersonas(int a) {
	can = 0;
	tam = a;
	vector = new Persona[tam];
	for (int i = 0; i < tam; i++) {
		vector[i] = Persona();
	}
}

void VectorPersonas::setCan(int a) {
	can = a;
}
int VectorPersonas::getCan() {
	return can;
}

void VectorPersonas::setTam(int a) {
	tam = a;
}
int VectorPersonas::getTam() {
	return tam;
}

Persona* VectorPersonas::getVector() {
	return vector;
}

bool VectorPersonas::vectorVacio() {
	return can == 0;
}

bool VectorPersonas::agregarFinal(Persona a) {
	if (can >= tam) {
		return 0;
	}else{
		vector[can] = a;
	}
	can++;
	
	return 1;
}

bool VectorPersonas::eliminarFinal() {
	if (vectorVacio()) {
		return 0;
	}
	else {
		vector[can] = Persona();
		can--;
		return 1;
	}
}

bool VectorPersonas::eliminarPorNombre(string a) {
	if (vectorVacio()) {
		return 0;
	}
	else {
		for (int i = 0; i < can; i++) {
			if (vector[i].getNombre() == a) {
				for (int j = i; j < can; j++) {
					vector[j] = vector[j + 1];
				}
				can--;
				return 1;
			}
		}
	}
	return 0;
}

string VectorPersonas::toString() {
	stringstream s;
	for (int i = 0; i < can; i++) {
		s << vector[i].toString() << endl;
	}
	return s.str();
}