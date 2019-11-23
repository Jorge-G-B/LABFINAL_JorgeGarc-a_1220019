#pragma once
#include "Polígono.h"
class Octagono:public Polígono
{
public:
	Octagono();
	~Octagono();
public:
	double Octagono::ObtenerArea(double lado);
	double Octagono::ObtenerPerimetro(double lado);
};

