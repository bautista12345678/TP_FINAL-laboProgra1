#pragma once
#include<string>
#include"CclaseDeServicio.h"
#include "cCodigo.h"
#include"Cazafata.h"
#include"Cejecutivo.h"
#include"Cturista.h"
#include"CprimeraClase.h"
using namespace std;
enum class EnumPrivilegios
{
	turista,ejecutivo,primaveraClase,ninguno
};
enum class EnumEstadoDeDescompensacion
{
	SaludEstable, SaludRegular, SaludCritica 
};
class Cpasajero: public Cpersona
{
private:
	EnumEstadoDeDescompensacion Descompensacion;
	EnumPrivilegios TipoDePrivilegio;
	cCodigo *codigo;   //codigo alfanumerico
	CclaseDeServicio* ClaseDeservicio;
	bool BuenaConducta;
	bool sometido;
public:
	Cpasajero(string _nombre, string _dni,EnumPrivilegios p,cCodigo* _c,CclaseDeServicio *c);
	~Cpasajero();
	bool getBuenaConducta();
	void someter();
	void setconduta(bool _conducta);
	cCodigo* getcodigo();
	string to_string();
	void imprimir();
	CclaseDeServicio* getClaseservicio();
};

