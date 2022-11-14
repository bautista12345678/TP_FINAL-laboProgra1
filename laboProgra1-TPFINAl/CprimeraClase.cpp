#include "CprimeraClase.h"
#include <sstream>
CprimeraClase::CprimeraClase() :CclaseDeServicio()
{
	notebook = false;
	 Masaje=false;
	 Champagne = false;
}

CprimeraClase::~CprimeraClase()
{
}

void CprimeraClase::prenderNotebooks()
{
	this->notebook = true;
}

void CprimeraClase::apagarNotebook()
{
	this->notebook = false;
}

void CprimeraClase::pedirMasaje()
{
	cout << " el pasajero recibe un masaje. " << endl;
	this->Masaje = true;
}

void CprimeraClase::terminarMasaje()
{
	cout << "el pasajero termino de darse un masaje. " << endl;
	this->Masaje = false;
}

void CprimeraClase::pedirChampagne()
{
	cout << "el pasajero pide un champagne. " << endl;
	this->Champagne = true;
}

void CprimeraClase::terminarChampagne()
{
	cout << "termino su champagne el pasajero. " << endl;
	this->Champagne = false;
}

string CprimeraClase::to_string()
{
	stringstream ss;
	ss << "Bebiendo: " << this->getBebida() << endl;
	ss << " Comiendo:" << this->getComida() << endl;
	ss << " durmiendo:" << this->getDormir() << endl;
	ss << " en el ba�o:" << this->getBa�o() << endl;
//	ss << "nombre de la azafata que lo atiende:" << Azafata->getnombre() << endl;
	return ss.str();
}

void CprimeraClase::imprimir()
{
	cout << to_string() << endl;
}
