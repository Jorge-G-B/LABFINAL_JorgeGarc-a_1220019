#pragma once
class Pol�gono
{
public:
	Pol�gono();
	~Pol�gono();
public:
	virtual double ObtenerArea(double Longitulado) = 0;
	virtual double ObtenerPerimetro(double Longitulado) = 0;
};

