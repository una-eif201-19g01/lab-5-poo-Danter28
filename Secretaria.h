#ifndef _SECRETARIA_
#define _SECRETARIA_
#include "Trabajador.h"
class Secretaria: public Trabajador{

	public:
		Secretaria();
		Secretaria(string , int , float , int );
		string reporte();
		float calcularSalarioBase();

		float calcularSalarioBruto();


		float calcularHorasExtras();

		float calcularAnualidades();
		float calcularCargas() ;

		float calcularSalarioNeto();

};
#endif
