#pragma once
#include "Polígono.h"
class Heptagono:public Polígono
{
public:
	Heptagono();
	~Heptagono();
public:
	double Heptagono::ObtenerArea(double lado);
	double Heptagono::ObtenerPerimetro(double lado);
};

