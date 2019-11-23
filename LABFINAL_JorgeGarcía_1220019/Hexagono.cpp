#include "Hexagono.h"



Hexagono::Hexagono()
{
}


Hexagono::~Hexagono()
{
}
double Hexagono::ObtenerArea(double lado) {
	return System::Math::Round(2.60*lado*lado,3);
}
double Hexagono::ObtenerPerimetro(double lado) {
	return lado * 6;
}