#ifndef _NODO_
#define _NODO_
#include"Trabajador.h"

class Nodo {
private:
	Nodo* siguiente;
	Trabajador* empleado;
public:
	Nodo();
	Nodo(Nodo*, Trabajador*);
	Nodo* getSiguiente();
	Trabajador* getEmpleado();
	~Nodo();







};
#endif