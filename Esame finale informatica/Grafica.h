#pragma once
#include "Elenco.h"
#include "Persone.h"
#include <iostream>
#include <conio.h>
using namespace std;

class Grafica
{
private:
	string sezione = "home";	// stati:  -HOME  -GESTIONE -VISUALIZZA ELENCO

public:

	Grafica();
	void SetSezione(string s);
	string GetSezione();
	void LogicaGrafica(string section);
	void Gestione(Grafica& gestoreGrafica, Elenco& elenco2);
};
	void Home(char& operazione, Grafica& gestoreGrafica);

