#include "Vista.h"
void Vista::menu() {
	int op;

	cout << "Bienvenido al menu. Para empezar, cree un vector" << endl;
	
	system("PAUSE");

	VectorPersonas vector = crearVector();
	
	do {
		fflush(stdin);

		opcionesMenu();

		cout << "Opcion: ";
		cin >> op;

		switch (op) {
		case 1: {
			system("CLS");
			op1(vector);
			break;
		}
		case 2: {
			system("CLS");
			op2(vector);
			break;
		}
		case 3: {
			system("CLS");
			op3(vector);
			break;
		}
		case 4: {
			system("CLS");
			op4(vector);
			break;
		}
		case 5: {
			system("CLS");
			op5(vector);
			break;
		}
		}
	} while (op != -1);
}

void Vista::opcionesMenu() {
	cout << "1) Ingresar persona al final" << endl;
	cout << "2) Eliminar ultima persona" << endl;
	cout << "3) Eliminar persona por nombre" << endl;
	cout << "4) toString del vector" << endl;
	cout << "5) Obtener datos de una persona por su nombre" << endl;
	cout << "-1) Salir" << endl;
}

VectorPersonas Vista::crearVector() {
	int tam;

	cout << "Ingrese el tamannio que quiere para el vector: ";
	cin >> tam;

	return Controlador::crearVector(tam);
}

void Vista::op1(VectorPersonas& vector) {
	string nombre;
	int edad;
	int annioDeCarrera;
	string carrera;

	cin.ignore();
	fflush(stdin);
	cout << "Nombre: ";
	getline(cin, nombre);

	fflush(stdin);
	cout << "Edad: ";
	cin >> edad;

	cout << "Annio de carrera: ";
	cin >> annioDeCarrera;

	cin.ignore();
	fflush(stdin);
	cout << "Carrera: ";
	getline(cin, carrera);

	Persona persona(nombre, edad, annioDeCarrera, carrera);


	if (Controlador::ingresarPersonaAlFinal(vector, persona)) {
		cout << "Persona agregada correctamente!" << endl;
	}
	else {
		cout << "No se pudo agregar la persona" << endl;
	}
	system("PAUSE");
}

void Vista::op2(VectorPersonas& vector) {
	if (Controlador::eliminarUltimaPersona(vector)) {
		cout << "Persona eliminada correctamente" << endl;
	}
	else {
		cout << "No se pudo eliminar la persona" << endl;
	}
	system("PAUSE");
}

void Vista::op3(VectorPersonas& vector) {
	string nombre;

	cin.ignore();
	fflush(stdin);
	cout << "Ingrese el nombre: ";
	getline(cin, nombre);

	if (Controlador::eliminarPersonaPorNombre(vector, nombre)) {
		cout << "Persona eliminada correctamente" << endl;
	}
	else {
		cout << "No se pudo eliminar la persona" << endl;
	}
	system("PAUSE");
}

void Vista::op4(VectorPersonas vector) {
	cout << Controlador::toStringVector(vector) << endl;
	system("PAUSE");
}

void Vista::op5(VectorPersonas vector) {
	string nombre;

	cin.ignore();
	fflush(stdin);
	cout << "Ingrese el nombre: ";
	getline(cin, nombre);

	cout << Controlador::personaPorNombre(vector, nombre).toString();

	system("PAUSE");
}