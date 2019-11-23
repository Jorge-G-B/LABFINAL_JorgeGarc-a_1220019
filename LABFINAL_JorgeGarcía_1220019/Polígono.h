#pragma once
class Polígono
{
public:
	Polígono();
	~Polígono();
public:
	virtual double ObtenerArea(double Longitulado) = 0;
	virtual double ObtenerPerimetro(double Longitulado) = 0;
};

