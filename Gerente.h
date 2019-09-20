#ifndef _GERENTE_
#define _GERENTE_
#include "Trabajador.h"
class Gerente:public Trabajador{
private:
	float bono;
public:
	Gerente();
	Gerente(string _id, int horas, float precioHoras, int annosLaborados, float _bono);
	float getBono();
	void setBono(float);

	string reporteGerente();

	float calcularSalarioBase();

	float calcularSalarioBruto();
		

	float calcularHorasExtras();

	float calcularAnualidades();

	float calcularHorasExtras();
};
#endif
