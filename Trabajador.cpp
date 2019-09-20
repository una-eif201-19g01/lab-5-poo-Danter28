#include "Trabajador.h"
Trabajador::Trabajador():id("0"),horasLab(0),precioHora(0),annosLab(0) {}
Trabajador::Trabajador(string  id, int  horas, float  precioHora, int  annosLaborados):id(id),
horasLab(horas),precioHora(precioHora),annosLab(annosLaborados){}

string Trabajador::getID()
{
	return id;
}

int Trabajador::getHorasLab()
{
	return horasLab;
}

float Trabajador::getPrecioHoras()
{
	return precioHora;
}

int Trabajador::getAnnosLaborados()
{
	return annosLab;
}

void Trabajador::setID(string id)
{
	this->id = id;
}

void Trabajador::setHoras(int horas)
{
	horasLab = horas;
}

void Trabajador::setPrecioHoras(float preciosHoras)
{
	precioHora = preciosHoras;
}

void Trabajador::setAnnosLaborados(int  annosLaborados)
{
	annosLab =  annosLaborados;
}

string Trabajador::reporte(){
 return "ID: " + getID() + "\nHoras Laboradas: " + std::to_string(getHorasLab())
		+"\n total de annos Laborados: "+ std::to_string(getAnnosLaborados());
}
