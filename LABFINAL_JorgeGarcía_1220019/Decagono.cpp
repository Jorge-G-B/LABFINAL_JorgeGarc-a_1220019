#include "Decagono.h"



Decagono::Decagono()
{
}


Decagono::~Decagono()
{
}
double Decagono::ObtenerArea(double lado) {
	return System::Math::Round(7.6942*lado*lado,3);
}
double Decagono::ObtenerPerimetro(double lado) {
	return 10 * lado;
}