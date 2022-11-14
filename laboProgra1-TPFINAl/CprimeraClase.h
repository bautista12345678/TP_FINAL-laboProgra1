#pragma once
#include"CclaseDeServicio.h"
class CprimeraClase :public CclaseDeServicio
{
private:
	bool notebook;
	bool Masaje;
	bool Champagne;
public:
	CprimeraClase();
	~CprimeraClase();
	void prenderNotebooks();
	void apagarNotebook();
	void pedirMasaje();
	void terminarMasaje();
	void pedirChampagne();
	void terminarChampagne();
	string to_string();
	void imprimir();
};

