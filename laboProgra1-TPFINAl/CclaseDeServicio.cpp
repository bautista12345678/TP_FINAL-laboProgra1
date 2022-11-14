#include "CclaseDeServicio.h"
//#include <sstream>
CclaseDeServicio::CclaseDeServicio()
{
	//Azafata = _Azafata;
	Bebida = false;
	Comida = false;
	Ba�o = false;
	Dormir = false;

}
CclaseDeServicio::CclaseDeServicio(const CclaseDeServicio& _copia)
{
	Bebida=_copia.Bebida;
	Comida=_copia.Comida;
	Ba�o=_copia.Ba�o;
	Dormir=_copia.Dormir;
}
CclaseDeServicio::~CclaseDeServicio()
{
}
void CclaseDeServicio::setComida(bool _Comida)
{
	Comida = _Comida;
}
void CclaseDeServicio::setBebida(bool _Bebida)
{
	Bebida = _Bebida;
}
bool CclaseDeServicio::getComida()
{
	return Comida;
}
bool CclaseDeServicio::getBebida()
{
	return Bebida;
}
bool CclaseDeServicio::getDormir()
{
	return Dormir;
}
bool CclaseDeServicio::getBa�o()
{
	return Ba�o;
}
void CclaseDeServicio::pedirBebida(Cazafata* a)
{
	if (a->getDisponibilidad() == true)
	{
		this->llamarAzafata(a);
		a->llevarBebida();
		Bebida = true;
		a->setDisponibilidad(true);
	}
	else
	{
		cout << "la zafata no esta disponible. "<<endl;
	}
}

void CclaseDeServicio::terminarBeber()
{
	Bebida = false;
}

void CclaseDeServicio::pedirComida(Cazafata* a)
{
	if (a->getDisponibilidad() == true)
	{
		this->llamarAzafata(a);
		a->llevarComida();
		Comida = true;
		a->setDisponibilidad(true);
	}
	else
	{
		cout << "la azafata no esta disponible" << endl;
	}

}

void CclaseDeServicio::terminatComer()
{
	Comida = false;
}

void CclaseDeServicio::irAlBa�o()
{
	Ba�o = true;
}

void CclaseDeServicio::volverBa�o()
{
	Ba�o = false;
}

void CclaseDeServicio::dormir()
{
	Dormir = true;
}

void CclaseDeServicio::despertarse()
{
	Dormir = false;
}

void CclaseDeServicio::llamarAzafata(Cazafata *a)
{
	if (a->getDisponibilidad() == true) {
		a->AtenderLlamados();
	}
	else
	{
		cout << "esta ocupada" << endl;
	}
	
}

void CclaseDeServicio::recibirMensaje(string m)
{
	cout << "mensaje recibido:" << m << endl;
}

/*string CclaseDeServicio::to_string()
{
	stringstream ss;
	ss << "Bebiendo: " << Bebida << endl;
	ss << " Comiendo:" << Comida << endl;
	ss << " durmiendo:" << Dormir << endl;
	ss << " en el ba�o:" << Ba�o << endl;
	ss << "nombre de la azafata que lo atiende:" << Azafata->getnombre() << endl;
	return ss.str();
}

void CclaseDeServicio::imprimir()
{
	cout << to_string()<<endl;
}
*/