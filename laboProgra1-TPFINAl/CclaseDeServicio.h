#pragma once
#include"Cazafata.h"
class Cazafata;
class CclaseDeServicio
{
private:
	bool Bebida;
	bool Comida;
	bool Baño;
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
	bool getBaño();
	void pedirBebida(Cazafata* a);
	void terminarBeber();
	void pedirComida(Cazafata* a);
	void terminatComer();
	void irAlBaño();
	void volverBaño();
	void dormir();
	void despertarse();
	void llamarAzafata(Cazafata* a);
	void recibirMensaje(string m);
	virtual string to_string()=0;
	virtual void imprimir()=0;
};

