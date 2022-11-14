#include "Cturista.h"
#include <sstream>
Cturista::Cturista():CclaseDeServicio( )
{
	turista = 1;
}

Cturista::~Cturista()
{
}

string Cturista::to_string()
{
	stringstream ss;
	ss << "Bebiendo: " << this->getBebida() << endl;
	ss << " Comiendo:" << this->getComida() << endl;
	ss << " durmiendo:" << this->getDormir() << endl;
	ss << " en el baño:" << this->getBaño() << endl;
	//ss << "nombre de la azafata que lo atiende:" << Azafata->getnombre() << endl;
	return ss.str();
}

void Cturista::imprimir()
{
	cout << this->to_string() << endl;
}
