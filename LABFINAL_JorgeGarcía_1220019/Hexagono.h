#pragma once
#include "Pol�gono.h"
class Hexagono: public Pol�gono
{
public:
	Hexagono();
	~Hexagono();
public:
	double Hexagono::ObtenerArea(double lado);
	double Hexagono::ObtenerPerimetro(double lado);
};

