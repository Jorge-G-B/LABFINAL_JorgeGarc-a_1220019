#include "Octagono.h"



Octagono::Octagono()
{
}


Octagono::~Octagono()
{
}
double Octagono::ObtenerArea(double lado) {
	return System::Math::Round((4.83 * lado * lado),3);
}
double Octagono::ObtenerPerimetro(double lado) {
	return 8 * lado;
}