#pragma once
#include"CclaseDeServicio.h"
class Cejecutivo :public CclaseDeServicio
{
private:
	bool notebook;
public:
	Cejecutivo();
	~Cejecutivo();
	void prenderNotebooks();
	bool getnotebook();
	void apagarNotebook();
	string to_string();
	void imprimir();
};

