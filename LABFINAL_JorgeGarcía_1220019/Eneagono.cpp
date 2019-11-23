#include "Eneagono.h"



Eneagono::Eneagono()
{
}


Eneagono::~Eneagono()
{
}
double Eneagono::ObtenerArea(double lado) {
	return System::Math::Round(6.181828*lado*lado,2);
}
double Eneagono::ObtenerPerimetro(double lado) {
	return 9 * lado;
}