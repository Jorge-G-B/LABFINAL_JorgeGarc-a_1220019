#pragma once
#include "Pol�gono.h"
class Triangulo: public Pol�gono
{
public:
	Triangulo();
	~Triangulo();
public:
	double ObtenerArea(double lado);
	double ObtenerPerimetro(double lado);
};

