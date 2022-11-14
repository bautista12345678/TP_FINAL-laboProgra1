#pragma once
#include<string>
#include"Cpasajero.h"
#include "clista.h"
using namespace std;

class Cavion
{
private:
	int  AsientoAleatorioComisario;
	static int cantidadDeAsientos;
	int CatidadDeAsientosOcupados;
	string CodigoDeIngresoAlAvion;
	clista<Cpersona>* ListaCompleta;
	clista<Cpasajero>* ListaDePasajeros;
	clista<cCodigo>* listaCodigos;
	clista<Cpasajero>* prision;
	int NumeroDeAsiento;
public:
	Cavion(clista<Cpersona>* _ListaCompleta, clista<Cpasajero>* _ListaDePasajeros, clista<cCodigo>* _listaCodigos);
	~Cavion();
	clista<Cpasajero>* getListaDePasajeros();
	clista<cCodigo>* getlistaCodigos();
	clista<Cpasajero>* getprision();
	clista<Cpersona>* getListaCompleta();
	void comparaAmbasListas(clista<Cpasajero>* Lista);
	void SubirAlAvion(Cpasajero* p);
		void BajarAlAvion(Cpasajero* p);
		void imprimirPasajerosAbordo();
		void imprimircantidadDePasajerosAbordo();
};

