#include "Persona.h"
Persona::Persona() {
	nombre = "";
	edad = 0;
	annioDeCarrera = 0;
	carrera = "";
}
Persona::Persona(string no, int ed, int an, string ca) {
	nombre = no;
	edad = ed;
	annioDeCarrera = an;
	carrera = ca;
}

void Persona::setNombre(string a) {
	nombre = a;
}
string Persona::getNombre() {
	return nombre;
}

void Persona::setEdad(int a) {
	edad = a;
}
int Persona::getEdad() {
	return edad;
}

void Persona::setAnnioDeCarrera(int a) {
	annioDeCarrera = a;
}
int Persona::getAnnioDeCarrera() {
	return annioDeCarrera;
}

void Persona::setCarrera(string a) {
	carrera = a;
}
string Persona::getCarrera() {
	return carrera;
}

string Persona::toString() {
	stringstream s;
	s << "Nombre: " << nombre << endl;
	s << "Edad: " << edad << endl;
	s << "Annio de carrera: " << annioDeCarrera << endl;
	s << "Carrera: " << carrera << endl;
	return s.str();
}