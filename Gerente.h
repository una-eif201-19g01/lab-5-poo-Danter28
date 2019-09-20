#ifndef _GERENTE_
#define _GERENTE_
#include "Trabajador.h"
class Gerente:public Trabajador{
private:
	float bono;
public:
	Gerente();
	Gerente(string , int, float , int, float);
	float getBono();
	void setBono(float);

	string reporte();

	float calcularSalarioBase();

	float calcularSalarioBruto();		

	float calcularHorasExtras();

	float calcularAnualidades();

	float calcularCargas();

	float calcularSalarioNeto();
};
#endif
