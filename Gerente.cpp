#include "Gerente.h"
Gerente::Gerente() : Trabajador(){}

Gerente::Gerente(string  id, int horas, float precioHoras, int annosLaborados, float  bono) : Trabajador( id, horas, precioHoras, annosLaborados),bono(bono){}

float Gerente::getBono(){
	return bono;
}

void Gerente::setBono(float  bono) {
	this->bono =  bono;
}

string Gerente::reporte(){
	return Trabajador::reporte() + "\nSalario Base: " + std::to_string(calcularSalarioBase()) +
		"\nBono: "+std::to_string(getBono())+
		"\nSalario bruto: " + std::to_string(calcularSalarioBruto())
		+ "\nSalario Neto: " + std::to_string(calcularSalarioNeto());
	
}



float Gerente::calcularSalarioBase(){
	return Trabajador::getPrecioHoras() * 48;
}

float Gerente::calcularSalarioBruto(){
	return calcularSalarioBase() + calcularHorasExtras() + calcularAnualidades()+ getBono() ;
}

float Gerente::calcularHorasExtras(){
	float totalHorasExtra;
	if (getHorasLab() >= 48) {
		for (int horas = getHorasLab(); horas > 48; horas--) {
			totalHorasExtra += (getPrecioHoras() + (getPrecioHoras() * 0.50));
		}
	}
	return totalHorasExtra;

}

float Gerente::calcularAnualidades(){
	return ((calcularSalarioBase() * 0.05) * getAnnosLaborados());
}

float Gerente::calcularCargas() {
	return (calcularSalarioBruto() * 0.09);
}

float Gerente::calcularSalarioNeto() {
	return calcularSalarioBruto() - calcularCargas();
}