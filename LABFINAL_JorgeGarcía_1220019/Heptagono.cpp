#include "Heptagono.h"



Heptagono::Heptagono()
{
}


Heptagono::~Heptagono()
{
}
double Heptagono::ObtenerArea(double lado) {
	return System::Math::Round(3.634*lado*lado,3);
}
double Heptagono::ObtenerPerimetro(double lado) {
	return 7 * lado;
}
