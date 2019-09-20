#include "secretaria.h"
Secretaria::Secretaria(){}

Secretaria::Secretaria(string id, int horas, float precioHoras, int annoLaborados) :Trabajador(id, horas, precioHoras, annoLaborados)
{

}

string Secretaria::reporte() {
	return Trabajador::reporte() + "\nSalario Base: " + std::to_string(calcularSalarioBase()) +
		"\nSalario bruto: " + std::to_string(calcularSalarioBruto())
		+ "\nSalario Neto: " + std::to_string(calcularSalarioNeto());
	 
}
float Secretaria::calcularSalarioBase() {

}

float Secretaria::calcularSalarioBruto() {
	float salariobruto = calcularSalarioBase() + calcularHorasExtras() + calcularAnualidades() ;
}

float Secretaria::calcularHorasExtras() {
	float totalHorasExtra = 0;
	if (getHorasLab() >= 48) {
		for (int horas = getHorasLab(); horas > 48; horas--) {
			totalHorasExtra += (getPrecioHoras() + (getPrecioHoras() * 0.50));
		}
	}
	return totalHorasExtra;

}

float Secretaria::calcularAnualidades() {
	return ((calcularSalarioBase() * 0.05) * getAnnosLaborados());
}

float Secretaria::calcularCargas() {
	return (calcularSalarioBruto() * 0.09);
}

float Secretaria::calcularSalarioNeto() {
	return calcularSalarioBruto() - calcularCargas();
}