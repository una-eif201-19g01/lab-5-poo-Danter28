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

string Vendedor::reporte(){
	return Trabajador::reporte()+"\nSalario Base: " +std::to_string(calcularSalarioBase())+
		"\nComision: "+std::to_string(calcularSalarioBruto()-calcularSalarioBase())+
		"\nSalario bruto: " + std::to_string(calcularSalarioBruto()) 
		+ "\nSalario Neto: " + std::to_string(calcularSalarioNeto())  ;
	 
}
float Vendedor::calcularSalarioBase() {
	return Trabajador::getPrecioHoras() * 48;
}

float Vendedor::calcularSalarioBruto() {
	return calcularSalarioBase() + calcularHorasExtras() + calcularAnualidades()+(getVentas()*getComision());
}

float Vendedor::calcularHorasExtras() {
	float totalHorasExtra=0;
	if (getHorasLab() >= 48) {
		for (int horas = getHorasLab(); horas > 48; horas--) {
			totalHorasExtra += (getPrecioHoras() + (getPrecioHoras() * 0.50));
		}
	}
	return totalHorasExtra;

}

float Vendedor::calcularAnualidades() {
	return ((calcularSalarioBase() * 0.05) * getAnnosLaborados());
}
float Vendedor::calcularCargas() {
	return  (calcularSalarioBruto() * 0.09);
}

float Vendedor::calcularSalarioNeto() {
	return calcularSalarioBruto() - calcularCargas();
}
