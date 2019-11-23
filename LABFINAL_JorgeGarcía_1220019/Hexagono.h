#pragma once
#include "Polígono.h"
class Hexagono: public Polígono
{
public:
	Hexagono();
	~Hexagono();
public:
	double Hexagono::ObtenerArea(double lado);
	double Hexagono::ObtenerPerimetro(double lado);
};

