#pragma once
#include"CclaseDeServicio.h"
class Cturista:public CclaseDeServicio
{
private:
	unsigned int turista;
public:
	Cturista();
	~Cturista();
	string to_string();
	void imprimir();
};

