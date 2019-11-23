#pragma once
#include "Polígono.h"
class Pentagono : public Polígono
{
public:
	Pentagono();
	~Pentagono();
public:
	double Pentagono::ObtenerArea(double lado);
	double Pentagono::ObtenerPerimetro(double lado);
};

