#pragma once
#include"Cazafata.h"
class Cazafata;
class CclaseDeServicio
{
private:
	bool Bebida;
	bool Comida;
	bool Ba�o;
	//bool Asiento;
	bool Dormir;
	//Cazafata* Azafata;
public:
	CclaseDeServicio();
	CclaseDeServicio(const CclaseDeServicio& _copia);
	~CclaseDeServicio();
	void setComida(bool _Comida);
	void setBebida(bool _Bebida);
	bool getComida();
	bool getBebida();
	bool getDormir();
	bool getBa�o();
	void pedirBebida(Cazafata* a);
	void terminarBeber();
	void pedirComida(Cazafata* a);
	void terminatComer();
	void irAlBa�o();
	void volverBa�o();
	void dormir();
	void despertarse();
	void llamarAzafata(Cazafata* a);
	void recibirMensaje(string m);
	virtual string to_string()=0;
	virtual void imprimir()=0;
};

