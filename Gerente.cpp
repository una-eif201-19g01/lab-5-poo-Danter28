#include "Gerente.h"
Gerente::Gerente() : Trabajador(){}

Gerente::Gerente(string  id, int horas, float precioHoras, int annosLaborados, float  bono) : Trabajador( id, horas, precioHoras, annosLaborados),bono(bono){}

float Gerente::getBono(){
	return bono;
}

void Gerente::setBono(float  bono) {
	this->bono =  bono;
}

string Gerente::reporteGerente(){
	string reporte;
	reporte = Trabajador::reporte() + "\nBono: " + std::to_string(getBono());
	return reporte;
}



float Gerente::calcularSalarioBase(){

}

float Gerente::calcularSalarioBruto(){
	float salariobruto = calcularSalarioBase() + calcularHorasExtras() + calcularAnualidades()+ getBono() ;
}

float Gerente::calcularHorasExtras(){

}

float Gerente::calcularAnualidades(){

}

float Trabajador::calcularHorasExtras(){

}