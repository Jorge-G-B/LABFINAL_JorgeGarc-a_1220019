#pragma once
#include "Polígono.h"
class Cuadrado: public Polígono
{
public:
	Cuadrado();
	~Cuadrado();
public:
	double ObtenerArea(double lado);
	double ObtenerPerimetro(double lado);
};

