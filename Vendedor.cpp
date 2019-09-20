#include "Vendedor.h"

Vendedor::Vendedor() :comision(0), ventas(0){}

Vendedor::Vendedor(string  id, int  horas, float  precioHoras, int  annosLaborados, float  comision, int  ventas)
	: Trabajador(id, horas, precioHoras, annosLaborados), comision(comision), ventas(ventas) {}

float Vendedor::getComision(){
	return comision;
}

int Vendedor::getVentas(){
	return ventas;
}

void Vendedor::setComision(float  comision){
	comision =  comision;
}

void Vendedor::setVentas(int  ventas){
	ventas =  ventas;
}

string Vendedor::reporteVendedor(){
	string reporte;

	reporte =Trabajador::reporte()+"\nComision: " +std::to_string(getComision())+ "\nVentas: "+std::to_string(getVentas())+"\n";
	return reporte;
}
float Vendedor::calcularSalarioBase() {

}

float Vendedor::calcularSalarioBruto() {
	float salariobruto = calcularSalarioBase() + calcularHorasExtras() + calcularAnualidades();
}

float Vendedor::calcularHorasExtras() {

}

float Vendedor::calcularAnualidades() {

}

float Vendedor::calcularHorasExtras() {

}
