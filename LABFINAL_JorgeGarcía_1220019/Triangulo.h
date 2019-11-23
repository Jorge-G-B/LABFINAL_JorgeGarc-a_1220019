#pragma once
#include "Polígono.h"
class Triangulo: public Polígono
{
public:
	Triangulo();
	~Triangulo();
public:
	double ObtenerArea(double lado);
	double ObtenerPerimetro(double lado);
};

