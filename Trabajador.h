#ifndef _TRABAJADOR_
#define _TRABAJADOR_
#include<iostream>
#include<string>
using std::string;
class Trabajador{
private:
	string id;
	int horasLab;
	float precioHora;
	int annosLab;
	public:
	Trabajador();
	Trabajador(string, int, float, int);
	string  getID();
	int  getHorasLab();
	float  getPrecioHoras();
	int  getAnnosLaborados();
	void  setID(string );
	void  setHoras(int);
	void  setPrecioHoras(float );
	void  setAnnosLaborados(int );
	string  reporte();
	//metodos heredables//
	virtual float calcularSalarioBase() = 0;
	virtual float calcularHorasExtras() = 0;
	virtual float calcularAnualidades() = 0;
	virtual float calcularSalarioBruto() = 0;
	virtual float calcularCargas() = 0;
	virtual float calcularSalarioNeto() = 0;
	

};
#endif
