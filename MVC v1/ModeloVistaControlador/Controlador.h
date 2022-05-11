#pragma once

#include "VectorPersonas.h"

class Controlador{
public:
	static VectorPersonas crearVector(int);

	static bool ingresarPersonaAlFinal(VectorPersonas&, Persona);

	static bool eliminarUltimaPersona(VectorPersonas&);

	static bool eliminarPersonaPorNombre(VectorPersonas&, string);

	static string toStringVector(VectorPersonas);

	static Persona personaPorNombre(VectorPersonas, string);
};

