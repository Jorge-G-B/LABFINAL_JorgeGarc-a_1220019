#pragma once
#include "Pol�gono.h"
class Cuadrado: public Pol�gono
{
public:
	Cuadrado();
	~Cuadrado();
public:
	double ObtenerArea(double lado);
	double ObtenerPerimetro(double lado);
};

