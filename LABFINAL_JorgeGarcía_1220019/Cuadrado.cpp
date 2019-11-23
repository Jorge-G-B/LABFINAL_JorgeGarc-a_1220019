#include "Cuadrado.h"



Cuadrado::Cuadrado()
{
}


Cuadrado::~Cuadrado()
{
}

double Cuadrado::ObtenerArea(double lado) {
	return lado*lado;
}

double Cuadrado::ObtenerPerimetro(double lado) {
	return lado * 4;
}
