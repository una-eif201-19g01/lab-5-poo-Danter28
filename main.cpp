#include "Secretaria.h"
#include "Gerente.h" 
#include "Vendedor.h"
#include "Trabajador.h"
#include<iostream>
using std::cout;
int main() {
Trabajador* arreglo[3];
Trabajador *t1=new Secretaria("001",60,1436.50,5);
Trabajador *t2 = new Vendedor("002",62,1248.32,2,0.15,12);
Trabajador *t3 = new Gerente("003",48,1892.68,4,25000);
arreglo[0]= t1;
arreglo[1]= t2;
arreglo[2]= t3;
for(int cont=0;cont<3;cont++){
	cout<<arreglo[cont]->reporte();
}
	
	
std::cin.get();
};
