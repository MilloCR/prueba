#pragma once

#include "Persona.h"

class VectorPersonas{
private:
	int can;
	int tam;

	Persona* vector;

public:
	VectorPersonas(int);

	void setCan(int);
	int getCan();

	void setTam(int);
	int getTam();

	Persona* getVector();

	bool vectorVacio();
	
	bool agregarFinal(Persona);

	bool eliminarFinal();

	bool eliminarPorNombre(string);

	Persona personaPorNombre(string);

	string toString();
};

