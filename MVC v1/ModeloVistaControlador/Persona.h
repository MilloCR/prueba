#pragma once

#include "includes.h"

class Persona{
private:
	string nombre;
	int edad;
	int annioDeCarrera;
	string carrera;
public:
	Persona();
	Persona(string, int, int, string);

	void setNombre(string);
	string getNombre();

	void setEdad(int);
	int getEdad();

	void setAnnioDeCarrera(int);
	int getAnnioDeCarrera();

	void setCarrera(string);
	string getCarrera();

	string toString();
};

