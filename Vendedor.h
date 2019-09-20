#ifndef _VENDEDOR_
#define _VENDEDOR_
#include "Trabajador.h"
class Vendedor:public Trabajador{
private:
	float comision;
	int ventas;
public:

	Vendedor();
	Vendedor(string, int , float , int , float , int);
	float getComision();
	int getVentas();
	void setComision(float);
	void setVentas(int);
	string reporte();
	float calcularSalarioBase();
	float calcularSalarioBruto();
	float calcularHorasExtras();
	float calcularAnualidades();
	float calcularCargas();
	float calcularSalarioNeto();

};
#endif
