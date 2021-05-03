#pragma once
#include "Persone.h"
#include<list>		//per usare le liste che sono array dinamici
#include <iostream>
using namespace std;

class Elenco
{
private:
	list<Persone> elenco;

public:
	Elenco();
	list<Persone> GetList();
	void StampaElenco(list<Persone> elenc);
	void AggiungiElemento(Persone persona);

};

