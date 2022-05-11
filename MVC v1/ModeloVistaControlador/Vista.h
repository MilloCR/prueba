#pragma once

#include "Controlador.h"

class Vista{
public:
	static void menu();

	static void opcionesMenu();

	static VectorPersonas crearVector();

	//Ingresar persona al final
	static void op1(VectorPersonas&);

	//Eliminar ultima persona
	static void op2(VectorPersonas&);

	//Eliminar persona por nombre
	static void op3(VectorPersonas&);

	//toString del vector
	static void op4(VectorPersonas);

	//Obtener datos de una persona por su nombre
	static void op5(VectorPersonas);
};

