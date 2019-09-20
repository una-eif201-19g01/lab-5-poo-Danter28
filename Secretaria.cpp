#include "secretaria.h"
Secretaria::Secretaria(){}

Secretaria::Secretaria(string id, int horas, float precioHoras, int annoLaborados) :Trabajador(id, horas, precioHoras, annoLaborados)
{

}
float Secretaria::calcularSalarioBase() {

}

float Secretaria::calcularSalarioBruto() {
	float salariobruto = calcularSalarioBase() + calcularHorasExtras() + calcularAnualidades() ;
}

float Secretaria::calcularHorasExtras() {

}

float Secretaria::calcularAnualidades() {

}

float Trabajador::calcularHorasExtras() {

}