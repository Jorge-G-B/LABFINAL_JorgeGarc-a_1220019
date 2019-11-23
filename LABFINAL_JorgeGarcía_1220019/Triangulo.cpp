#include "Triangulo.h"



Triangulo::Triangulo()
{
}


Triangulo::~Triangulo()
{
}

double Triangulo::ObtenerArea(double lado) {
	return System::Math::Round(((System::Math::Sqrt(3) * System::Math::Pow(lado, 2)) / 4), 3);
}
double Triangulo::ObtenerPerimetro(double lado) {
	return lado * 3;
}