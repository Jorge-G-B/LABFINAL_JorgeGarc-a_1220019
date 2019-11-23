#include "Pentagono.h"



Pentagono::Pentagono()
{
}

Pentagono::~Pentagono()
{
}

double Pentagono::ObtenerArea(double lado) {
	return System::Math::Round((5 * lado*lado) / 2.90,3);
}
double Pentagono::ObtenerPerimetro(double lado) {
	return lado * 5;
}
