#include<iostream>
#include<cstdlib>
#include<string>
#include"Cpasajero.h"
#include "Cavion.h"
#include "clista.h"
#include "Cejecutivo.h"
#include "CprimeraClase.h"
#include "Cturista.h"
#include "Ccopiloto.h"
#include "Ccomisario.h"
#define N 5;
using namespace std;
//turista, ejecutivo, primaveraClase, ninguno
int main() {

	//----------------creando azafatas--------------------------------
	Cazafata* azafata1 = new Cazafata("soledad", "94445678",true);
	Cazafata* azafata2 = new Cazafata("lucho", "12345678",false);
	
	cout<<azafata1->to_string() << endl;
	cout << azafata2->to_string() << endl;
	//----------------------------------------------------------------
	
	Cejecutivo* ejecutivo1 = new Cejecutivo();
	CprimeraClase* primeraClase1 = new CprimeraClase();
	Cturista* turista1 = new Cturista();
	Cejecutivo* ejecutivo2 = new Cejecutivo();
	CprimeraClase* primerClase2 = new CprimeraClase();

	//---------------------- generando los codigos de cada pasajero
	cCodigo* codigo1 = new cCodigo("TU", "1234", 1, "a");
	cCodigo* codigo2 = new cCodigo("BS", "1233", 2, "a");
	cCodigo* codigo3 = new cCodigo("BS", "1232", 3, "a");
	cCodigo* codigo4 = new cCodigo("PC", "1231", 4, "b");
	cCodigo* codigo5 = new cCodigo("PC", "1235", 5, "b");
	//--------------------- imprimir codigos -------------------
	cout << "codigo1: " << codigo1->to_string() << endl;
	cout << "codigo2: " << codigo2->to_string() << endl;
	cout << "codigo3: " << codigo3->to_string() << endl;
	cout << "codigo4: " << codigo4->to_string() << endl;
	cout << "codigo5: " << codigo5->to_string() << endl;
	cout << endl;
	//----------------------------------------------------------
	//-------------------- crendo los pasajeros----------------
	
	Cpasajero* pasajero1 = new Cpasajero("lucho","1234", EnumPrivilegios::turista, codigo1, turista1);
	Cpasajero* pasajero2 = new Cpasajero("jose", "1233", EnumPrivilegios::ejecutivo, codigo2, ejecutivo2);
	Cpasajero* pasajero3 = new Cpasajero("pedro","1232", EnumPrivilegios::ejecutivo, codigo3,ejecutivo1);
	Cpasajero* pasajero4 = new Cpasajero("anais",  "1231",EnumPrivilegios::primaveraClase, codigo4,primeraClase1);
	Cpasajero* pasajero5 = new Cpasajero("maria", "1235", EnumPrivilegios::primaveraClase, codigo5,primerClase2);
	
	//------------------------- imprimiendo pasajeros -----------------------
	cout << pasajero1->to_string() << endl;
	cout << pasajero2->to_string() << endl;
	cout << pasajero3->to_string() << endl;
	cout << pasajero4->to_string() << endl;
	cout << pasajero5->to_string() << endl;
	//--------------------------------------
	//--------------------creando piloto, copiloto y comisario -----------------------------------
	
	Cpiloto* piloto1 = new Cpiloto("bau", "2242355");
	Ccopiloto* copiloto1 = new Ccopiloto("mati", "4647384");
	Ccomisario* comisario1 = new Ccomisario("marshal","736373");
	cout << piloto1->to_string()<< endl;
	cout << copiloto1->to_string() << endl;
	cout << comisario1->to_string() << endl;
	//--------------------------------------
	
	
	clista<Cpasajero>* listaDePasajeros1 = new clista<Cpasajero>(5);
	try {
		(*listaDePasajeros1) + (pasajero1);
		(*listaDePasajeros1) + (pasajero2);
		(*listaDePasajeros1) + (pasajero3);
		(*listaDePasajeros1) + (pasajero4);
		(*listaDePasajeros1) + (pasajero5);

	}catch (exception e)
	{
		cout << e.what() << endl;
	}

	clista<cCodigo>* listaCodigos1 = new clista<cCodigo>(5);
	try{

		(*listaCodigos1) + (codigo1);
		(*listaCodigos1) + (codigo2);
		(*listaCodigos1) + (codigo3);
		(*listaCodigos1) + (codigo4);
		(*listaCodigos1) + (codigo5);
	}
	catch (exception e)
	{
		cout << e.what() << endl;
	}

	clista<Cpersona>* ListaCompleta = new clista<Cpersona>(40);
	try{
		(*ListaCompleta) + (azafata1);
		(*ListaCompleta) +(azafata2);
		(*ListaCompleta)+(pasajero1);
		(*ListaCompleta)+ (pasajero2);
		(*ListaCompleta)+ (pasajero3);
		(*ListaCompleta)+ (pasajero4);
		(*ListaCompleta)+ (pasajero5);
		(*ListaCompleta)+ (piloto1);
		(*ListaCompleta)+ (copiloto1);
		(*ListaCompleta)+ (comisario1);
	
	}
	catch(exception e)
	{
		cout << e.what() << endl;
	}

	Cavion* avion1 = new Cavion(ListaCompleta, listaDePasajeros1, listaCodigos1);
	avion1->getListaCompleta()->listar();
	//-----------------------------------------------------------
	cout << "llamomos a una azafata que esta no disponilble" << endl;
	pasajero1->getClaseservicio()->pedirBebida(azafata2);
	pasajero1->getClaseservicio()->imprimir();
	cout << "llamomos a una azafata que esta si disponilble" << endl;
	pasajero1->getClaseservicio()->pedirBebida(azafata1);
	pasajero1->getClaseservicio()->imprimir();
	pasajero1->getClaseservicio()->terminarBeber();
	pasajero1->getClaseservicio()->imprimir();
	pasajero1->getClaseservicio()->pedirComida(azafata1);
	pasajero1->getClaseservicio()->imprimir();
	pasajero1->getClaseservicio()->terminatComer();
	pasajero1->getClaseservicio()->imprimir();
	//------------------------------------------------------------
	piloto1->pedirBebida(azafata1);
	piloto1->AnuncioAltaVoz("estamos proximos a despegar.", azafata1);
	azafata1->setDisponibilidad(true);
	piloto1->pedirBebida(azafata1);
	piloto1->setbebida(false);
	azafata1->setDisponibilidad(false);
	piloto1->pilotear();
	//--------------------------- comisario ------------------------
	comisario1->comisario_pregunta();
	if (comisario1->preguntarSiTodoEstaEnOrden(avion1)==false)
	{
		cout << "el pasajero esta encarcelado" << endl;
	}
	else {
		cout << "no hay un nuevo pasajero sometido y encarcelado. " << endl;
	}
	cout << endl;
	cout << "--- despues de haber comenzado el vuelo el comisario nuevamente pregunta si todo esta bien ---" << endl;
	cout << endl;
	pasajero2->setconduta(true); //un pasajero se porto mal
	if (comisario1->preguntarSiTodoEstaEnOrden(avion1) == true)
	{
		cout << "el pasajero esta encarcelado" << endl;
	}
	else {
		cout << "no hay un nuevo pasajero sometido y encarcelado. " << endl;
	}
	//-------------------- pasajero ejecutivo------------
	Cejecutivo* aux = dynamic_cast<Cejecutivo*>(pasajero2->getClaseservicio());
	if (aux != NULL)
	{
		//es ejecutivo
		aux->prenderNotebooks();
		aux->imprimir();
	}
	Cturista* aux_t = dynamic_cast <Cturista*>(pasajero1->getClaseservicio());
	if (aux_t != NULL)
	{
		aux_t->dormir();
		aux_t->imprimir();
	}
		
	CprimeraClase* aux_c = dynamic_cast<CprimeraClase*>(pasajero4->getClaseservicio());
	if (aux_c != NULL)
	{
		aux_c->pedirChampagne();
		aux_c->imprimir();
		aux_c->terminarChampagne();
		aux_c->pedirMasaje();
		aux_c->terminarMasaje();
		aux_c->imprimir();
	}


	return 0;
}